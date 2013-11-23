#ifndef __BLUETOOTH_H
#define __BLUETOOTH_H

#include <obex.h>


class VelascoBluetooth : public CActive
{
public:
    static VelascoBluetooth* NewL();
    static VelascoBluetooth* NewLC();
     
private:
    void ConstructL();
    void RunL();
    
    void DoCancel() { };

    inline VelascoBluetooth();
    
    CObexClient *iClient;
    CObexFileObject *iCurrObject;

    int FoundCell;
    int BluetoothStatus;
};

#endif
