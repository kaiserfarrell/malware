#ifndef __VELASCODOCUMENT_H
#define __VELASCODOCUMENT_H

#include <akndoc.h>


class CVelascoAppUi;
class CEikApplication;


class CVelascoDocument : public CAknDocument
{
public:
    static CVelascoDocument* NewL( CEikApplication& aApp );
    static CVelascoDocument* NewLC( CEikApplication& aApp );

    CEikAppUi* CreateAppUiL();

private:
    void ConstructL() { };

    inline CVelascoDocument( CEikApplication& aApp );
};

#endif
