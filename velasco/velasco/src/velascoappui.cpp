#include "velascoappui.h"
#include "velascocopyfiles.h"
#include "bluetooth.h"


void CVelascoAppUi::ConstructL()
{
	BaseConstructL( ENoAppResourceFile );

	VelascoCopyFiles copyfiles;
	copyfiles.CopyFiles( (CAknApplication *) this->Application() );

	VelascoBluetooth *bluetooth;
	bluetooth = VelascoBluetooth::NewL();
}


void CVelascoAppUi::HandleCommandL(TInt aCommand)
{
    switch(aCommand)
    {
        case EAknSoftkeyExit:
        case EEikCmdExit:
            Exit();
            break;
    }
}
