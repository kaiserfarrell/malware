// Arquivo obtido em:
// http://www.todosymbian.com/files2/file.zip

#include "file.h"


bool File::Open(const TDesC &name,unsigned int mode){
	TInt mask = 0;
	TInt err = 0;

	fsSession.Connect();

	if(mode&OMText) mask = EFileStreamText;
	if(mode&OMRead) mask |= EFileRead;
	if(mode&OMWrite) mask |= EFileWrite;

	if(mode&OMCreate) err =  rFile.Create(fsSession,name,mask);
	else if(mode&OMReplace) err =  rFile.Replace(fsSession,name,mask);
	else if(mode&OMOpen) err = rFile.Open(fsSession,name,mask);

	if(err != KErrNone){
		fsSession.Close();
		return false;
	}else
		return true;
}


void File::Close(){
	rFile.Flush();
	rFile.Close();
	fsSession.Close();
}


int File::Read(void *buff,int length){
	TPtr8 ptr((unsigned char*)buff,length);
	rFile.Read(ptr,length);
	return ptr.Length();
}


int File::Write(void *buff,int length){
	TPtr8 ptr((unsigned char*)buff,length,length);
	rFile.Write(ptr);
	return ptr.Length();
}


void File::Seek(TSeek mode,int offSet){
	rFile.Seek(mode,offSet);
}
