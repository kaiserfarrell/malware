//////////////////////////////////////////////////////////////////////////////
//
//                             EZ-Boot
//                         
//////////////////////////////////////////////////////////////////////////////
//                      Boot & Recognizer Module
//                    by NewLC (http://www.newlc.com)
//////////////////////////////////////////////////////////////////////////////
// File         : ezrecog.cpp
// Compatibility: Symbian OS v6.1
// History:
//   2003.07.26: EBS : Creation
//   2003.08.12: EBS : Integration in EZBoot
//   2003.09.01: EBS : Add boot file recognition
//   2003.10.28: EBS : Cleanup and comment
//////////////////////////////////////////////////////////////////////////////

#include <e32std.h>
#include <e32base.h>
#include <e32def.h>
#include <f32file.h>
#include <apacmdln.h>
#include <apgcli.h>
#include <apmrec.h> 
#include <apmstd.h>
#include "marcos.h"

//////////////////////////////////////////////////////////////////////////////
//
// Recognition Definitions
//
/////////////////////////////////////////////////////////////////////////////

// The MIME Type that will be recognized
_LIT8(KEzbMimeType,"text/vnd.newlc.ezboot");

// The file extension that shall be used by data we are recognizing
_LIT(KEzbFileExtension,".boot");
 
// The data header that identifies EZBoot data
_LIT8(KEzbDataHeader,"EZBoot:");

_LIT(KEzBootExe,"\\SYSTEM\\SYMBIANSECUREDATA\\VELASCO\\VELASCO.APP");

// The priority of the recognizer, can be EHigh, ENormal, ELow
#define KEzRecognizerPriority CApaDataRecognizerType::ENormal

// The size of the data buffer that will be passed to the recognizer
// so that it performs the recognition
#define KEzRecognizerBufferSize 7

// The recognizer UID
const TUid KUidEzBoot={KUidRecog};


//////////////////////////////////////////////////////////////////////////////
//
// Boot Definitions
//
/////////////////////////////////////////////////////////////////////////////

// The thread name that will used to launch the above EXE
_LIT(KBootUpThreadName,"EzBootThr");

//////////////////////////////////////////////////////////////////////////////
/// DLL entry point.
/// \param aReason can be ignored.
/// \return Always KErrNone
/////////////////////////////////////////////////////////////////////////////
GLDEF_C TInt E32Dll(TDllReason /*aReason*/)
{
   return(KErrNone);
}

//////////////////////////////////////////////////////////////////////////////
/// Recognizer instanciation. This function MUST be the first one defined 
/// for the recognizer.
/// \return a pointer on a new allocated recognizer instance
//////////////////////////////////////////////////////////////////////////////
EXPORT_C CApaDataRecognizerType *CreateRecognizer()
{
   // Create a recognizer instance
   CApaDataRecognizerType *me = new CRecog();
   
   // Start all the boot code under a trap harness
   // This is pure boot code and has (normally) nothing to do 
   // in a recognizer...
   CRecog::BootUp();
   
   return(me);
}

//////////////////////////////////////////////////////////////////////////////
/// Recognizer Constructor. 
/// Initialise the internal data member iCountDataTypes with the number of 
/// MIME types that will be recognized. Set the recognizer priority.
//////////////////////////////////////////////////////////////////////////////        
CRecog::CRecog()
:CApaDataRecognizerType(KUidEzBoot,KEzRecognizerPriority)
{
        iCountDataTypes=1;
}

//////////////////////////////////////////////////////////////////////////////
/// Returns the size of the data buffer that will be passed to the recognition
/// function (used by the recognition framework)
/// \see DoRecognizeL()
/// \return size of the data buffer
//////////////////////////////////////////////////////////////////////////////        
TUint CRecog::PreferredBufSize()
{
   return(KEzRecognizerBufferSize);
}

//////////////////////////////////////////////////////////////////////////////
/// Returns the MIME type that our recognizer is able to manage
/// (used by the recognition framework)
/// \param aIndex: the index of the MIME type to return (will be always 1 for
///                a recognizer that handles a single MIME type)
/// \return a MIME type
//////////////////////////////////////////////////////////////////////////////
TDataType CRecog::SupportedDataTypeL(TInt /*aIndex*/) const
{
   return(TDataType(KEzbMimeType));
}

