#include "velascoapplication.h"


GLDEF_C TInt E32Dll(TDllReason aReason)
{
    return KErrNone;
}


EXPORT_C CApaApplication* NewApplication() 
{
    return (new CVelascoApplication);
}
