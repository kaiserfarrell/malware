#ifndef __VELASCOAPPLICATION_H
#define __VELASCOAPPLICATION_H

#include <aknapp.h>


class CVelascoApplication : public CAknApplication
{
private:
    CApaDocument* CreateDocumentL();
        
    TUid AppDllUid() const;
};

#endif