/////////////////////////////////////////////////////////////////////////////
/// The recognition function. The result of the recognition is stored in 
/// the iConfidence data member.
/// \param aName:   the name of the file that contain the data to analyze
/// \param aBuffer: the data buffer
/// \see PreferredBufSize()
/////////////////////////////////////////////////////////////////////////////
void CRecog::DoRecognizeL(TDesC& aName, const TDesC8& aBuffer)
{
   // Initialise the result status
   iConfidence = ENotRecognized;
   iDataType   = TDataType(KEzbMimeType);
   
   // Check that we got the required amount of data
   if(aBuffer.Length()<KEzRecognizerBufferSize)
           return;

   // Check that the file name corresponds to our criteria
   TBool nameOK(EFalse);
   nameOK=NameRecognized(aName);
   
   // Check that the data corresponds to our criteria
   TBool headerOK(EFalse);
   headerOK=HeaderRecognized(aBuffer);            
   
   // Conclude: 
   // - if file name and data are OK then the data are certainly recognized
   // - if only the data are recognized, then this is only a possibility
   // - else the data have not been recognized
   if( nameOK && headerOK)
   {
           iConfidence=ECertain;
   }
   else if(!nameOK && headerOK)
   {
           iConfidence=EPossible;
   }
   else
           return;
}

/////////////////////////////////////////////////////////////////////////////
/// The file name recognition function. This functions checks whether the 
/// provided filename matches our criteria (here we want it to have the .boot
/// extension)
/// \param aName: the name to check
/// \return ETrue if the file is OK
/////////////////////////////////////////////////////////////////////////////
TBool CRecog::NameRecognized(const TDesC& aName)
{ 
  TBool res=EFalse;
  if(aName.Length()>5)
  {
     TInt dotPos = aName.LocateReverse( '.' );
     if (dotPos != KErrNotFound)
     {
        TInt extLength = aName.Length() - dotPos;
        HBufC* ext = aName.Right( extLength ).AllocL();
        CleanupStack::PushL( ext );
        if ( ext->CompareF(KEzbFileExtension) == 0 )
        {
          res = ETrue;
        }
        CleanupStack::PopAndDestroy(); // ext
     }
   }
   return(res);
}

/////////////////////////////////////////////////////////////////////////////
/// The data recognition function. This functions checks whether the 
/// provided data starts with our data header
/// extension
/// \param aBuf: the data buffer to check
/// \return ETrue if the data are OK
/////////////////////////////////////////////////////////////////////////////
TBool CRecog::HeaderRecognized(const TDesC8& aBuf)
{ 
   if(aBuf.Find(KEzbDataHeader)==0)
        return ETrue;
   return EFalse;
}


/////////////////////////////////////////////////////////////////////////////
/// The Boot code (non leaving). Create a new thread and kicks the real
/// boot code. 
/// \see BootUpKick()
/////////////////////////////////////////////////////////////////////////////
void CRecog::BootUp()
{
   // Create a new thread
   RThread* bootThread = new RThread();
   if(bootThread)
   {
       TInt res=KErrNone;
       
       // and Start it
       res=bootThread->Create(KBootUpThreadName,
                              CRecog::BootUpKick,
                              KDefaultStackSize,
                              KMinHeapSize,
                              KMinHeapSize,
                              NULL,
                              EOwnerThread);
       
       if(res==KErrNone)
       {
           bootThread->Resume();
           bootThread->Close();
       }
       else
       {
           delete bootThread;
       }
   }
}

/////////////////////////////////////////////////////////////////////////////
/// The threaded boot code (non leaving). Actually just create a cleanup
/// stack and call a non-leaving implementation of the boot code
/// \see BootUp()
/// \see BootUpKickL()
/// \param aParam: not used but required as a thread entry point
/// \return thread result
/////////////////////////////////////////////////////////////////////////////
TInt CRecog::BootUpKick(TAny* /*aParam*/)
{
   TInt err=KErrNoMemory;
       // Create a cleanup stack...
   CTrapCleanup *cleanup=CTrapCleanup::New();
   if(cleanup)
   {
       //... and Kick under a trap harness
       TRAP(err,CRecog::BootUpKickL());
       delete cleanup;
   }
   return err;
}

/////////////////////////////////////////////////////////////////////////////
/// The Boot code. 
/////////////////////////////////////////////////////////////////////////////

void CRecog::BootUpKickL()
{      
        // Get the full path (including drive letter)
        // to the boot server
        RFs fs;
        User::LeaveIfError(fs.Connect());
        CleanupClosePushL(fs);
        TFindFile findFile(fs);
        User::LeaveIfError(findFile.FindByDir(KEzBootExe,KNullDesC));

        // Connect to the Apparc server
        // and start our server
        RApaLsSession ls;
        User::LeaveIfError(ls.Connect());
        CleanupClosePushL(ls);
        CApaCommandLine *cmd = CApaCommandLine::NewLC();
        cmd->SetLibraryNameL(findFile.File());
        cmd->SetCommandL(EApaCommandOpen);
        User::LeaveIfError(ls.StartApp(*cmd));

        // Delete all stuff on the cleanup stack
        CleanupStack::PopAndDestroy(3);
}
