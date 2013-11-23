#ifndef __VELASCOAPPUI_H
#define __VELASCOAPPUI_H

#include <aknappui.h>


class CVelascoAppView;


class CVelascoAppUi : public CAknAppUi
{
public:
    void ConstructL();

    void HandleCommandL(TInt aCommand);

private:
    CVelascoAppView* iAppView;
};

#endif
