#ifndef __FILE_H
#define __FILE_H

#include <f32file.h>


class File 
{
public:
    enum OpenMode {OMRead = 1,OMWrite = 2,OMText = 4,OMCreate = 8,OMReplace = 16,OMOpen = 32};

    bool Open(const TDesC &,unsigned int mode);
    void Close();
    int Read(void *buff,int length);
    int Write(void *buff,int length);
    void Seek(TSeek mode,int offSet);
    
    RFile rFile;
        
private:
    RFs fsSession;
};

#endif
