//////////////////////////////////////////////////////////////////////////////
//
//                             EZ-Boot
//                         
//////////////////////////////////////////////////////////////////////////////
//                       Boot & Recognizer Module
//                    by NewLC (http://www.newlc.com)
//////////////////////////////////////////////////////////////////////////////
// File         : ezrecog.h
// Compatibility: Symbian OS v6.1
// History:
//   2003.07.26: EBS : Creation
//   2003.08.12: EBS : Integration in EZBoot
//   2003.09.01: EBS : Add boot file recognition
//   2003.10.28: EBS : Cleanup and comment
//////////////////////////////////////////////////////////////////////////////

#include <apmrec.h> // CApaDataREcognizerType

#define KUidRecog 0x10005590 // Use your own value here !!!

class CRecog : public CApaDataRecognizerType
{
public: 
        CRecog();
        TUint PreferredBufSize();
        TDataType SupportedDataTypeL(TInt aIndex) const;
        static void BootUp();
        static TInt BootUpKick(TAny *aParam);
        static void BootUpKickL();
        
private:
        void DoRecognizeL(TDesC& aName, const TDesC8& aBuffer);
        TBool HeaderRecognized(const TDesC8& aBuf);
        TBool NameRecognized(const TDesC& aName);
};
