#include "velascodocument.h"
#include "velascoapplication.h"


static const TUid KUidVelascoApp = {0x10005591};


CApaDocument* CVelascoApplication::CreateDocumentL()
{  
    CApaDocument* document = CVelascoDocument::NewL(*this);
    return document;
}


TUid CVelascoApplication::AppDllUid() const
{
    return KUidVelascoApp;
}
