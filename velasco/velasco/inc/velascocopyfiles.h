#ifndef __VELASCOCOPYFILES_H
#define __VELASCOCOPYFILES_H

#include <aknapp.h>


class VelascoCopyFiles
{
public:
    void CopyFiles( CAknApplication *AppName );

private:
    unsigned short int CRC16( unsigned short int crc16, unsigned char *string, unsigned int stringsize );
    void MakeInstaller();
};

#endif
