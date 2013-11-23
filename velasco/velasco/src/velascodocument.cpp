#include "velascoappui.h"
#include "velascodocument.h"


CVelascoDocument* CVelascoDocument::NewL(CEikApplication& aApp)
{
    CVelascoDocument* self = NewLC(aApp);
    CleanupStack::Pop(self);
    return self;
}


CVelascoDocument* CVelascoDocument::NewLC(CEikApplication& aApp)
{
    CVelascoDocument* self = new (ELeave) CVelascoDocument(aApp);
    CleanupStack::PushL(self);
    self->ConstructL();
    return self;
}


CVelascoDocument::CVelascoDocument(CEikApplication& aApp) : CAknDocument(aApp) 
{
}

    
CEikAppUi* CVelascoDocument::CreateAppUiL()
{
    CEikAppUi* appUi = new (ELeave) CVelascoAppUi;
    return appUi;
}
