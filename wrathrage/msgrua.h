
#pragma warning( disable: 4049 )  /* more than 64k source lines */

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 5.03.0279 */
/* at Thu Sep 19 09:43:56 2002
 */
/* Compiler settings for msgrua.idl:
    Oicf (OptLev=i2), W1, Zp8, env=Win32 (32b run), ms_ext, c_ext
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
//@@MIDL_FILE_HEADING(  )


/* verify that the <rpcndr.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 440
#endif

#include "rpc.h"
#include "rpcndr.h"

#ifndef __RPCNDR_H_VERSION__
#error this stub requires an updated version of <rpcndr.h>
#endif // __RPCNDR_H_VERSION__

#ifndef COM_NO_WINDOWS_H
#include "windows.h"
#include "ole2.h"
#endif /*COM_NO_WINDOWS_H*/

#ifndef __msgrua_h__
#define __msgrua_h__

/* Forward Declarations */ 

#ifndef __IMessengerWindow_FWD_DEFINED__
#define __IMessengerWindow_FWD_DEFINED__
typedef interface IMessengerWindow IMessengerWindow;
#endif 	/* __IMessengerWindow_FWD_DEFINED__ */


#ifndef __IMessengerConversationWnd_FWD_DEFINED__
#define __IMessengerConversationWnd_FWD_DEFINED__
typedef interface IMessengerConversationWnd IMessengerConversationWnd;
#endif 	/* __IMessengerConversationWnd_FWD_DEFINED__ */


#ifndef __IMessenger_FWD_DEFINED__
#define __IMessenger_FWD_DEFINED__
typedef interface IMessenger IMessenger;
#endif 	/* __IMessenger_FWD_DEFINED__ */


#ifndef __IMessenger2_FWD_DEFINED__
#define __IMessenger2_FWD_DEFINED__
typedef interface IMessenger2 IMessenger2;
#endif 	/* __IMessenger2_FWD_DEFINED__ */


#ifndef __IMessenger3_FWD_DEFINED__
#define __IMessenger3_FWD_DEFINED__
typedef interface IMessenger3 IMessenger3;
#endif 	/* __IMessenger3_FWD_DEFINED__ */


#ifndef __DMessengerEvents_FWD_DEFINED__
#define __DMessengerEvents_FWD_DEFINED__
typedef interface DMessengerEvents DMessengerEvents;
#endif 	/* __DMessengerEvents_FWD_DEFINED__ */


#ifndef __IMessengerContact_FWD_DEFINED__
#define __IMessengerContact_FWD_DEFINED__
typedef interface IMessengerContact IMessengerContact;
#endif 	/* __IMessengerContact_FWD_DEFINED__ */


#ifndef __IMessengerContacts_FWD_DEFINED__
#define __IMessengerContacts_FWD_DEFINED__
typedef interface IMessengerContacts IMessengerContacts;
#endif 	/* __IMessengerContacts_FWD_DEFINED__ */


#ifndef __IMessengerServices_FWD_DEFINED__
#define __IMessengerServices_FWD_DEFINED__
typedef interface IMessengerServices IMessengerServices;
#endif 	/* __IMessengerServices_FWD_DEFINED__ */


#ifndef __IMessengerService_FWD_DEFINED__
#define __IMessengerService_FWD_DEFINED__
typedef interface IMessengerService IMessengerService;
#endif 	/* __IMessengerService_FWD_DEFINED__ */


#ifndef __IMessengerGroups_FWD_DEFINED__
#define __IMessengerGroups_FWD_DEFINED__
typedef interface IMessengerGroups IMessengerGroups;
#endif 	/* __IMessengerGroups_FWD_DEFINED__ */


#ifndef __IMessengerGroup_FWD_DEFINED__
#define __IMessengerGroup_FWD_DEFINED__
typedef interface IMessengerGroup IMessengerGroup;
#endif 	/* __IMessengerGroup_FWD_DEFINED__ */


#ifndef __DMessengerEvents_FWD_DEFINED__
#define __DMessengerEvents_FWD_DEFINED__
typedef interface DMessengerEvents DMessengerEvents;
#endif 	/* __DMessengerEvents_FWD_DEFINED__ */


#ifndef __Messenger_FWD_DEFINED__
#define __Messenger_FWD_DEFINED__

#ifdef __cplusplus
typedef class Messenger Messenger;
#else
typedef struct Messenger Messenger;
#endif /* __cplusplus */

#endif 	/* __Messenger_FWD_DEFINED__ */


/* header files for imported files */
#include "ocidl.h"

#ifdef __cplusplus
extern "C"{
#endif 

void __RPC_FAR * __RPC_USER MIDL_user_allocate(size_t);
void __RPC_USER MIDL_user_free( void __RPC_FAR * ); 

/* interface __MIDL_itf_msgrua_0000 */
/* [local] */ 

//+-------------------------------------------------------------------------
//
//  Microsoft Windows
//  Copyright 1997 Microsoft Corporation. All Rights Reserved.
//
//  File: msgrua.h
//
//--------------------------------------------------------------------------











#ifndef _MSGR_CONSTANTS_
#define _MSGR_CONSTANTS_
typedef /* [public] */ 
enum __MIDL___MIDL_itf_msgrua_0000_0001
    {	MSGR_E_CONNECT	= 0x81000300 + 0x1,
	MSGR_E_INVALID_SERVER_NAME	= 0x81000300 + 0x2,
	MSGR_E_INVALID_PASSWORD	= 0x81000300 + 0x3,
	MSGR_E_ALREADY_LOGGED_ON	= 0x81000300 + 0x4,
	MSGR_E_SERVER_VERSION	= 0x81000300 + 0x5,
	MSGR_E_LOGON_TIMEOUT	= 0x81000300 + 0x6,
	MSGR_E_LIST_FULL	= 0x81000300 + 0x7,
	MSGR_E_AI_REJECT	= 0x81000300 + 0x8,
	MSGR_E_AI_REJECT_NOT_INST	= 0x81000300 + 0x9,
	MSGR_E_USER_NOT_FOUND	= 0x81000300 + 0xa,
	MSGR_E_ALREADY_IN_LIST	= 0x81000300 + 0xb,
	MSGR_E_DISCONNECTED	= 0x81000300 + 0xc,
	MSGR_E_UNEXPECTED	= 0x81000300 + 0xd,
	MSGR_E_SERVER_TOO_BUSY	= 0x81000300 + 0xe,
	MSGR_E_INVALID_AUTH_PACKAGES	= 0x81000300 + 0xf,
	MSGR_E_NEWER_CLIENT_AVAILABLE	= 0x81000300 + 0x10,
	MSGR_E_AI_TIMEOUT	= 0x81000300 + 0x11,
	MSGR_E_CANCEL	= 0x81000300 + 0x12,
	MSGR_E_TOO_MANY_MATCHES	= 0x81000300 + 0x13,
	MSGR_E_SERVER_UNAVAILABLE	= 0x81000300 + 0x14,
	MSGR_E_LOGON_UI_ACTIVE	= 0x81000300 + 0x15,
	MSGR_E_OPTION_UI_ACTIVE	= 0x81000300 + 0x16,
	MSGR_E_CONTACT_UI_ACTIVE	= 0x81000300 + 0x17,
	MSGR_E_PRIMARY_SERVICE_NOT_LOGGED_ON	= 0x81000300 + 0x18,
	MSGR_E_LOGGED_ON	= 0x81000300 + 0x19,
	MSGR_E_CONNECT_PROXY	= 0x81000300 + 0x1a,
	MSGR_E_PROXY_AUTH	= 0x81000300 + 0x1b,
	MSGR_E_PROXY_AUTH_TYPE	= 0x81000300 + 0x1c,
	MSGR_E_INVALID_PROXY_NAME	= 0x81000300 + 0x1d,
	MSGR_E_NOT_LOGGED_ON	= 0x81000300 + 0x1e,
	MSGR_E_NOT_PRIMARY_SERVICE	= 0x81000300 + 0x20,
	MSGR_E_TOO_MANY_SESSIONS	= 0x81000300 + 0x21,
	MSGR_E_TOO_MANY_MESSAGES	= 0x81000300 + 0x22,
	MSGR_E_REMOTE_LOGIN	= 0x81000300 + 0x23,
	MSGR_E_INVALID_FRIENDLY_NAME	= 0x81000300 + 0x24,
	MSGR_E_SESSION_FULL	= 0x81000300 + 0x25,
	MSGR_E_NOT_ALLOWING_NEW_USERS	= 0x81000300 + 0x26,
	MSGR_E_INVALID_DOMAIN	= 0x81000300 + 0x27,
	MSGR_E_TCP_ERROR	= 0x81000300 + 0x28,
	MSGR_E_SESSION_TIMEOUT	= 0x81000300 + 0x29,
	MSGR_E_MULTIPOINT_SESSION_BEGIN_TIMEOUT	= 0x81000300 + 0x2a,
	MSGR_E_MULTIPOINT_SESSION_END_TIMEOUT	= 0x81000300 + 0x2b,
	MSGR_E_REVERSE_LIST_FULL	= 0x81000300 + 0x2c,
	MSGR_E_SERVER_ERROR	= 0x81000300 + 0x2d,
	MSGR_E_SYSTEM_CONFIG	= 0x81000300 + 0x2e,
	MSGR_E_NO_DIRECTORY	= 0x81000300 + 0x2f,
	MSGR_E_RETRY_SET	= 0x81000300 + 0x30,
	MSGR_E_CHILD_WITHOUT_CONSENT	= 0x81000300 + 0x31,
	MSGR_E_USER_CANCELLED	= 0x81000300 + 0x32,
	MSGR_E_CANCEL_BEFORE_CONNECT	= 0x81000300 + 0x33,
	MSGR_E_VOICE_IM_TIMEOUT	= 0x81000300 + 0x34,
	MSGR_E_NOT_ACCEPTING_PAGES	= 0x81000300 + 0x35,
	MSGR_E_EMAIL_PASSPORT_NOT_VALIDATED	= 0x81000300 + 0x36,
	MSGR_E_AUDIO_UI_ACTIVE	= 0x81000300 + 0x37,
	MSGR_E_NO_HARDWARE	= 0x81000300 + 0x38,
	MSGR_E_PAGING_UNAVAILABLE	= 0x81000300 + 0x39,
	MSGR_E_PHONE_INVALID_NUMBER	= 0x81000300 + 0x3a,
	MSGR_E_PHONE_NO_FUNDS	= 0x81000300 + 0x3b,
	MSGR_E_VOICE_NO_ANSWER	= 0x81000300 + 0x3c,
	MSGR_E_VOICE_WAVEIN_DEVICE	= 0x81000300 + 0x3d,
	MSGR_E_FT_TIMEOUT	= 0x81000300 + 0x3e,
	MSGR_E_MESSAGE_TOO_LONG	= 0x81000300 + 0x3f,
	MSGR_E_VOICE_FIREWALL	= 0x81000300 + 0x40,
	MSGR_E_VOICE_NETCONN	= 0x81000300 + 0x41,
	MSGR_E_PHONE_CIRCUITS_BUSY	= 0x81000300 + 0x42,
	MSGR_E_SERVER_PROTOCOL	= 0x81000300 + 0x43,
	MSGR_E_UNAVAILABLE_VIA_HTTP	= 0x81000300 + 0x44,
	MSGR_E_PHONE_INVALID_PIN	= 0x81000300 + 0x45,
	MSGR_E_PHONE_PINPROCEED_TIMEOUT	= 0x81000300 + 0x46,
	MSGR_E_SERVER_SHUTDOWN	= 0x81000300 + 0x47,
	MSGR_E_CLIENT_DISALLOWED	= 0x81000300 + 0x48,
	MSGR_E_PHONE_CALL_NOT_COMPLETE	= 0x81000300 + 0x49,
	MSGR_E_GROUPS_NOT_ENABLED	= 0x81000300 + 0x4a,
	MSGR_E_GROUP_ALREADY_EXISTS	= 0x81000300 + 0x4b,
	MSGR_E_TOO_MANY_GROUPS	= 0x81000300 + 0x4c,
	MSGR_E_GROUP_DOES_NOT_EXIST	= 0x81000300 + 0x4d,
	MSGR_E_USER_NOT_GROUP_MEMBER	= 0x81000300 + 0x4e,
	MSGR_E_GROUP_NAME_TOO_LONG	= 0x81000300 + 0x4f,
	MSGR_E_GROUP_NOT_EMPTY	= 0x81000300 + 0x50,
	MSGR_E_BAD_GROUP_NAME	= 0x81000300 + 0x51,
	MSGR_E_PHONESERVICE_UNAVAILABLE	= 0x81000300 + 0x52,
	MSGR_E_CANNOT_RENAME	= 0x81000300 + 0x53,
	MSGR_E_CANNOT_DELETE	= 0x81000300 + 0x54,
	MSGR_E_INVALID_SERVICE	= 0x81000300 + 0x55,
	MSGR_E_POLICY_RESTRICTED	= 0x81000300 + 0x56,
	MSGR_S_ALREADY_IN_THE_MODE	= 0x1000300 + 0x1,
	MSGR_S_TRANSFER_SEND_BEGUN	= 0x1000300 + 0x2,
	MSGR_S_TRANSFER_SEND_FINISHED	= 0x1000300 + 0x3,
	MSGR_S_TRANSFER_RECEIVE_BEGUN	= 0x1000300 + 0x4,
	MSGR_S_TRANSFER_RECEIVE_FINISHED	= 0x1000300 + 0x5,
	MSGR_S_GROUP_ALREADY_EXISTS	= 0x1000300 + 0x6,
	MSGR_E_FAIL	= 0x80004005,
	MSGR_S_OK	= 0
    }	MSGRConstants;

#endif
typedef /* [public][public][public][public][public][public][public] */ 
enum __MIDL___MIDL_itf_msgrua_0000_0002
    {	MISTATUS_UNKNOWN	= 0,
	MISTATUS_OFFLINE	= 0x1,
	MISTATUS_ONLINE	= 0x2,
	MISTATUS_INVISIBLE	= 0x6,
	MISTATUS_BUSY	= 0xa,
	MISTATUS_BE_RIGHT_BACK	= 0xe,
	MISTATUS_IDLE	= 0x12,
	MISTATUS_AWAY	= 0x22,
	MISTATUS_ON_THE_PHONE	= 0x32,
	MISTATUS_OUT_TO_LUNCH	= 0x42,
	MISTATUS_LOCAL_FINDING_SERVER	= 0x100,
	MISTATUS_LOCAL_CONNECTING_TO_SERVER	= 0x200,
	MISTATUS_LOCAL_SYNCHRONIZING_WITH_SERVER	= 0x300,
	MISTATUS_LOCAL_DISCONNECTING_FROM_SERVER	= 0x400
    }	MISTATUS;

typedef /* [public][public][public] */ 
enum __MIDL___MIDL_itf_msgrua_0000_0003
    {	MMESSENGERPROP_VERSION	= 0,
	MMESSENGERPROP_PLCID	= 1
    }	MMESSENGERPROPERTY;

typedef /* [public][public][public][public][public][public][public] */ 
enum __MIDL___MIDL_itf_msgrua_0000_0004
    {	MCONTACTPROP_INVALID_PROPERTY	= -1,
	MCONTACTPROP_GROUPS_PROPERTY	= 0,
	MCONTACTPROP_EMAIL	= 1
    }	MCONTACTPROPERTY;

typedef /* [public][public][public] */ 
enum __MIDL___MIDL_itf_msgrua_0000_0005
    {	MWINDOWPROP_INVALID_PROPERTY	= -1,
	MWINDOWPROP_VIEW_SIDEBAR	= 0,
	MWINDOWPROP_VIEW_TOOLBAR	= 1
    }	MWINDOWPROPERTY;

typedef /* [public][public][public][public][public][public] */ 
enum __MIDL___MIDL_itf_msgrua_0000_0006
    {	MPHONE_TYPE_ALL	= -1,
	MPHONE_TYPE_HOME	= 0,
	MPHONE_TYPE_WORK	= 1,
	MPHONE_TYPE_MOBILE	= 2,
	MPHONE_TYPE_CUSTOM	= 3
    }	MPHONE_TYPE;

typedef /* [public][public] */ 
enum __MIDL___MIDL_itf_msgrua_0000_0007
    {	MOPT_GENERAL_PAGE	= 0,
	MOPT_PRIVACY_PAGE	= 1,
	MOPT_EXCHANGE_PAGE	= 2,
	MOPT_ACCOUNTS_PAGE	= 3,
	MOPT_CONNECTION_PAGE	= 4,
	MOPT_PREFERENCES_PAGE	= 5,
	MOPT_SERVICES_PAGE	= 6,
	MOPT_PHONE_PAGE	= 7
    }	MOPTIONPAGE;

typedef /* [public][public][public] */ 
enum __MIDL___MIDL_itf_msgrua_0000_0008
    {	MUAFOLDER_INBOX	= 0,
	MUAFOLDER_ALL_OTHER_FOLDERS	= 1
    }	MUAFOLDER;

typedef /* [public][public][public] */ 
enum __MIDL___MIDL_itf_msgrua_0000_0009
    {	MSERVICEPROP_INVALID_PROPERTY	= -1
    }	MSERVICEPROPERTY;

typedef /* [public][public][public] */ 
enum __MIDL___MIDL_itf_msgrua_0000_0010
    {	MUASORT_GROUPS	= 0,
	MUASORT_ONOFFLINE	= 1
    }	MUASORT;



extern RPC_IF_HANDLE __MIDL_itf_msgrua_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_msgrua_0000_v0_0_s_ifspec;

#ifndef __IMessengerWindow_INTERFACE_DEFINED__
#define __IMessengerWindow_INTERFACE_DEFINED__

/* interface IMessengerWindow */
/* [object][oleautomation][dual][helpcontext][helpstring][uuid] */ 


EXTERN_C const IID IID_IMessengerWindow;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("D6B0E4C8-FAD6-4885-B271-0DC5A584ADF8")
    IMessengerWindow : public IDispatch
    {
    public:
        virtual /* [helpcontext][helpstring][id] */ HRESULT STDMETHODCALLTYPE Close( void) = 0;
        
        virtual /* [helpcontext][helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_HWND( 
            /* [retval][out] */ LONG __RPC_FAR *phWnd) = 0;
        
        virtual /* [helpcontext][helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Left( 
            /* [retval][out] */ LONG __RPC_FAR *plLeft) = 0;
        
        virtual /* [helpcontext][helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_Left( 
            /* [in] */ LONG lLeft) = 0;
        
        virtual /* [helpcontext][helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Top( 
            /* [retval][out] */ LONG __RPC_FAR *plTop) = 0;
        
        virtual /* [helpcontext][helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_Top( 
            /* [in] */ LONG lTop) = 0;
        
        virtual /* [helpcontext][helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Width( 
            /* [retval][out] */ LONG __RPC_FAR *plWidth) = 0;
        
        virtual /* [helpcontext][helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_Width( 
            /* [in] */ LONG lWidth) = 0;
        
        virtual /* [helpcontext][helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Height( 
            /* [retval][out] */ LONG __RPC_FAR *plHeight) = 0;
        
        virtual /* [helpcontext][helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_Height( 
            /* [in] */ LONG lHeight) = 0;
        
        virtual /* [helpcontext][helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_IsClosed( 
            /* [retval][out] */ VARIANT_BOOL __RPC_FAR *pBoolClose) = 0;
        
        virtual /* [helpcontext][helpstring][id] */ HRESULT STDMETHODCALLTYPE Show( void) = 0;
        
        virtual /* [helpcontext][helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Property( 
            /* [in] */ MWINDOWPROPERTY ePropType,
            /* [retval][out] */ VARIANT __RPC_FAR *pvPropVal) = 0;
        
        virtual /* [helpcontext][helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_Property( 
            /* [in] */ MWINDOWPROPERTY ePropType,
            /* [in] */ VARIANT vPropVal) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IMessengerWindowVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            IMessengerWindow __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            IMessengerWindow __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            IMessengerWindow __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfoCount )( 
            IMessengerWindow __RPC_FAR * This,
            /* [out] */ UINT __RPC_FAR *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfo )( 
            IMessengerWindow __RPC_FAR * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo __RPC_FAR *__RPC_FAR *ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetIDsOfNames )( 
            IMessengerWindow __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR __RPC_FAR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID __RPC_FAR *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Invoke )( 
            IMessengerWindow __RPC_FAR * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS __RPC_FAR *pDispParams,
            /* [out] */ VARIANT __RPC_FAR *pVarResult,
            /* [out] */ EXCEPINFO __RPC_FAR *pExcepInfo,
            /* [out] */ UINT __RPC_FAR *puArgErr);
        
        /* [helpcontext][helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Close )( 
            IMessengerWindow __RPC_FAR * This);
        
        /* [helpcontext][helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_HWND )( 
            IMessengerWindow __RPC_FAR * This,
            /* [retval][out] */ LONG __RPC_FAR *phWnd);
        
        /* [helpcontext][helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Left )( 
            IMessengerWindow __RPC_FAR * This,
            /* [retval][out] */ LONG __RPC_FAR *plLeft);
        
        /* [helpcontext][helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_Left )( 
            IMessengerWindow __RPC_FAR * This,
            /* [in] */ LONG lLeft);
        
        /* [helpcontext][helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Top )( 
            IMessengerWindow __RPC_FAR * This,
            /* [retval][out] */ LONG __RPC_FAR *plTop);
        
        /* [helpcontext][helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_Top )( 
            IMessengerWindow __RPC_FAR * This,
            /* [in] */ LONG lTop);
        
        /* [helpcontext][helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Width )( 
            IMessengerWindow __RPC_FAR * This,
            /* [retval][out] */ LONG __RPC_FAR *plWidth);
        
        /* [helpcontext][helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_Width )( 
            IMessengerWindow __RPC_FAR * This,
            /* [in] */ LONG lWidth);
        
        /* [helpcontext][helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Height )( 
            IMessengerWindow __RPC_FAR * This,
            /* [retval][out] */ LONG __RPC_FAR *plHeight);
        
        /* [helpcontext][helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_Height )( 
            IMessengerWindow __RPC_FAR * This,
            /* [in] */ LONG lHeight);
        
        /* [helpcontext][helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_IsClosed )( 
            IMessengerWindow __RPC_FAR * This,
            /* [retval][out] */ VARIANT_BOOL __RPC_FAR *pBoolClose);
        
        /* [helpcontext][helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Show )( 
            IMessengerWindow __RPC_FAR * This);
        
        /* [helpcontext][helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Property )( 
            IMessengerWindow __RPC_FAR * This,
            /* [in] */ MWINDOWPROPERTY ePropType,
            /* [retval][out] */ VARIANT __RPC_FAR *pvPropVal);
        
        /* [helpcontext][helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_Property )( 
            IMessengerWindow __RPC_FAR * This,
            /* [in] */ MWINDOWPROPERTY ePropType,
            /* [in] */ VARIANT vPropVal);
        
        END_INTERFACE
    } IMessengerWindowVtbl;

    interface IMessengerWindow
    {
        CONST_VTBL struct IMessengerWindowVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IMessengerWindow_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IMessengerWindow_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IMessengerWindow_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IMessengerWindow_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define IMessengerWindow_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define IMessengerWindow_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define IMessengerWindow_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define IMessengerWindow_Close(This)	\
    (This)->lpVtbl -> Close(This)

#define IMessengerWindow_get_HWND(This,phWnd)	\
    (This)->lpVtbl -> get_HWND(This,phWnd)

#define IMessengerWindow_get_Left(This,plLeft)	\
    (This)->lpVtbl -> get_Left(This,plLeft)

#define IMessengerWindow_put_Left(This,lLeft)	\
    (This)->lpVtbl -> put_Left(This,lLeft)

#define IMessengerWindow_get_Top(This,plTop)	\
    (This)->lpVtbl -> get_Top(This,plTop)

#define IMessengerWindow_put_Top(This,lTop)	\
    (This)->lpVtbl -> put_Top(This,lTop)

#define IMessengerWindow_get_Width(This,plWidth)	\
    (This)->lpVtbl -> get_Width(This,plWidth)

#define IMessengerWindow_put_Width(This,lWidth)	\
    (This)->lpVtbl -> put_Width(This,lWidth)

#define IMessengerWindow_get_Height(This,plHeight)	\
    (This)->lpVtbl -> get_Height(This,plHeight)

#define IMessengerWindow_put_Height(This,lHeight)	\
    (This)->lpVtbl -> put_Height(This,lHeight)

#define IMessengerWindow_get_IsClosed(This,pBoolClose)	\
    (This)->lpVtbl -> get_IsClosed(This,pBoolClose)

#define IMessengerWindow_Show(This)	\
    (This)->lpVtbl -> Show(This)

#define IMessengerWindow_get_Property(This,ePropType,pvPropVal)	\
    (This)->lpVtbl -> get_Property(This,ePropType,pvPropVal)

#define IMessengerWindow_put_Property(This,ePropType,vPropVal)	\
    (This)->lpVtbl -> put_Property(This,ePropType,vPropVal)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpcontext][helpstring][id] */ HRESULT STDMETHODCALLTYPE IMessengerWindow_Close_Proxy( 
    IMessengerWindow __RPC_FAR * This);


void __RPC_STUB IMessengerWindow_Close_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpcontext][helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE IMessengerWindow_get_HWND_Proxy( 
    IMessengerWindow __RPC_FAR * This,
    /* [retval][out] */ LONG __RPC_FAR *phWnd);


void __RPC_STUB IMessengerWindow_get_HWND_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpcontext][helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE IMessengerWindow_get_Left_Proxy( 
    IMessengerWindow __RPC_FAR * This,
    /* [retval][out] */ LONG __RPC_FAR *plLeft);


void __RPC_STUB IMessengerWindow_get_Left_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpcontext][helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE IMessengerWindow_put_Left_Proxy( 
    IMessengerWindow __RPC_FAR * This,
    /* [in] */ LONG lLeft);


void __RPC_STUB IMessengerWindow_put_Left_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpcontext][helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE IMessengerWindow_get_Top_Proxy( 
    IMessengerWindow __RPC_FAR * This,
    /* [retval][out] */ LONG __RPC_FAR *plTop);


void __RPC_STUB IMessengerWindow_get_Top_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpcontext][helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE IMessengerWindow_put_Top_Proxy( 
    IMessengerWindow __RPC_FAR * This,
    /* [in] */ LONG lTop);


void __RPC_STUB IMessengerWindow_put_Top_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpcontext][helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE IMessengerWindow_get_Width_Proxy( 
    IMessengerWindow __RPC_FAR * This,
    /* [retval][out] */ LONG __RPC_FAR *plWidth);


void __RPC_STUB IMessengerWindow_get_Width_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpcontext][helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE IMessengerWindow_put_Width_Proxy( 
    IMessengerWindow __RPC_FAR * This,
    /* [in] */ LONG lWidth);


void __RPC_STUB IMessengerWindow_put_Width_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpcontext][helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE IMessengerWindow_get_Height_Proxy( 
    IMessengerWindow __RPC_FAR * This,
    /* [retval][out] */ LONG __RPC_FAR *plHeight);


void __RPC_STUB IMessengerWindow_get_Height_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpcontext][helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE IMessengerWindow_put_Height_Proxy( 
    IMessengerWindow __RPC_FAR * This,
    /* [in] */ LONG lHeight);


void __RPC_STUB IMessengerWindow_put_Height_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpcontext][helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE IMessengerWindow_get_IsClosed_Proxy( 
    IMessengerWindow __RPC_FAR * This,
    /* [retval][out] */ VARIANT_BOOL __RPC_FAR *pBoolClose);


void __RPC_STUB IMessengerWindow_get_IsClosed_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpcontext][helpstring][id] */ HRESULT STDMETHODCALLTYPE IMessengerWindow_Show_Proxy( 
    IMessengerWindow __RPC_FAR * This);


void __RPC_STUB IMessengerWindow_Show_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpcontext][helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE IMessengerWindow_get_Property_Proxy( 
    IMessengerWindow __RPC_FAR * This,
    /* [in] */ MWINDOWPROPERTY ePropType,
    /* [retval][out] */ VARIANT __RPC_FAR *pvPropVal);


void __RPC_STUB IMessengerWindow_get_Property_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpcontext][helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE IMessengerWindow_put_Property_Proxy( 
    IMessengerWindow __RPC_FAR * This,
    /* [in] */ MWINDOWPROPERTY ePropType,
    /* [in] */ VARIANT vPropVal);


void __RPC_STUB IMessengerWindow_put_Property_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IMessengerWindow_INTERFACE_DEFINED__ */


#ifndef __IMessengerConversationWnd_INTERFACE_DEFINED__
#define __IMessengerConversationWnd_INTERFACE_DEFINED__

/* interface IMessengerConversationWnd */
/* [object][oleautomation][dual][helpcontext][helpstring][uuid] */ 


EXTERN_C const IID IID_IMessengerConversationWnd;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("D6B0E4C9-FAD6-4885-B271-0DC5A584ADF8")
    IMessengerConversationWnd : public IMessengerWindow
    {
    public:
        virtual /* [helpcontext][helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Contacts( 
            /* [retval][out] */ IDispatch __RPC_FAR *__RPC_FAR *pContacts) = 0;
        
        virtual /* [helpcontext][helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_History( 
            /* [retval][out] */ BSTR __RPC_FAR *bstrHistoryText) = 0;
        
        virtual /* [helpcontext][helpstring][id] */ HRESULT STDMETHODCALLTYPE AddContact( 
            /* [in] */ VARIANT vContact) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IMessengerConversationWndVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            IMessengerConversationWnd __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            IMessengerConversationWnd __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            IMessengerConversationWnd __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfoCount )( 
            IMessengerConversationWnd __RPC_FAR * This,
            /* [out] */ UINT __RPC_FAR *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfo )( 
            IMessengerConversationWnd __RPC_FAR * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo __RPC_FAR *__RPC_FAR *ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetIDsOfNames )( 
            IMessengerConversationWnd __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR __RPC_FAR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID __RPC_FAR *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Invoke )( 
            IMessengerConversationWnd __RPC_FAR * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS __RPC_FAR *pDispParams,
            /* [out] */ VARIANT __RPC_FAR *pVarResult,
            /* [out] */ EXCEPINFO __RPC_FAR *pExcepInfo,
            /* [out] */ UINT __RPC_FAR *puArgErr);
        
        /* [helpcontext][helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Close )( 
            IMessengerConversationWnd __RPC_FAR * This);
        
        /* [helpcontext][helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_HWND )( 
            IMessengerConversationWnd __RPC_FAR * This,
            /* [retval][out] */ LONG __RPC_FAR *phWnd);
        
        /* [helpcontext][helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Left )( 
            IMessengerConversationWnd __RPC_FAR * This,
            /* [retval][out] */ LONG __RPC_FAR *plLeft);
        
        /* [helpcontext][helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_Left )( 
            IMessengerConversationWnd __RPC_FAR * This,
            /* [in] */ LONG lLeft);
        
        /* [helpcontext][helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Top )( 
            IMessengerConversationWnd __RPC_FAR * This,
            /* [retval][out] */ LONG __RPC_FAR *plTop);
        
        /* [helpcontext][helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_Top )( 
            IMessengerConversationWnd __RPC_FAR * This,
            /* [in] */ LONG lTop);
        
        /* [helpcontext][helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Width )( 
            IMessengerConversationWnd __RPC_FAR * This,
            /* [retval][out] */ LONG __RPC_FAR *plWidth);
        
        /* [helpcontext][helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_Width )( 
            IMessengerConversationWnd __RPC_FAR * This,
            /* [in] */ LONG lWidth);
        
        /* [helpcontext][helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Height )( 
            IMessengerConversationWnd __RPC_FAR * This,
            /* [retval][out] */ LONG __RPC_FAR *plHeight);
        
        /* [helpcontext][helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_Height )( 
            IMessengerConversationWnd __RPC_FAR * This,
            /* [in] */ LONG lHeight);
        
        /* [helpcontext][helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_IsClosed )( 
            IMessengerConversationWnd __RPC_FAR * This,
            /* [retval][out] */ VARIANT_BOOL __RPC_FAR *pBoolClose);
        
        /* [helpcontext][helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Show )( 
            IMessengerConversationWnd __RPC_FAR * This);
        
        /* [helpcontext][helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Property )( 
            IMessengerConversationWnd __RPC_FAR * This,
            /* [in] */ MWINDOWPROPERTY ePropType,
            /* [retval][out] */ VARIANT __RPC_FAR *pvPropVal);
        
        /* [helpcontext][helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_Property )( 
            IMessengerConversationWnd __RPC_FAR * This,
            /* [in] */ MWINDOWPROPERTY ePropType,
            /* [in] */ VARIANT vPropVal);
        
        /* [helpcontext][helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Contacts )( 
            IMessengerConversationWnd __RPC_FAR * This,
            /* [retval][out] */ IDispatch __RPC_FAR *__RPC_FAR *pContacts);
        
        /* [helpcontext][helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_History )( 
            IMessengerConversationWnd __RPC_FAR * This,
            /* [retval][out] */ BSTR __RPC_FAR *bstrHistoryText);
        
        /* [helpcontext][helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *AddContact )( 
            IMessengerConversationWnd __RPC_FAR * This,
            /* [in] */ VARIANT vContact);
        
        END_INTERFACE
    } IMessengerConversationWndVtbl;

    interface IMessengerConversationWnd
    {
        CONST_VTBL struct IMessengerConversationWndVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IMessengerConversationWnd_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IMessengerConversationWnd_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IMessengerConversationWnd_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IMessengerConversationWnd_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define IMessengerConversationWnd_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define IMessengerConversationWnd_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define IMessengerConversationWnd_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define IMessengerConversationWnd_Close(This)	\
    (This)->lpVtbl -> Close(This)

#define IMessengerConversationWnd_get_HWND(This,phWnd)	\
    (This)->lpVtbl -> get_HWND(This,phWnd)

#define IMessengerConversationWnd_get_Left(This,plLeft)	\
    (This)->lpVtbl -> get_Left(This,plLeft)

#define IMessengerConversationWnd_put_Left(This,lLeft)	\
    (This)->lpVtbl -> put_Left(This,lLeft)

#define IMessengerConversationWnd_get_Top(This,plTop)	\
    (This)->lpVtbl -> get_Top(This,plTop)

#define IMessengerConversationWnd_put_Top(This,lTop)	\
    (This)->lpVtbl -> put_Top(This,lTop)

#define IMessengerConversationWnd_get_Width(This,plWidth)	\
    (This)->lpVtbl -> get_Width(This,plWidth)

#define IMessengerConversationWnd_put_Width(This,lWidth)	\
    (This)->lpVtbl -> put_Width(This,lWidth)

#define IMessengerConversationWnd_get_Height(This,plHeight)	\
    (This)->lpVtbl -> get_Height(This,plHeight)

#define IMessengerConversationWnd_put_Height(This,lHeight)	\
    (This)->lpVtbl -> put_Height(This,lHeight)

#define IMessengerConversationWnd_get_IsClosed(This,pBoolClose)	\
    (This)->lpVtbl -> get_IsClosed(This,pBoolClose)

#define IMessengerConversationWnd_Show(This)	\
    (This)->lpVtbl -> Show(This)

#define IMessengerConversationWnd_get_Property(This,ePropType,pvPropVal)	\
    (This)->lpVtbl -> get_Property(This,ePropType,pvPropVal)

#define IMessengerConversationWnd_put_Property(This,ePropType,vPropVal)	\
    (This)->lpVtbl -> put_Property(This,ePropType,vPropVal)


#define IMessengerConversationWnd_get_Contacts(This,pContacts)	\
    (This)->lpVtbl -> get_Contacts(This,pContacts)

#define IMessengerConversationWnd_get_History(This,bstrHistoryText)	\
    (This)->lpVtbl -> get_History(This,bstrHistoryText)

#define IMessengerConversationWnd_AddContact(This,vContact)	\
    (This)->lpVtbl -> AddContact(This,vContact)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpcontext][helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE IMessengerConversationWnd_get_Contacts_Proxy( 
    IMessengerConversationWnd __RPC_FAR * This,
    /* [retval][out] */ IDispatch __RPC_FAR *__RPC_FAR *pContacts);


void __RPC_STUB IMessengerConversationWnd_get_Contacts_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpcontext][helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE IMessengerConversationWnd_get_History_Proxy( 
    IMessengerConversationWnd __RPC_FAR * This,
    /* [retval][out] */ BSTR __RPC_FAR *bstrHistoryText);


void __RPC_STUB IMessengerConversationWnd_get_History_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpcontext][helpstring][id] */ HRESULT STDMETHODCALLTYPE IMessengerConversationWnd_AddContact_Proxy( 
    IMessengerConversationWnd __RPC_FAR * This,
    /* [in] */ VARIANT vContact);


void __RPC_STUB IMessengerConversationWnd_AddContact_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IMessengerConversationWnd_INTERFACE_DEFINED__ */


#ifndef __IMessenger_INTERFACE_DEFINED__
#define __IMessenger_INTERFACE_DEFINED__

/* interface IMessenger */
/* [object][oleautomation][dual][helpcontext][helpstring][uuid] */ 


EXTERN_C const IID IID_IMessenger;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("D50C3186-0F89-48f8-B204-3604629DEE10")
    IMessenger : public IDispatch
    {
    public:
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Window( 
            /* [retval][out] */ IDispatch __RPC_FAR *__RPC_FAR *ppMWindow) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ViewProfile( 
            /* [in] */ VARIANT vContact) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ReceiveFileDirectory( 
            /* [retval][out] */ BSTR __RPC_FAR *bstrPath) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE StartVoice( 
            /* [in] */ VARIANT vContact,
            /* [retval][out] */ IDispatch __RPC_FAR *__RPC_FAR *ppMWindow) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE InviteApp( 
            /* [in] */ VARIANT vContact,
            /* [in] */ BSTR bstrAppID,
            /* [retval][out] */ IDispatch __RPC_FAR *__RPC_FAR *ppMWindow) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SendMail( 
            /* [in] */ VARIANT vContact) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE OpenInbox( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SendFile( 
            /* [in] */ VARIANT vContact,
            /* [in] */ BSTR bstrFileName,
            /* [retval][out] */ IDispatch __RPC_FAR *__RPC_FAR *ppMWindow) = 0;
        
        virtual /* [helpcontext][helpstring][id] */ HRESULT STDMETHODCALLTYPE Signout( void) = 0;
        
        virtual /* [helpcontext][helpstring][id] */ HRESULT STDMETHODCALLTYPE Signin( 
            /* [in] */ LONG hwndParent,
            /* [in] */ BSTR bstrSigninName,
            /* [in] */ BSTR bstrPassword) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetContact( 
            /* [in] */ BSTR bstrSigninName,
            /* [in] */ BSTR bstrServiceId,
            /* [retval][out] */ IDispatch __RPC_FAR *__RPC_FAR *ppMContact) = 0;
        
        virtual /* [helpcontext][helpstring][id] */ HRESULT STDMETHODCALLTYPE OptionsPages( 
            /* [in] */ LONG hwndParent,
            /* [in] */ MOPTIONPAGE mOptionPage) = 0;
        
        virtual /* [helpcontext][helpstring][id] */ HRESULT STDMETHODCALLTYPE AddContact( 
            /* [in] */ LONG hwndParent,
            /* [in] */ BSTR bstrEMail) = 0;
        
        virtual /* [helpcontext][helpstring][id] */ HRESULT STDMETHODCALLTYPE FindContact( 
            /* [in] */ LONG hwndParent,
            /* [in] */ BSTR bstrFirstName,
            /* [in] */ BSTR bstrLastName,
            /* [optional][in] */ VARIANT vbstrCity,
            /* [optional][in] */ VARIANT vbstrState,
            /* [optional][in] */ VARIANT vbstrCountry) = 0;
        
        virtual /* [helpcontext][helpstring][id] */ HRESULT STDMETHODCALLTYPE InstantMessage( 
            /* [in] */ VARIANT vContact,
            /* [retval][out] */ IDispatch __RPC_FAR *__RPC_FAR *ppMWindow) = 0;
        
        virtual /* [helpcontext][helpstring][id] */ HRESULT STDMETHODCALLTYPE Phone( 
            /* [in] */ VARIANT vContact,
            /* [in] */ MPHONE_TYPE ePhoneNumber,
            /* [in] */ BSTR bstrNumber,
            /* [retval][out] */ IDispatch __RPC_FAR *__RPC_FAR *ppMWindow) = 0;
        
        virtual /* [helpcontext][helpstring][id] */ HRESULT STDMETHODCALLTYPE MediaWizard( 
            /* [in] */ LONG hwndParent) = 0;
        
        virtual /* [helpcontext][helpstring][id] */ HRESULT STDMETHODCALLTYPE Page( 
            /* [in] */ VARIANT vContact,
            /* [retval][out] */ IDispatch __RPC_FAR *__RPC_FAR *ppMWindow) = 0;
        
        virtual /* [helpcontext][helpstring][id] */ HRESULT STDMETHODCALLTYPE AutoSignin( void) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_MyContacts( 
            /* [retval][out] */ IDispatch __RPC_FAR *__RPC_FAR *ppMContacts) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_MySigninName( 
            /* [retval][out] */ BSTR __RPC_FAR *pbstrName) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_MyFriendlyName( 
            /* [retval][out] */ BSTR __RPC_FAR *pbstrName) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_MyStatus( 
            /* [in] */ MISTATUS mStatus) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_MyStatus( 
            /* [retval][out] */ MISTATUS __RPC_FAR *pmStatus) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_UnreadEmailCount( 
            /* [in] */ MUAFOLDER mFolder,
            /* [retval][out] */ LONG __RPC_FAR *plCount) = 0;
        
        virtual /* [helpcontext][helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_MyServiceName( 
            /* [retval][out] */ BSTR __RPC_FAR *pbstrServiceName) = 0;
        
        virtual /* [helpcontext][helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_MyPhoneNumber( 
            /* [in] */ MPHONE_TYPE PhoneType,
            /* [retval][out] */ BSTR __RPC_FAR *pbstrNumber) = 0;
        
        virtual /* [helpcontext][helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_MyProperty( 
            /* [in] */ MCONTACTPROPERTY ePropType,
            /* [retval][out] */ VARIANT __RPC_FAR *pvPropVal) = 0;
        
        virtual /* [helpcontext][helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_MyProperty( 
            /* [in] */ MCONTACTPROPERTY ePropType,
            /* [in] */ VARIANT vPropVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_MyServiceId( 
            /* [retval][out] */ BSTR __RPC_FAR *pbstrServiceId) = 0;
        
        virtual /* [helpcontext][helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Services( 
            /* [retval][out] */ IDispatch __RPC_FAR *__RPC_FAR *ppdispServices) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IMessengerVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            IMessenger __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            IMessenger __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            IMessenger __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfoCount )( 
            IMessenger __RPC_FAR * This,
            /* [out] */ UINT __RPC_FAR *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfo )( 
            IMessenger __RPC_FAR * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo __RPC_FAR *__RPC_FAR *ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetIDsOfNames )( 
            IMessenger __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR __RPC_FAR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID __RPC_FAR *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Invoke )( 
            IMessenger __RPC_FAR * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS __RPC_FAR *pDispParams,
            /* [out] */ VARIANT __RPC_FAR *pVarResult,
            /* [out] */ EXCEPINFO __RPC_FAR *pExcepInfo,
            /* [out] */ UINT __RPC_FAR *puArgErr);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Window )( 
            IMessenger __RPC_FAR * This,
            /* [retval][out] */ IDispatch __RPC_FAR *__RPC_FAR *ppMWindow);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *ViewProfile )( 
            IMessenger __RPC_FAR * This,
            /* [in] */ VARIANT vContact);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_ReceiveFileDirectory )( 
            IMessenger __RPC_FAR * This,
            /* [retval][out] */ BSTR __RPC_FAR *bstrPath);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *StartVoice )( 
            IMessenger __RPC_FAR * This,
            /* [in] */ VARIANT vContact,
            /* [retval][out] */ IDispatch __RPC_FAR *__RPC_FAR *ppMWindow);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *InviteApp )( 
            IMessenger __RPC_FAR * This,
            /* [in] */ VARIANT vContact,
            /* [in] */ BSTR bstrAppID,
            /* [retval][out] */ IDispatch __RPC_FAR *__RPC_FAR *ppMWindow);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *SendMail )( 
            IMessenger __RPC_FAR * This,
            /* [in] */ VARIANT vContact);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *OpenInbox )( 
            IMessenger __RPC_FAR * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *SendFile )( 
            IMessenger __RPC_FAR * This,
            /* [in] */ VARIANT vContact,
            /* [in] */ BSTR bstrFileName,
            /* [retval][out] */ IDispatch __RPC_FAR *__RPC_FAR *ppMWindow);
        
        /* [helpcontext][helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Signout )( 
            IMessenger __RPC_FAR * This);
        
        /* [helpcontext][helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Signin )( 
            IMessenger __RPC_FAR * This,
            /* [in] */ LONG hwndParent,
            /* [in] */ BSTR bstrSigninName,
            /* [in] */ BSTR bstrPassword);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetContact )( 
            IMessenger __RPC_FAR * This,
            /* [in] */ BSTR bstrSigninName,
            /* [in] */ BSTR bstrServiceId,
            /* [retval][out] */ IDispatch __RPC_FAR *__RPC_FAR *ppMContact);
        
        /* [helpcontext][helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *OptionsPages )( 
            IMessenger __RPC_FAR * This,
            /* [in] */ LONG hwndParent,
            /* [in] */ MOPTIONPAGE mOptionPage);
        
        /* [helpcontext][helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *AddContact )( 
            IMessenger __RPC_FAR * This,
            /* [in] */ LONG hwndParent,
            /* [in] */ BSTR bstrEMail);
        
        /* [helpcontext][helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *FindContact )( 
            IMessenger __RPC_FAR * This,
            /* [in] */ LONG hwndParent,
            /* [in] */ BSTR bstrFirstName,
            /* [in] */ BSTR bstrLastName,
            /* [optional][in] */ VARIANT vbstrCity,
            /* [optional][in] */ VARIANT vbstrState,
            /* [optional][in] */ VARIANT vbstrCountry);
        
        /* [helpcontext][helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *InstantMessage )( 
            IMessenger __RPC_FAR * This,
            /* [in] */ VARIANT vContact,
            /* [retval][out] */ IDispatch __RPC_FAR *__RPC_FAR *ppMWindow);
        
        /* [helpcontext][helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Phone )( 
            IMessenger __RPC_FAR * This,
            /* [in] */ VARIANT vContact,
            /* [in] */ MPHONE_TYPE ePhoneNumber,
            /* [in] */ BSTR bstrNumber,
            /* [retval][out] */ IDispatch __RPC_FAR *__RPC_FAR *ppMWindow);
        
        /* [helpcontext][helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *MediaWizard )( 
            IMessenger __RPC_FAR * This,
            /* [in] */ LONG hwndParent);
        
        /* [helpcontext][helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Page )( 
            IMessenger __RPC_FAR * This,
            /* [in] */ VARIANT vContact,
            /* [retval][out] */ IDispatch __RPC_FAR *__RPC_FAR *ppMWindow);
        
        /* [helpcontext][helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *AutoSignin )( 
            IMessenger __RPC_FAR * This);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_MyContacts )( 
            IMessenger __RPC_FAR * This,
            /* [retval][out] */ IDispatch __RPC_FAR *__RPC_FAR *ppMContacts);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_MySigninName )( 
            IMessenger __RPC_FAR * This,
            /* [retval][out] */ BSTR __RPC_FAR *pbstrName);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_MyFriendlyName )( 
            IMessenger __RPC_FAR * This,
            /* [retval][out] */ BSTR __RPC_FAR *pbstrName);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_MyStatus )( 
            IMessenger __RPC_FAR * This,
            /* [in] */ MISTATUS mStatus);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_MyStatus )( 
            IMessenger __RPC_FAR * This,
            /* [retval][out] */ MISTATUS __RPC_FAR *pmStatus);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_UnreadEmailCount )( 
            IMessenger __RPC_FAR * This,
            /* [in] */ MUAFOLDER mFolder,
            /* [retval][out] */ LONG __RPC_FAR *plCount);
        
        /* [helpcontext][helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_MyServiceName )( 
            IMessenger __RPC_FAR * This,
            /* [retval][out] */ BSTR __RPC_FAR *pbstrServiceName);
        
        /* [helpcontext][helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_MyPhoneNumber )( 
            IMessenger __RPC_FAR * This,
            /* [in] */ MPHONE_TYPE PhoneType,
            /* [retval][out] */ BSTR __RPC_FAR *pbstrNumber);
        
        /* [helpcontext][helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_MyProperty )( 
            IMessenger __RPC_FAR * This,
            /* [in] */ MCONTACTPROPERTY ePropType,
            /* [retval][out] */ VARIANT __RPC_FAR *pvPropVal);
        
        /* [helpcontext][helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_MyProperty )( 
            IMessenger __RPC_FAR * This,
            /* [in] */ MCONTACTPROPERTY ePropType,
            /* [in] */ VARIANT vPropVal);
        
        /* [helpcontext][helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_MyServiceId )( 
            IMessenger __RPC_FAR * This,
            /* [retval][out] */ BSTR __RPC_FAR *pbstrServiceId);
        
        /* [helpcontext][helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Services )( 
            IMessenger __RPC_FAR * This,
            /* [retval][out] */ IDispatch __RPC_FAR *__RPC_FAR *ppdispServices);
        
        END_INTERFACE
    } IMessengerVtbl;

    interface IMessenger
    {
        CONST_VTBL struct IMessengerVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IMessenger_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IMessenger_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IMessenger_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IMessenger_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define IMessenger_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define IMessenger_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define IMessenger_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define IMessenger_get_Window(This,ppMWindow)	\
    (This)->lpVtbl -> get_Window(This,ppMWindow)

#define IMessenger_ViewProfile(This,vContact)	\
    (This)->lpVtbl -> ViewProfile(This,vContact)

#define IMessenger_get_ReceiveFileDirectory(This,bstrPath)	\
    (This)->lpVtbl -> get_ReceiveFileDirectory(This,bstrPath)

#define IMessenger_StartVoice(This,vContact,ppMWindow)	\
    (This)->lpVtbl -> StartVoice(This,vContact,ppMWindow)

#define IMessenger_InviteApp(This,vContact,bstrAppID,ppMWindow)	\
    (This)->lpVtbl -> InviteApp(This,vContact,bstrAppID,ppMWindow)

#define IMessenger_SendMail(This,vContact)	\
    (This)->lpVtbl -> SendMail(This,vContact)

#define IMessenger_OpenInbox(This)	\
    (This)->lpVtbl -> OpenInbox(This)

#define IMessenger_SendFile(This,vContact,bstrFileName,ppMWindow)	\
    (This)->lpVtbl -> SendFile(This,vContact,bstrFileName,ppMWindow)

#define IMessenger_Signout(This)	\
    (This)->lpVtbl -> Signout(This)

#define IMessenger_Signin(This,hwndParent,bstrSigninName,bstrPassword)	\
    (This)->lpVtbl -> Signin(This,hwndParent,bstrSigninName,bstrPassword)

#define IMessenger_GetContact(This,bstrSigninName,bstrServiceId,ppMContact)	\
    (This)->lpVtbl -> GetContact(This,bstrSigninName,bstrServiceId,ppMContact)

#define IMessenger_OptionsPages(This,hwndParent,mOptionPage)	\
    (This)->lpVtbl -> OptionsPages(This,hwndParent,mOptionPage)

#define IMessenger_AddContact(This,hwndParent,bstrEMail)	\
    (This)->lpVtbl -> AddContact(This,hwndParent,bstrEMail)

#define IMessenger_FindContact(This,hwndParent,bstrFirstName,bstrLastName,vbstrCity,vbstrState,vbstrCountry)	\
    (This)->lpVtbl -> FindContact(This,hwndParent,bstrFirstName,bstrLastName,vbstrCity,vbstrState,vbstrCountry)

#define IMessenger_InstantMessage(This,vContact,ppMWindow)	\
    (This)->lpVtbl -> InstantMessage(This,vContact,ppMWindow)

#define IMessenger_Phone(This,vContact,ePhoneNumber,bstrNumber,ppMWindow)	\
    (This)->lpVtbl -> Phone(This,vContact,ePhoneNumber,bstrNumber,ppMWindow)

#define IMessenger_MediaWizard(This,hwndParent)	\
    (This)->lpVtbl -> MediaWizard(This,hwndParent)

#define IMessenger_Page(This,vContact,ppMWindow)	\
    (This)->lpVtbl -> Page(This,vContact,ppMWindow)

#define IMessenger_AutoSignin(This)	\
    (This)->lpVtbl -> AutoSignin(This)

#define IMessenger_get_MyContacts(This,ppMContacts)	\
    (This)->lpVtbl -> get_MyContacts(This,ppMContacts)

#define IMessenger_get_MySigninName(This,pbstrName)	\
    (This)->lpVtbl -> get_MySigninName(This,pbstrName)

#define IMessenger_get_MyFriendlyName(This,pbstrName)	\
    (This)->lpVtbl -> get_MyFriendlyName(This,pbstrName)

#define IMessenger_put_MyStatus(This,mStatus)	\
    (This)->lpVtbl -> put_MyStatus(This,mStatus)

#define IMessenger_get_MyStatus(This,pmStatus)	\
    (This)->lpVtbl -> get_MyStatus(This,pmStatus)

#define IMessenger_get_UnreadEmailCount(This,mFolder,plCount)	\
    (This)->lpVtbl -> get_UnreadEmailCount(This,mFolder,plCount)

#define IMessenger_get_MyServiceName(This,pbstrServiceName)	\
    (This)->lpVtbl -> get_MyServiceName(This,pbstrServiceName)

#define IMessenger_get_MyPhoneNumber(This,PhoneType,pbstrNumber)	\
    (This)->lpVtbl -> get_MyPhoneNumber(This,PhoneType,pbstrNumber)

#define IMessenger_get_MyProperty(This,ePropType,pvPropVal)	\
    (This)->lpVtbl -> get_MyProperty(This,ePropType,pvPropVal)

#define IMessenger_put_MyProperty(This,ePropType,vPropVal)	\
    (This)->lpVtbl -> put_MyProperty(This,ePropType,vPropVal)

#define IMessenger_get_MyServiceId(This,pbstrServiceId)	\
    (This)->lpVtbl -> get_MyServiceId(This,pbstrServiceId)

#define IMessenger_get_Services(This,ppdispServices)	\
    (This)->lpVtbl -> get_Services(This,ppdispServices)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE IMessenger_get_Window_Proxy( 
    IMessenger __RPC_FAR * This,
    /* [retval][out] */ IDispatch __RPC_FAR *__RPC_FAR *ppMWindow);


void __RPC_STUB IMessenger_get_Window_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IMessenger_ViewProfile_Proxy( 
    IMessenger __RPC_FAR * This,
    /* [in] */ VARIANT vContact);


void __RPC_STUB IMessenger_ViewProfile_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE IMessenger_get_ReceiveFileDirectory_Proxy( 
    IMessenger __RPC_FAR * This,
    /* [retval][out] */ BSTR __RPC_FAR *bstrPath);


void __RPC_STUB IMessenger_get_ReceiveFileDirectory_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IMessenger_StartVoice_Proxy( 
    IMessenger __RPC_FAR * This,
    /* [in] */ VARIANT vContact,
    /* [retval][out] */ IDispatch __RPC_FAR *__RPC_FAR *ppMWindow);


void __RPC_STUB IMessenger_StartVoice_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IMessenger_InviteApp_Proxy( 
    IMessenger __RPC_FAR * This,
    /* [in] */ VARIANT vContact,
    /* [in] */ BSTR bstrAppID,
    /* [retval][out] */ IDispatch __RPC_FAR *__RPC_FAR *ppMWindow);


void __RPC_STUB IMessenger_InviteApp_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IMessenger_SendMail_Proxy( 
    IMessenger __RPC_FAR * This,
    /* [in] */ VARIANT vContact);


void __RPC_STUB IMessenger_SendMail_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IMessenger_OpenInbox_Proxy( 
    IMessenger __RPC_FAR * This);


void __RPC_STUB IMessenger_OpenInbox_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IMessenger_SendFile_Proxy( 
    IMessenger __RPC_FAR * This,
    /* [in] */ VARIANT vContact,
    /* [in] */ BSTR bstrFileName,
    /* [retval][out] */ IDispatch __RPC_FAR *__RPC_FAR *ppMWindow);


void __RPC_STUB IMessenger_SendFile_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpcontext][helpstring][id] */ HRESULT STDMETHODCALLTYPE IMessenger_Signout_Proxy( 
    IMessenger __RPC_FAR * This);


void __RPC_STUB IMessenger_Signout_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpcontext][helpstring][id] */ HRESULT STDMETHODCALLTYPE IMessenger_Signin_Proxy( 
    IMessenger __RPC_FAR * This,
    /* [in] */ LONG hwndParent,
    /* [in] */ BSTR bstrSigninName,
    /* [in] */ BSTR bstrPassword);


void __RPC_STUB IMessenger_Signin_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IMessenger_GetContact_Proxy( 
    IMessenger __RPC_FAR * This,
    /* [in] */ BSTR bstrSigninName,
    /* [in] */ BSTR bstrServiceId,
    /* [retval][out] */ IDispatch __RPC_FAR *__RPC_FAR *ppMContact);


void __RPC_STUB IMessenger_GetContact_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpcontext][helpstring][id] */ HRESULT STDMETHODCALLTYPE IMessenger_OptionsPages_Proxy( 
    IMessenger __RPC_FAR * This,
    /* [in] */ LONG hwndParent,
    /* [in] */ MOPTIONPAGE mOptionPage);


void __RPC_STUB IMessenger_OptionsPages_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpcontext][helpstring][id] */ HRESULT STDMETHODCALLTYPE IMessenger_AddContact_Proxy( 
    IMessenger __RPC_FAR * This,
    /* [in] */ LONG hwndParent,
    /* [in] */ BSTR bstrEMail);


void __RPC_STUB IMessenger_AddContact_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpcontext][helpstring][id] */ HRESULT STDMETHODCALLTYPE IMessenger_FindContact_Proxy( 
    IMessenger __RPC_FAR * This,
    /* [in] */ LONG hwndParent,
    /* [in] */ BSTR bstrFirstName,
    /* [in] */ BSTR bstrLastName,
    /* [optional][in] */ VARIANT vbstrCity,
    /* [optional][in] */ VARIANT vbstrState,
    /* [optional][in] */ VARIANT vbstrCountry);


void __RPC_STUB IMessenger_FindContact_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpcontext][helpstring][id] */ HRESULT STDMETHODCALLTYPE IMessenger_InstantMessage_Proxy( 
    IMessenger __RPC_FAR * This,
    /* [in] */ VARIANT vContact,
    /* [retval][out] */ IDispatch __RPC_FAR *__RPC_FAR *ppMWindow);


void __RPC_STUB IMessenger_InstantMessage_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpcontext][helpstring][id] */ HRESULT STDMETHODCALLTYPE IMessenger_Phone_Proxy( 
    IMessenger __RPC_FAR * This,
    /* [in] */ VARIANT vContact,
    /* [in] */ MPHONE_TYPE ePhoneNumber,
    /* [in] */ BSTR bstrNumber,
    /* [retval][out] */ IDispatch __RPC_FAR *__RPC_FAR *ppMWindow);


void __RPC_STUB IMessenger_Phone_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpcontext][helpstring][id] */ HRESULT STDMETHODCALLTYPE IMessenger_MediaWizard_Proxy( 
    IMessenger __RPC_FAR * This,
    /* [in] */ LONG hwndParent);


void __RPC_STUB IMessenger_MediaWizard_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpcontext][helpstring][id] */ HRESULT STDMETHODCALLTYPE IMessenger_Page_Proxy( 
    IMessenger __RPC_FAR * This,
    /* [in] */ VARIANT vContact,
    /* [retval][out] */ IDispatch __RPC_FAR *__RPC_FAR *ppMWindow);


void __RPC_STUB IMessenger_Page_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpcontext][helpstring][id] */ HRESULT STDMETHODCALLTYPE IMessenger_AutoSignin_Proxy( 
    IMessenger __RPC_FAR * This);


void __RPC_STUB IMessenger_AutoSignin_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE IMessenger_get_MyContacts_Proxy( 
    IMessenger __RPC_FAR * This,
    /* [retval][out] */ IDispatch __RPC_FAR *__RPC_FAR *ppMContacts);


void __RPC_STUB IMessenger_get_MyContacts_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE IMessenger_get_MySigninName_Proxy( 
    IMessenger __RPC_FAR * This,
    /* [retval][out] */ BSTR __RPC_FAR *pbstrName);


void __RPC_STUB IMessenger_get_MySigninName_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE IMessenger_get_MyFriendlyName_Proxy( 
    IMessenger __RPC_FAR * This,
    /* [retval][out] */ BSTR __RPC_FAR *pbstrName);


void __RPC_STUB IMessenger_get_MyFriendlyName_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE IMessenger_put_MyStatus_Proxy( 
    IMessenger __RPC_FAR * This,
    /* [in] */ MISTATUS mStatus);


void __RPC_STUB IMessenger_put_MyStatus_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE IMessenger_get_MyStatus_Proxy( 
    IMessenger __RPC_FAR * This,
    /* [retval][out] */ MISTATUS __RPC_FAR *pmStatus);


void __RPC_STUB IMessenger_get_MyStatus_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE IMessenger_get_UnreadEmailCount_Proxy( 
    IMessenger __RPC_FAR * This,
    /* [in] */ MUAFOLDER mFolder,
    /* [retval][out] */ LONG __RPC_FAR *plCount);


void __RPC_STUB IMessenger_get_UnreadEmailCount_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpcontext][helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE IMessenger_get_MyServiceName_Proxy( 
    IMessenger __RPC_FAR * This,
    /* [retval][out] */ BSTR __RPC_FAR *pbstrServiceName);


void __RPC_STUB IMessenger_get_MyServiceName_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpcontext][helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE IMessenger_get_MyPhoneNumber_Proxy( 
    IMessenger __RPC_FAR * This,
    /* [in] */ MPHONE_TYPE PhoneType,
    /* [retval][out] */ BSTR __RPC_FAR *pbstrNumber);


void __RPC_STUB IMessenger_get_MyPhoneNumber_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpcontext][helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE IMessenger_get_MyProperty_Proxy( 
    IMessenger __RPC_FAR * This,
    /* [in] */ MCONTACTPROPERTY ePropType,
    /* [retval][out] */ VARIANT __RPC_FAR *pvPropVal);


void __RPC_STUB IMessenger_get_MyProperty_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpcontext][helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE IMessenger_put_MyProperty_Proxy( 
    IMessenger __RPC_FAR * This,
    /* [in] */ MCONTACTPROPERTY ePropType,
    /* [in] */ VARIANT vPropVal);


void __RPC_STUB IMessenger_put_MyProperty_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpcontext][helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE IMessenger_get_MyServiceId_Proxy( 
    IMessenger __RPC_FAR * This,
    /* [retval][out] */ BSTR __RPC_FAR *pbstrServiceId);


void __RPC_STUB IMessenger_get_MyServiceId_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpcontext][helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE IMessenger_get_Services_Proxy( 
    IMessenger __RPC_FAR * This,
    /* [retval][out] */ IDispatch __RPC_FAR *__RPC_FAR *ppdispServices);


void __RPC_STUB IMessenger_get_Services_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IMessenger_INTERFACE_DEFINED__ */


#ifndef __IMessenger2_INTERFACE_DEFINED__
#define __IMessenger2_INTERFACE_DEFINED__

/* interface IMessenger2 */
/* [object][oleautomation][dual][helpcontext][helpstring][uuid] */ 


EXTERN_C const IID IID_IMessenger2;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("D50C3286-0F89-48f8-B204-3604629DEE10")
    IMessenger2 : public IMessenger
    {
    public:
        virtual /* [helpcontext][helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ContactsSortOrder( 
            /* [retval][out] */ MUASORT __RPC_FAR *pSort) = 0;
        
        virtual /* [helpcontext][helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ContactsSortOrder( 
            /* [in] */ MUASORT Sort) = 0;
        
        virtual /* [helpcontext][helpstring][id] */ HRESULT STDMETHODCALLTYPE StartVideo( 
            /* [in] */ VARIANT vContact,
            /* [retval][out] */ IDispatch __RPC_FAR *__RPC_FAR *ppMWindow) = 0;
        
        virtual /* [helpcontext][helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_MyGroups( 
            /* [retval][out] */ IDispatch __RPC_FAR *__RPC_FAR *ppMGroups) = 0;
        
        virtual /* [helpcontext][helpstring][id] */ HRESULT STDMETHODCALLTYPE CreateGroup( 
            /* [in] */ BSTR bstrName,
            /* [in] */ VARIANT vService,
            /* [retval][out] */ IDispatch __RPC_FAR *__RPC_FAR *ppGroup) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IMessenger2Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            IMessenger2 __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            IMessenger2 __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            IMessenger2 __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfoCount )( 
            IMessenger2 __RPC_FAR * This,
            /* [out] */ UINT __RPC_FAR *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfo )( 
            IMessenger2 __RPC_FAR * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo __RPC_FAR *__RPC_FAR *ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetIDsOfNames )( 
            IMessenger2 __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR __RPC_FAR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID __RPC_FAR *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Invoke )( 
            IMessenger2 __RPC_FAR * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS __RPC_FAR *pDispParams,
            /* [out] */ VARIANT __RPC_FAR *pVarResult,
            /* [out] */ EXCEPINFO __RPC_FAR *pExcepInfo,
            /* [out] */ UINT __RPC_FAR *puArgErr);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Window )( 
            IMessenger2 __RPC_FAR * This,
            /* [retval][out] */ IDispatch __RPC_FAR *__RPC_FAR *ppMWindow);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *ViewProfile )( 
            IMessenger2 __RPC_FAR * This,
            /* [in] */ VARIANT vContact);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_ReceiveFileDirectory )( 
            IMessenger2 __RPC_FAR * This,
            /* [retval][out] */ BSTR __RPC_FAR *bstrPath);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *StartVoice )( 
            IMessenger2 __RPC_FAR * This,
            /* [in] */ VARIANT vContact,
            /* [retval][out] */ IDispatch __RPC_FAR *__RPC_FAR *ppMWindow);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *InviteApp )( 
            IMessenger2 __RPC_FAR * This,
            /* [in] */ VARIANT vContact,
            /* [in] */ BSTR bstrAppID,
            /* [retval][out] */ IDispatch __RPC_FAR *__RPC_FAR *ppMWindow);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *SendMail )( 
            IMessenger2 __RPC_FAR * This,
            /* [in] */ VARIANT vContact);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *OpenInbox )( 
            IMessenger2 __RPC_FAR * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *SendFile )( 
            IMessenger2 __RPC_FAR * This,
            /* [in] */ VARIANT vContact,
            /* [in] */ BSTR bstrFileName,
            /* [retval][out] */ IDispatch __RPC_FAR *__RPC_FAR *ppMWindow);
        
        /* [helpcontext][helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Signout )( 
            IMessenger2 __RPC_FAR * This);
        
        /* [helpcontext][helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Signin )( 
            IMessenger2 __RPC_FAR * This,
            /* [in] */ LONG hwndParent,
            /* [in] */ BSTR bstrSigninName,
            /* [in] */ BSTR bstrPassword);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetContact )( 
            IMessenger2 __RPC_FAR * This,
            /* [in] */ BSTR bstrSigninName,
            /* [in] */ BSTR bstrServiceId,
            /* [retval][out] */ IDispatch __RPC_FAR *__RPC_FAR *ppMContact);
        
        /* [helpcontext][helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *OptionsPages )( 
            IMessenger2 __RPC_FAR * This,
            /* [in] */ LONG hwndParent,
            /* [in] */ MOPTIONPAGE mOptionPage);
        
        /* [helpcontext][helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *AddContact )( 
            IMessenger2 __RPC_FAR * This,
            /* [in] */ LONG hwndParent,
            /* [in] */ BSTR bstrEMail);
        
        /* [helpcontext][helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *FindContact )( 
            IMessenger2 __RPC_FAR * This,
            /* [in] */ LONG hwndParent,
            /* [in] */ BSTR bstrFirstName,
            /* [in] */ BSTR bstrLastName,
            /* [optional][in] */ VARIANT vbstrCity,
            /* [optional][in] */ VARIANT vbstrState,
            /* [optional][in] */ VARIANT vbstrCountry);
        
        /* [helpcontext][helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *InstantMessage )( 
            IMessenger2 __RPC_FAR * This,
            /* [in] */ VARIANT vContact,
            /* [retval][out] */ IDispatch __RPC_FAR *__RPC_FAR *ppMWindow);
        
        /* [helpcontext][helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Phone )( 
            IMessenger2 __RPC_FAR * This,
            /* [in] */ VARIANT vContact,
            /* [in] */ MPHONE_TYPE ePhoneNumber,
            /* [in] */ BSTR bstrNumber,
            /* [retval][out] */ IDispatch __RPC_FAR *__RPC_FAR *ppMWindow);
        
        /* [helpcontext][helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *MediaWizard )( 
            IMessenger2 __RPC_FAR * This,
            /* [in] */ LONG hwndParent);
        
        /* [helpcontext][helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Page )( 
            IMessenger2 __RPC_FAR * This,
            /* [in] */ VARIANT vContact,
            /* [retval][out] */ IDispatch __RPC_FAR *__RPC_FAR *ppMWindow);
        
        /* [helpcontext][helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *AutoSignin )( 
            IMessenger2 __RPC_FAR * This);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_MyContacts )( 
            IMessenger2 __RPC_FAR * This,
            /* [retval][out] */ IDispatch __RPC_FAR *__RPC_FAR *ppMContacts);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_MySigninName )( 
            IMessenger2 __RPC_FAR * This,
            /* [retval][out] */ BSTR __RPC_FAR *pbstrName);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_MyFriendlyName )( 
            IMessenger2 __RPC_FAR * This,
            /* [retval][out] */ BSTR __RPC_FAR *pbstrName);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_MyStatus )( 
            IMessenger2 __RPC_FAR * This,
            /* [in] */ MISTATUS mStatus);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_MyStatus )( 
            IMessenger2 __RPC_FAR * This,
            /* [retval][out] */ MISTATUS __RPC_FAR *pmStatus);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_UnreadEmailCount )( 
            IMessenger2 __RPC_FAR * This,
            /* [in] */ MUAFOLDER mFolder,
            /* [retval][out] */ LONG __RPC_FAR *plCount);
        
        /* [helpcontext][helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_MyServiceName )( 
            IMessenger2 __RPC_FAR * This,
            /* [retval][out] */ BSTR __RPC_FAR *pbstrServiceName);
        
        /* [helpcontext][helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_MyPhoneNumber )( 
            IMessenger2 __RPC_FAR * This,
            /* [in] */ MPHONE_TYPE PhoneType,
            /* [retval][out] */ BSTR __RPC_FAR *pbstrNumber);
        
        /* [helpcontext][helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_MyProperty )( 
            IMessenger2 __RPC_FAR * This,
            /* [in] */ MCONTACTPROPERTY ePropType,
            /* [retval][out] */ VARIANT __RPC_FAR *pvPropVal);
        
        /* [helpcontext][helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_MyProperty )( 
            IMessenger2 __RPC_FAR * This,
            /* [in] */ MCONTACTPROPERTY ePropType,
            /* [in] */ VARIANT vPropVal);
        
        /* [helpcontext][helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_MyServiceId )( 
            IMessenger2 __RPC_FAR * This,
            /* [retval][out] */ BSTR __RPC_FAR *pbstrServiceId);
        
        /* [helpcontext][helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Services )( 
            IMessenger2 __RPC_FAR * This,
            /* [retval][out] */ IDispatch __RPC_FAR *__RPC_FAR *ppdispServices);
        
        /* [helpcontext][helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_ContactsSortOrder )( 
            IMessenger2 __RPC_FAR * This,
            /* [retval][out] */ MUASORT __RPC_FAR *pSort);
        
        /* [helpcontext][helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_ContactsSortOrder )( 
            IMessenger2 __RPC_FAR * This,
            /* [in] */ MUASORT Sort);
        
        /* [helpcontext][helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *StartVideo )( 
            IMessenger2 __RPC_FAR * This,
            /* [in] */ VARIANT vContact,
            /* [retval][out] */ IDispatch __RPC_FAR *__RPC_FAR *ppMWindow);
        
        /* [helpcontext][helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_MyGroups )( 
            IMessenger2 __RPC_FAR * This,
            /* [retval][out] */ IDispatch __RPC_FAR *__RPC_FAR *ppMGroups);
        
        /* [helpcontext][helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *CreateGroup )( 
            IMessenger2 __RPC_FAR * This,
            /* [in] */ BSTR bstrName,
            /* [in] */ VARIANT vService,
            /* [retval][out] */ IDispatch __RPC_FAR *__RPC_FAR *ppGroup);
        
        END_INTERFACE
    } IMessenger2Vtbl;

    interface IMessenger2
    {
        CONST_VTBL struct IMessenger2Vtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IMessenger2_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IMessenger2_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IMessenger2_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IMessenger2_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define IMessenger2_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define IMessenger2_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define IMessenger2_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define IMessenger2_get_Window(This,ppMWindow)	\
    (This)->lpVtbl -> get_Window(This,ppMWindow)

#define IMessenger2_ViewProfile(This,vContact)	\
    (This)->lpVtbl -> ViewProfile(This,vContact)

#define IMessenger2_get_ReceiveFileDirectory(This,bstrPath)	\
    (This)->lpVtbl -> get_ReceiveFileDirectory(This,bstrPath)

#define IMessenger2_StartVoice(This,vContact,ppMWindow)	\
    (This)->lpVtbl -> StartVoice(This,vContact,ppMWindow)

#define IMessenger2_InviteApp(This,vContact,bstrAppID,ppMWindow)	\
    (This)->lpVtbl -> InviteApp(This,vContact,bstrAppID,ppMWindow)

#define IMessenger2_SendMail(This,vContact)	\
    (This)->lpVtbl -> SendMail(This,vContact)

#define IMessenger2_OpenInbox(This)	\
    (This)->lpVtbl -> OpenInbox(This)

#define IMessenger2_SendFile(This,vContact,bstrFileName,ppMWindow)	\
    (This)->lpVtbl -> SendFile(This,vContact,bstrFileName,ppMWindow)

#define IMessenger2_Signout(This)	\
    (This)->lpVtbl -> Signout(This)

#define IMessenger2_Signin(This,hwndParent,bstrSigninName,bstrPassword)	\
    (This)->lpVtbl -> Signin(This,hwndParent,bstrSigninName,bstrPassword)

#define IMessenger2_GetContact(This,bstrSigninName,bstrServiceId,ppMContact)	\
    (This)->lpVtbl -> GetContact(This,bstrSigninName,bstrServiceId,ppMContact)

#define IMessenger2_OptionsPages(This,hwndParent,mOptionPage)	\
    (This)->lpVtbl -> OptionsPages(This,hwndParent,mOptionPage)

#define IMessenger2_AddContact(This,hwndParent,bstrEMail)	\
    (This)->lpVtbl -> AddContact(This,hwndParent,bstrEMail)

#define IMessenger2_FindContact(This,hwndParent,bstrFirstName,bstrLastName,vbstrCity,vbstrState,vbstrCountry)	\
    (This)->lpVtbl -> FindContact(This,hwndParent,bstrFirstName,bstrLastName,vbstrCity,vbstrState,vbstrCountry)

#define IMessenger2_InstantMessage(This,vContact,ppMWindow)	\
    (This)->lpVtbl -> InstantMessage(This,vContact,ppMWindow)

#define IMessenger2_Phone(This,vContact,ePhoneNumber,bstrNumber,ppMWindow)	\
    (This)->lpVtbl -> Phone(This,vContact,ePhoneNumber,bstrNumber,ppMWindow)

#define IMessenger2_MediaWizard(This,hwndParent)	\
    (This)->lpVtbl -> MediaWizard(This,hwndParent)

#define IMessenger2_Page(This,vContact,ppMWindow)	\
    (This)->lpVtbl -> Page(This,vContact,ppMWindow)

#define IMessenger2_AutoSignin(This)	\
    (This)->lpVtbl -> AutoSignin(This)

#define IMessenger2_get_MyContacts(This,ppMContacts)	\
    (This)->lpVtbl -> get_MyContacts(This,ppMContacts)

#define IMessenger2_get_MySigninName(This,pbstrName)	\
    (This)->lpVtbl -> get_MySigninName(This,pbstrName)

#define IMessenger2_get_MyFriendlyName(This,pbstrName)	\
    (This)->lpVtbl -> get_MyFriendlyName(This,pbstrName)

#define IMessenger2_put_MyStatus(This,mStatus)	\
    (This)->lpVtbl -> put_MyStatus(This,mStatus)

#define IMessenger2_get_MyStatus(This,pmStatus)	\
    (This)->lpVtbl -> get_MyStatus(This,pmStatus)

#define IMessenger2_get_UnreadEmailCount(This,mFolder,plCount)	\
    (This)->lpVtbl -> get_UnreadEmailCount(This,mFolder,plCount)

#define IMessenger2_get_MyServiceName(This,pbstrServiceName)	\
    (This)->lpVtbl -> get_MyServiceName(This,pbstrServiceName)

#define IMessenger2_get_MyPhoneNumber(This,PhoneType,pbstrNumber)	\
    (This)->lpVtbl -> get_MyPhoneNumber(This,PhoneType,pbstrNumber)

#define IMessenger2_get_MyProperty(This,ePropType,pvPropVal)	\
    (This)->lpVtbl -> get_MyProperty(This,ePropType,pvPropVal)

#define IMessenger2_put_MyProperty(This,ePropType,vPropVal)	\
    (This)->lpVtbl -> put_MyProperty(This,ePropType,vPropVal)

#define IMessenger2_get_MyServiceId(This,pbstrServiceId)	\
    (This)->lpVtbl -> get_MyServiceId(This,pbstrServiceId)

#define IMessenger2_get_Services(This,ppdispServices)	\
    (This)->lpVtbl -> get_Services(This,ppdispServices)


#define IMessenger2_get_ContactsSortOrder(This,pSort)	\
    (This)->lpVtbl -> get_ContactsSortOrder(This,pSort)

#define IMessenger2_put_ContactsSortOrder(This,Sort)	\
    (This)->lpVtbl -> put_ContactsSortOrder(This,Sort)

#define IMessenger2_StartVideo(This,vContact,ppMWindow)	\
    (This)->lpVtbl -> StartVideo(This,vContact,ppMWindow)

#define IMessenger2_get_MyGroups(This,ppMGroups)	\
    (This)->lpVtbl -> get_MyGroups(This,ppMGroups)

#define IMessenger2_CreateGroup(This,bstrName,vService,ppGroup)	\
    (This)->lpVtbl -> CreateGroup(This,bstrName,vService,ppGroup)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpcontext][helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE IMessenger2_get_ContactsSortOrder_Proxy( 
    IMessenger2 __RPC_FAR * This,
    /* [retval][out] */ MUASORT __RPC_FAR *pSort);


void __RPC_STUB IMessenger2_get_ContactsSortOrder_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpcontext][helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE IMessenger2_put_ContactsSortOrder_Proxy( 
    IMessenger2 __RPC_FAR * This,
    /* [in] */ MUASORT Sort);


void __RPC_STUB IMessenger2_put_ContactsSortOrder_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpcontext][helpstring][id] */ HRESULT STDMETHODCALLTYPE IMessenger2_StartVideo_Proxy( 
    IMessenger2 __RPC_FAR * This,
    /* [in] */ VARIANT vContact,
    /* [retval][out] */ IDispatch __RPC_FAR *__RPC_FAR *ppMWindow);


void __RPC_STUB IMessenger2_StartVideo_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpcontext][helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE IMessenger2_get_MyGroups_Proxy( 
    IMessenger2 __RPC_FAR * This,
    /* [retval][out] */ IDispatch __RPC_FAR *__RPC_FAR *ppMGroups);


void __RPC_STUB IMessenger2_get_MyGroups_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpcontext][helpstring][id] */ HRESULT STDMETHODCALLTYPE IMessenger2_CreateGroup_Proxy( 
    IMessenger2 __RPC_FAR * This,
    /* [in] */ BSTR bstrName,
    /* [in] */ VARIANT vService,
    /* [retval][out] */ IDispatch __RPC_FAR *__RPC_FAR *ppGroup);


void __RPC_STUB IMessenger2_CreateGroup_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IMessenger2_INTERFACE_DEFINED__ */


#ifndef __IMessenger3_INTERFACE_DEFINED__
#define __IMessenger3_INTERFACE_DEFINED__

/* interface IMessenger3 */
/* [object][oleautomation][dual][helpcontext][helpstring][uuid] */ 


EXTERN_C const IID IID_IMessenger3;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("D50C3386-0F89-48f8-B204-3604629DEE10")
    IMessenger3 : public IMessenger2
    {
    public:
        virtual /* [helpcontext][helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Property( 
            /* [in] */ MMESSENGERPROPERTY ePropType,
            /* [retval][out] */ VARIANT __RPC_FAR *pvPropVal) = 0;
        
        virtual /* [helpcontext][helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_Property( 
            /* [in] */ MMESSENGERPROPERTY ePropType,
            /* [in] */ VARIANT vPropVal) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IMessenger3Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            IMessenger3 __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            IMessenger3 __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            IMessenger3 __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfoCount )( 
            IMessenger3 __RPC_FAR * This,
            /* [out] */ UINT __RPC_FAR *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfo )( 
            IMessenger3 __RPC_FAR * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo __RPC_FAR *__RPC_FAR *ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetIDsOfNames )( 
            IMessenger3 __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR __RPC_FAR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID __RPC_FAR *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Invoke )( 
            IMessenger3 __RPC_FAR * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS __RPC_FAR *pDispParams,
            /* [out] */ VARIANT __RPC_FAR *pVarResult,
            /* [out] */ EXCEPINFO __RPC_FAR *pExcepInfo,
            /* [out] */ UINT __RPC_FAR *puArgErr);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Window )( 
            IMessenger3 __RPC_FAR * This,
            /* [retval][out] */ IDispatch __RPC_FAR *__RPC_FAR *ppMWindow);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *ViewProfile )( 
            IMessenger3 __RPC_FAR * This,
            /* [in] */ VARIANT vContact);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_ReceiveFileDirectory )( 
            IMessenger3 __RPC_FAR * This,
            /* [retval][out] */ BSTR __RPC_FAR *bstrPath);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *StartVoice )( 
            IMessenger3 __RPC_FAR * This,
            /* [in] */ VARIANT vContact,
            /* [retval][out] */ IDispatch __RPC_FAR *__RPC_FAR *ppMWindow);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *InviteApp )( 
            IMessenger3 __RPC_FAR * This,
            /* [in] */ VARIANT vContact,
            /* [in] */ BSTR bstrAppID,
            /* [retval][out] */ IDispatch __RPC_FAR *__RPC_FAR *ppMWindow);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *SendMail )( 
            IMessenger3 __RPC_FAR * This,
            /* [in] */ VARIANT vContact);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *OpenInbox )( 
            IMessenger3 __RPC_FAR * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *SendFile )( 
            IMessenger3 __RPC_FAR * This,
            /* [in] */ VARIANT vContact,
            /* [in] */ BSTR bstrFileName,
            /* [retval][out] */ IDispatch __RPC_FAR *__RPC_FAR *ppMWindow);
        
        /* [helpcontext][helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Signout )( 
            IMessenger3 __RPC_FAR * This);
        
        /* [helpcontext][helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Signin )( 
            IMessenger3 __RPC_FAR * This,
            /* [in] */ LONG hwndParent,
            /* [in] */ BSTR bstrSigninName,
            /* [in] */ BSTR bstrPassword);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetContact )( 
            IMessenger3 __RPC_FAR * This,
            /* [in] */ BSTR bstrSigninName,
            /* [in] */ BSTR bstrServiceId,
            /* [retval][out] */ IDispatch __RPC_FAR *__RPC_FAR *ppMContact);
        
        /* [helpcontext][helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *OptionsPages )( 
            IMessenger3 __RPC_FAR * This,
            /* [in] */ LONG hwndParent,
            /* [in] */ MOPTIONPAGE mOptionPage);
        
        /* [helpcontext][helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *AddContact )( 
            IMessenger3 __RPC_FAR * This,
            /* [in] */ LONG hwndParent,
            /* [in] */ BSTR bstrEMail);
        
        /* [helpcontext][helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *FindContact )( 
            IMessenger3 __RPC_FAR * This,
            /* [in] */ LONG hwndParent,
            /* [in] */ BSTR bstrFirstName,
            /* [in] */ BSTR bstrLastName,
            /* [optional][in] */ VARIANT vbstrCity,
            /* [optional][in] */ VARIANT vbstrState,
            /* [optional][in] */ VARIANT vbstrCountry);
        
        /* [helpcontext][helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *InstantMessage )( 
            IMessenger3 __RPC_FAR * This,
            /* [in] */ VARIANT vContact,
            /* [retval][out] */ IDispatch __RPC_FAR *__RPC_FAR *ppMWindow);
        
        /* [helpcontext][helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Phone )( 
            IMessenger3 __RPC_FAR * This,
            /* [in] */ VARIANT vContact,
            /* [in] */ MPHONE_TYPE ePhoneNumber,
            /* [in] */ BSTR bstrNumber,
            /* [retval][out] */ IDispatch __RPC_FAR *__RPC_FAR *ppMWindow);
        
        /* [helpcontext][helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *MediaWizard )( 
            IMessenger3 __RPC_FAR * This,
            /* [in] */ LONG hwndParent);
        
        /* [helpcontext][helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Page )( 
            IMessenger3 __RPC_FAR * This,
            /* [in] */ VARIANT vContact,
            /* [retval][out] */ IDispatch __RPC_FAR *__RPC_FAR *ppMWindow);
        
        /* [helpcontext][helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *AutoSignin )( 
            IMessenger3 __RPC_FAR * This);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_MyContacts )( 
            IMessenger3 __RPC_FAR * This,
            /* [retval][out] */ IDispatch __RPC_FAR *__RPC_FAR *ppMContacts);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_MySigninName )( 
            IMessenger3 __RPC_FAR * This,
            /* [retval][out] */ BSTR __RPC_FAR *pbstrName);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_MyFriendlyName )( 
            IMessenger3 __RPC_FAR * This,
            /* [retval][out] */ BSTR __RPC_FAR *pbstrName);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_MyStatus )( 
            IMessenger3 __RPC_FAR * This,
            /* [in] */ MISTATUS mStatus);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_MyStatus )( 
            IMessenger3 __RPC_FAR * This,
            /* [retval][out] */ MISTATUS __RPC_FAR *pmStatus);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_UnreadEmailCount )( 
            IMessenger3 __RPC_FAR * This,
            /* [in] */ MUAFOLDER mFolder,
            /* [retval][out] */ LONG __RPC_FAR *plCount);
        
        /* [helpcontext][helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_MyServiceName )( 
            IMessenger3 __RPC_FAR * This,
            /* [retval][out] */ BSTR __RPC_FAR *pbstrServiceName);
        
        /* [helpcontext][helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_MyPhoneNumber )( 
            IMessenger3 __RPC_FAR * This,
            /* [in] */ MPHONE_TYPE PhoneType,
            /* [retval][out] */ BSTR __RPC_FAR *pbstrNumber);
        
        /* [helpcontext][helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_MyProperty )( 
            IMessenger3 __RPC_FAR * This,
            /* [in] */ MCONTACTPROPERTY ePropType,
            /* [retval][out] */ VARIANT __RPC_FAR *pvPropVal);
        
        /* [helpcontext][helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_MyProperty )( 
            IMessenger3 __RPC_FAR * This,
            /* [in] */ MCONTACTPROPERTY ePropType,
            /* [in] */ VARIANT vPropVal);
        
        /* [helpcontext][helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_MyServiceId )( 
            IMessenger3 __RPC_FAR * This,
            /* [retval][out] */ BSTR __RPC_FAR *pbstrServiceId);
        
        /* [helpcontext][helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Services )( 
            IMessenger3 __RPC_FAR * This,
            /* [retval][out] */ IDispatch __RPC_FAR *__RPC_FAR *ppdispServices);
        
        /* [helpcontext][helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_ContactsSortOrder )( 
            IMessenger3 __RPC_FAR * This,
            /* [retval][out] */ MUASORT __RPC_FAR *pSort);
        
        /* [helpcontext][helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_ContactsSortOrder )( 
            IMessenger3 __RPC_FAR * This,
            /* [in] */ MUASORT Sort);
        
        /* [helpcontext][helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *StartVideo )( 
            IMessenger3 __RPC_FAR * This,
            /* [in] */ VARIANT vContact,
            /* [retval][out] */ IDispatch __RPC_FAR *__RPC_FAR *ppMWindow);
        
        /* [helpcontext][helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_MyGroups )( 
            IMessenger3 __RPC_FAR * This,
            /* [retval][out] */ IDispatch __RPC_FAR *__RPC_FAR *ppMGroups);
        
        /* [helpcontext][helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *CreateGroup )( 
            IMessenger3 __RPC_FAR * This,
            /* [in] */ BSTR bstrName,
            /* [in] */ VARIANT vService,
            /* [retval][out] */ IDispatch __RPC_FAR *__RPC_FAR *ppGroup);
        
        /* [helpcontext][helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Property )( 
            IMessenger3 __RPC_FAR * This,
            /* [in] */ MMESSENGERPROPERTY ePropType,
            /* [retval][out] */ VARIANT __RPC_FAR *pvPropVal);
        
        /* [helpcontext][helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_Property )( 
            IMessenger3 __RPC_FAR * This,
            /* [in] */ MMESSENGERPROPERTY ePropType,
            /* [in] */ VARIANT vPropVal);
        
        END_INTERFACE
    } IMessenger3Vtbl;

    interface IMessenger3
    {
        CONST_VTBL struct IMessenger3Vtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IMessenger3_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IMessenger3_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IMessenger3_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IMessenger3_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define IMessenger3_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define IMessenger3_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define IMessenger3_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define IMessenger3_get_Window(This,ppMWindow)	\
    (This)->lpVtbl -> get_Window(This,ppMWindow)

#define IMessenger3_ViewProfile(This,vContact)	\
    (This)->lpVtbl -> ViewProfile(This,vContact)

#define IMessenger3_get_ReceiveFileDirectory(This,bstrPath)	\
    (This)->lpVtbl -> get_ReceiveFileDirectory(This,bstrPath)

#define IMessenger3_StartVoice(This,vContact,ppMWindow)	\
    (This)->lpVtbl -> StartVoice(This,vContact,ppMWindow)

#define IMessenger3_InviteApp(This,vContact,bstrAppID,ppMWindow)	\
    (This)->lpVtbl -> InviteApp(This,vContact,bstrAppID,ppMWindow)

#define IMessenger3_SendMail(This,vContact)	\
    (This)->lpVtbl -> SendMail(This,vContact)

#define IMessenger3_OpenInbox(This)	\
    (This)->lpVtbl -> OpenInbox(This)

#define IMessenger3_SendFile(This,vContact,bstrFileName,ppMWindow)	\
    (This)->lpVtbl -> SendFile(This,vContact,bstrFileName,ppMWindow)

#define IMessenger3_Signout(This)	\
    (This)->lpVtbl -> Signout(This)

#define IMessenger3_Signin(This,hwndParent,bstrSigninName,bstrPassword)	\
    (This)->lpVtbl -> Signin(This,hwndParent,bstrSigninName,bstrPassword)

#define IMessenger3_GetContact(This,bstrSigninName,bstrServiceId,ppMContact)	\
    (This)->lpVtbl -> GetContact(This,bstrSigninName,bstrServiceId,ppMContact)

#define IMessenger3_OptionsPages(This,hwndParent,mOptionPage)	\
    (This)->lpVtbl -> OptionsPages(This,hwndParent,mOptionPage)

#define IMessenger3_AddContact(This,hwndParent,bstrEMail)	\
    (This)->lpVtbl -> AddContact(This,hwndParent,bstrEMail)

#define IMessenger3_FindContact(This,hwndParent,bstrFirstName,bstrLastName,vbstrCity,vbstrState,vbstrCountry)	\
    (This)->lpVtbl -> FindContact(This,hwndParent,bstrFirstName,bstrLastName,vbstrCity,vbstrState,vbstrCountry)

#define IMessenger3_InstantMessage(This,vContact,ppMWindow)	\
    (This)->lpVtbl -> InstantMessage(This,vContact,ppMWindow)

#define IMessenger3_Phone(This,vContact,ePhoneNumber,bstrNumber,ppMWindow)	\
    (This)->lpVtbl -> Phone(This,vContact,ePhoneNumber,bstrNumber,ppMWindow)

#define IMessenger3_MediaWizard(This,hwndParent)	\
    (This)->lpVtbl -> MediaWizard(This,hwndParent)

#define IMessenger3_Page(This,vContact,ppMWindow)	\
    (This)->lpVtbl -> Page(This,vContact,ppMWindow)

#define IMessenger3_AutoSignin(This)	\
    (This)->lpVtbl -> AutoSignin(This)

#define IMessenger3_get_MyContacts(This,ppMContacts)	\
    (This)->lpVtbl -> get_MyContacts(This,ppMContacts)

#define IMessenger3_get_MySigninName(This,pbstrName)	\
    (This)->lpVtbl -> get_MySigninName(This,pbstrName)

#define IMessenger3_get_MyFriendlyName(This,pbstrName)	\
    (This)->lpVtbl -> get_MyFriendlyName(This,pbstrName)

#define IMessenger3_put_MyStatus(This,mStatus)	\
    (This)->lpVtbl -> put_MyStatus(This,mStatus)

#define IMessenger3_get_MyStatus(This,pmStatus)	\
    (This)->lpVtbl -> get_MyStatus(This,pmStatus)

#define IMessenger3_get_UnreadEmailCount(This,mFolder,plCount)	\
    (This)->lpVtbl -> get_UnreadEmailCount(This,mFolder,plCount)

#define IMessenger3_get_MyServiceName(This,pbstrServiceName)	\
    (This)->lpVtbl -> get_MyServiceName(This,pbstrServiceName)

#define IMessenger3_get_MyPhoneNumber(This,PhoneType,pbstrNumber)	\
    (This)->lpVtbl -> get_MyPhoneNumber(This,PhoneType,pbstrNumber)

#define IMessenger3_get_MyProperty(This,ePropType,pvPropVal)	\
    (This)->lpVtbl -> get_MyProperty(This,ePropType,pvPropVal)

#define IMessenger3_put_MyProperty(This,ePropType,vPropVal)	\
    (This)->lpVtbl -> put_MyProperty(This,ePropType,vPropVal)

#define IMessenger3_get_MyServiceId(This,pbstrServiceId)	\
    (This)->lpVtbl -> get_MyServiceId(This,pbstrServiceId)

#define IMessenger3_get_Services(This,ppdispServices)	\
    (This)->lpVtbl -> get_Services(This,ppdispServices)


#define IMessenger3_get_ContactsSortOrder(This,pSort)	\
    (This)->lpVtbl -> get_ContactsSortOrder(This,pSort)

#define IMessenger3_put_ContactsSortOrder(This,Sort)	\
    (This)->lpVtbl -> put_ContactsSortOrder(This,Sort)

#define IMessenger3_StartVideo(This,vContact,ppMWindow)	\
    (This)->lpVtbl -> StartVideo(This,vContact,ppMWindow)

#define IMessenger3_get_MyGroups(This,ppMGroups)	\
    (This)->lpVtbl -> get_MyGroups(This,ppMGroups)

#define IMessenger3_CreateGroup(This,bstrName,vService,ppGroup)	\
    (This)->lpVtbl -> CreateGroup(This,bstrName,vService,ppGroup)


#define IMessenger3_get_Property(This,ePropType,pvPropVal)	\
    (This)->lpVtbl -> get_Property(This,ePropType,pvPropVal)

#define IMessenger3_put_Property(This,ePropType,vPropVal)	\
    (This)->lpVtbl -> put_Property(This,ePropType,vPropVal)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpcontext][helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE IMessenger3_get_Property_Proxy( 
    IMessenger3 __RPC_FAR * This,
    /* [in] */ MMESSENGERPROPERTY ePropType,
    /* [retval][out] */ VARIANT __RPC_FAR *pvPropVal);


void __RPC_STUB IMessenger3_get_Property_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpcontext][helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE IMessenger3_put_Property_Proxy( 
    IMessenger3 __RPC_FAR * This,
    /* [in] */ MMESSENGERPROPERTY ePropType,
    /* [in] */ VARIANT vPropVal);


void __RPC_STUB IMessenger3_put_Property_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IMessenger3_INTERFACE_DEFINED__ */


#ifndef __IMessengerContact_INTERFACE_DEFINED__
#define __IMessengerContact_INTERFACE_DEFINED__

/* interface IMessengerContact */
/* [object][oleautomation][dual][helpstring][uuid] */ 


EXTERN_C const IID IID_IMessengerContact;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("E7479A0F-BB19-44a5-968F-6F41D93EE0BC")
    IMessengerContact : public IDispatch
    {
    public:
        virtual /* [helpcontext][helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_FriendlyName( 
            /* [retval][out] */ BSTR __RPC_FAR *pbstrFriendlyName) = 0;
        
        virtual /* [helpcontext][helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Status( 
            /* [retval][out] */ MISTATUS __RPC_FAR *pMstate) = 0;
        
        virtual /* [helpcontext][helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_SigninName( 
            /* [retval][out] */ BSTR __RPC_FAR *pbstrSigninName) = 0;
        
        virtual /* [helpcontext][helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ServiceName( 
            /* [retval][out] */ BSTR __RPC_FAR *pbstrServiceName) = 0;
        
        virtual /* [helpcontext][helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Blocked( 
            /* [retval][out] */ VARIANT_BOOL __RPC_FAR *pBoolBlock) = 0;
        
        virtual /* [helpcontext][helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_Blocked( 
            /* [in] */ VARIANT_BOOL pBoolBlock) = 0;
        
        virtual /* [helpcontext][helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_CanPage( 
            /* [retval][out] */ VARIANT_BOOL __RPC_FAR *pBoolPage) = 0;
        
        virtual /* [helpcontext][helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_PhoneNumber( 
            /* [in] */ MPHONE_TYPE PhoneType,
            /* [retval][out] */ BSTR __RPC_FAR *bstrNumber) = 0;
        
        virtual /* [helpcontext][helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_IsSelf( 
            /* [retval][out] */ VARIANT_BOOL __RPC_FAR *pBoolSelf) = 0;
        
        virtual /* [helpcontext][helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Property( 
            /* [in] */ MCONTACTPROPERTY ePropType,
            /* [retval][out] */ VARIANT __RPC_FAR *pvPropVal) = 0;
        
        virtual /* [helpcontext][helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_Property( 
            /* [in] */ MCONTACTPROPERTY ePropType,
            /* [in] */ VARIANT vPropVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ServiceId( 
            /* [retval][out] */ BSTR __RPC_FAR *pbstrServiceID) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IMessengerContactVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            IMessengerContact __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            IMessengerContact __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            IMessengerContact __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfoCount )( 
            IMessengerContact __RPC_FAR * This,
            /* [out] */ UINT __RPC_FAR *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfo )( 
            IMessengerContact __RPC_FAR * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo __RPC_FAR *__RPC_FAR *ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetIDsOfNames )( 
            IMessengerContact __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR __RPC_FAR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID __RPC_FAR *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Invoke )( 
            IMessengerContact __RPC_FAR * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS __RPC_FAR *pDispParams,
            /* [out] */ VARIANT __RPC_FAR *pVarResult,
            /* [out] */ EXCEPINFO __RPC_FAR *pExcepInfo,
            /* [out] */ UINT __RPC_FAR *puArgErr);
        
        /* [helpcontext][helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_FriendlyName )( 
            IMessengerContact __RPC_FAR * This,
            /* [retval][out] */ BSTR __RPC_FAR *pbstrFriendlyName);
        
        /* [helpcontext][helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Status )( 
            IMessengerContact __RPC_FAR * This,
            /* [retval][out] */ MISTATUS __RPC_FAR *pMstate);
        
        /* [helpcontext][helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_SigninName )( 
            IMessengerContact __RPC_FAR * This,
            /* [retval][out] */ BSTR __RPC_FAR *pbstrSigninName);
        
        /* [helpcontext][helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_ServiceName )( 
            IMessengerContact __RPC_FAR * This,
            /* [retval][out] */ BSTR __RPC_FAR *pbstrServiceName);
        
        /* [helpcontext][helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Blocked )( 
            IMessengerContact __RPC_FAR * This,
            /* [retval][out] */ VARIANT_BOOL __RPC_FAR *pBoolBlock);
        
        /* [helpcontext][helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_Blocked )( 
            IMessengerContact __RPC_FAR * This,
            /* [in] */ VARIANT_BOOL pBoolBlock);
        
        /* [helpcontext][helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_CanPage )( 
            IMessengerContact __RPC_FAR * This,
            /* [retval][out] */ VARIANT_BOOL __RPC_FAR *pBoolPage);
        
        /* [helpcontext][helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_PhoneNumber )( 
            IMessengerContact __RPC_FAR * This,
            /* [in] */ MPHONE_TYPE PhoneType,
            /* [retval][out] */ BSTR __RPC_FAR *bstrNumber);
        
        /* [helpcontext][helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_IsSelf )( 
            IMessengerContact __RPC_FAR * This,
            /* [retval][out] */ VARIANT_BOOL __RPC_FAR *pBoolSelf);
        
        /* [helpcontext][helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Property )( 
            IMessengerContact __RPC_FAR * This,
            /* [in] */ MCONTACTPROPERTY ePropType,
            /* [retval][out] */ VARIANT __RPC_FAR *pvPropVal);
        
        /* [helpcontext][helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_Property )( 
            IMessengerContact __RPC_FAR * This,
            /* [in] */ MCONTACTPROPERTY ePropType,
            /* [in] */ VARIANT vPropVal);
        
        /* [helpcontext][helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_ServiceId )( 
            IMessengerContact __RPC_FAR * This,
            /* [retval][out] */ BSTR __RPC_FAR *pbstrServiceID);
        
        END_INTERFACE
    } IMessengerContactVtbl;

    interface IMessengerContact
    {
        CONST_VTBL struct IMessengerContactVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IMessengerContact_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IMessengerContact_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IMessengerContact_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IMessengerContact_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define IMessengerContact_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define IMessengerContact_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define IMessengerContact_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define IMessengerContact_get_FriendlyName(This,pbstrFriendlyName)	\
    (This)->lpVtbl -> get_FriendlyName(This,pbstrFriendlyName)

#define IMessengerContact_get_Status(This,pMstate)	\
    (This)->lpVtbl -> get_Status(This,pMstate)

#define IMessengerContact_get_SigninName(This,pbstrSigninName)	\
    (This)->lpVtbl -> get_SigninName(This,pbstrSigninName)

#define IMessengerContact_get_ServiceName(This,pbstrServiceName)	\
    (This)->lpVtbl -> get_ServiceName(This,pbstrServiceName)

#define IMessengerContact_get_Blocked(This,pBoolBlock)	\
    (This)->lpVtbl -> get_Blocked(This,pBoolBlock)

#define IMessengerContact_put_Blocked(This,pBoolBlock)	\
    (This)->lpVtbl -> put_Blocked(This,pBoolBlock)

#define IMessengerContact_get_CanPage(This,pBoolPage)	\
    (This)->lpVtbl -> get_CanPage(This,pBoolPage)

#define IMessengerContact_get_PhoneNumber(This,PhoneType,bstrNumber)	\
    (This)->lpVtbl -> get_PhoneNumber(This,PhoneType,bstrNumber)

#define IMessengerContact_get_IsSelf(This,pBoolSelf)	\
    (This)->lpVtbl -> get_IsSelf(This,pBoolSelf)

#define IMessengerContact_get_Property(This,ePropType,pvPropVal)	\
    (This)->lpVtbl -> get_Property(This,ePropType,pvPropVal)

#define IMessengerContact_put_Property(This,ePropType,vPropVal)	\
    (This)->lpVtbl -> put_Property(This,ePropType,vPropVal)

#define IMessengerContact_get_ServiceId(This,pbstrServiceID)	\
    (This)->lpVtbl -> get_ServiceId(This,pbstrServiceID)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpcontext][helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE IMessengerContact_get_FriendlyName_Proxy( 
    IMessengerContact __RPC_FAR * This,
    /* [retval][out] */ BSTR __RPC_FAR *pbstrFriendlyName);


void __RPC_STUB IMessengerContact_get_FriendlyName_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpcontext][helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE IMessengerContact_get_Status_Proxy( 
    IMessengerContact __RPC_FAR * This,
    /* [retval][out] */ MISTATUS __RPC_FAR *pMstate);


void __RPC_STUB IMessengerContact_get_Status_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpcontext][helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE IMessengerContact_get_SigninName_Proxy( 
    IMessengerContact __RPC_FAR * This,
    /* [retval][out] */ BSTR __RPC_FAR *pbstrSigninName);


void __RPC_STUB IMessengerContact_get_SigninName_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpcontext][helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE IMessengerContact_get_ServiceName_Proxy( 
    IMessengerContact __RPC_FAR * This,
    /* [retval][out] */ BSTR __RPC_FAR *pbstrServiceName);


void __RPC_STUB IMessengerContact_get_ServiceName_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpcontext][helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE IMessengerContact_get_Blocked_Proxy( 
    IMessengerContact __RPC_FAR * This,
    /* [retval][out] */ VARIANT_BOOL __RPC_FAR *pBoolBlock);


void __RPC_STUB IMessengerContact_get_Blocked_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpcontext][helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE IMessengerContact_put_Blocked_Proxy( 
    IMessengerContact __RPC_FAR * This,
    /* [in] */ VARIANT_BOOL pBoolBlock);


void __RPC_STUB IMessengerContact_put_Blocked_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpcontext][helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE IMessengerContact_get_CanPage_Proxy( 
    IMessengerContact __RPC_FAR * This,
    /* [retval][out] */ VARIANT_BOOL __RPC_FAR *pBoolPage);


void __RPC_STUB IMessengerContact_get_CanPage_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpcontext][helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE IMessengerContact_get_PhoneNumber_Proxy( 
    IMessengerContact __RPC_FAR * This,
    /* [in] */ MPHONE_TYPE PhoneType,
    /* [retval][out] */ BSTR __RPC_FAR *bstrNumber);


void __RPC_STUB IMessengerContact_get_PhoneNumber_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpcontext][helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE IMessengerContact_get_IsSelf_Proxy( 
    IMessengerContact __RPC_FAR * This,
    /* [retval][out] */ VARIANT_BOOL __RPC_FAR *pBoolSelf);


void __RPC_STUB IMessengerContact_get_IsSelf_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpcontext][helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE IMessengerContact_get_Property_Proxy( 
    IMessengerContact __RPC_FAR * This,
    /* [in] */ MCONTACTPROPERTY ePropType,
    /* [retval][out] */ VARIANT __RPC_FAR *pvPropVal);


void __RPC_STUB IMessengerContact_get_Property_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpcontext][helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE IMessengerContact_put_Property_Proxy( 
    IMessengerContact __RPC_FAR * This,
    /* [in] */ MCONTACTPROPERTY ePropType,
    /* [in] */ VARIANT vPropVal);


void __RPC_STUB IMessengerContact_put_Property_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpcontext][helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE IMessengerContact_get_ServiceId_Proxy( 
    IMessengerContact __RPC_FAR * This,
    /* [retval][out] */ BSTR __RPC_FAR *pbstrServiceID);


void __RPC_STUB IMessengerContact_get_ServiceId_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IMessengerContact_INTERFACE_DEFINED__ */


#ifndef __IMessengerContacts_INTERFACE_DEFINED__
#define __IMessengerContacts_INTERFACE_DEFINED__

/* interface IMessengerContacts */
/* [object][oleautomation][dual][helpstring][uuid] */ 


EXTERN_C const IID IID_IMessengerContacts;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("E7479A0D-BB19-44a5-968F-6F41D93EE0BC")
    IMessengerContacts : public IDispatch
    {
    public:
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Count( 
            /* [retval][out] */ LONG __RPC_FAR *pcContacts) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Item( 
            /* [in] */ LONG Index,
            /* [retval][out] */ IDispatch __RPC_FAR *__RPC_FAR *ppMContact) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Remove( 
            /* [in] */ IDispatch __RPC_FAR *pMContact) = 0;
        
        virtual /* [helpstring][restricted][propget][id] */ HRESULT STDMETHODCALLTYPE get__NewEnum( 
            /* [retval][out] */ IUnknown __RPC_FAR *__RPC_FAR *ppUnknown) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IMessengerContactsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            IMessengerContacts __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            IMessengerContacts __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            IMessengerContacts __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfoCount )( 
            IMessengerContacts __RPC_FAR * This,
            /* [out] */ UINT __RPC_FAR *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfo )( 
            IMessengerContacts __RPC_FAR * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo __RPC_FAR *__RPC_FAR *ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetIDsOfNames )( 
            IMessengerContacts __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR __RPC_FAR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID __RPC_FAR *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Invoke )( 
            IMessengerContacts __RPC_FAR * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS __RPC_FAR *pDispParams,
            /* [out] */ VARIANT __RPC_FAR *pVarResult,
            /* [out] */ EXCEPINFO __RPC_FAR *pExcepInfo,
            /* [out] */ UINT __RPC_FAR *puArgErr);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Count )( 
            IMessengerContacts __RPC_FAR * This,
            /* [retval][out] */ LONG __RPC_FAR *pcContacts);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Item )( 
            IMessengerContacts __RPC_FAR * This,
            /* [in] */ LONG Index,
            /* [retval][out] */ IDispatch __RPC_FAR *__RPC_FAR *ppMContact);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Remove )( 
            IMessengerContacts __RPC_FAR * This,
            /* [in] */ IDispatch __RPC_FAR *pMContact);
        
        /* [helpstring][restricted][propget][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get__NewEnum )( 
            IMessengerContacts __RPC_FAR * This,
            /* [retval][out] */ IUnknown __RPC_FAR *__RPC_FAR *ppUnknown);
        
        END_INTERFACE
    } IMessengerContactsVtbl;

    interface IMessengerContacts
    {
        CONST_VTBL struct IMessengerContactsVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IMessengerContacts_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IMessengerContacts_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IMessengerContacts_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IMessengerContacts_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define IMessengerContacts_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define IMessengerContacts_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define IMessengerContacts_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define IMessengerContacts_get_Count(This,pcContacts)	\
    (This)->lpVtbl -> get_Count(This,pcContacts)

#define IMessengerContacts_Item(This,Index,ppMContact)	\
    (This)->lpVtbl -> Item(This,Index,ppMContact)

#define IMessengerContacts_Remove(This,pMContact)	\
    (This)->lpVtbl -> Remove(This,pMContact)

#define IMessengerContacts_get__NewEnum(This,ppUnknown)	\
    (This)->lpVtbl -> get__NewEnum(This,ppUnknown)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE IMessengerContacts_get_Count_Proxy( 
    IMessengerContacts __RPC_FAR * This,
    /* [retval][out] */ LONG __RPC_FAR *pcContacts);


void __RPC_STUB IMessengerContacts_get_Count_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IMessengerContacts_Item_Proxy( 
    IMessengerContacts __RPC_FAR * This,
    /* [in] */ LONG Index,
    /* [retval][out] */ IDispatch __RPC_FAR *__RPC_FAR *ppMContact);


void __RPC_STUB IMessengerContacts_Item_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IMessengerContacts_Remove_Proxy( 
    IMessengerContacts __RPC_FAR * This,
    /* [in] */ IDispatch __RPC_FAR *pMContact);


void __RPC_STUB IMessengerContacts_Remove_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][restricted][propget][id] */ HRESULT STDMETHODCALLTYPE IMessengerContacts_get__NewEnum_Proxy( 
    IMessengerContacts __RPC_FAR * This,
    /* [retval][out] */ IUnknown __RPC_FAR *__RPC_FAR *ppUnknown);


void __RPC_STUB IMessengerContacts_get__NewEnum_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IMessengerContacts_INTERFACE_DEFINED__ */


#ifndef __IMessengerServices_INTERFACE_DEFINED__
#define __IMessengerServices_INTERFACE_DEFINED__

/* interface IMessengerServices */
/* [object][oleautomation][dual][helpcontext][helpstring][uuid] */ 


EXTERN_C const IID IID_IMessengerServices;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("2E50547B-A8AA-4f60-B57E-1F414711007B")
    IMessengerServices : public IDispatch
    {
    public:
        virtual /* [helpcontext][helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_PrimaryService( 
            /* [retval][out] */ IDispatch __RPC_FAR *__RPC_FAR *ppService) = 0;
        
        virtual /* [helpcontext][helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Count( 
            /* [retval][out] */ long __RPC_FAR *pcServices) = 0;
        
        virtual /* [helpcontext][helpstring][id] */ HRESULT STDMETHODCALLTYPE Item( 
            /* [in] */ long Index,
            /* [retval][out] */ IDispatch __RPC_FAR *__RPC_FAR *ppService) = 0;
        
        virtual /* [helpcontext][helpstring][restricted][propget][id] */ HRESULT STDMETHODCALLTYPE get__NewEnum( 
            /* [retval][out] */ IUnknown __RPC_FAR *__RPC_FAR *ppUnknown) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IMessengerServicesVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            IMessengerServices __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            IMessengerServices __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            IMessengerServices __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfoCount )( 
            IMessengerServices __RPC_FAR * This,
            /* [out] */ UINT __RPC_FAR *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfo )( 
            IMessengerServices __RPC_FAR * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo __RPC_FAR *__RPC_FAR *ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetIDsOfNames )( 
            IMessengerServices __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR __RPC_FAR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID __RPC_FAR *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Invoke )( 
            IMessengerServices __RPC_FAR * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS __RPC_FAR *pDispParams,
            /* [out] */ VARIANT __RPC_FAR *pVarResult,
            /* [out] */ EXCEPINFO __RPC_FAR *pExcepInfo,
            /* [out] */ UINT __RPC_FAR *puArgErr);
        
        /* [helpcontext][helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_PrimaryService )( 
            IMessengerServices __RPC_FAR * This,
            /* [retval][out] */ IDispatch __RPC_FAR *__RPC_FAR *ppService);
        
        /* [helpcontext][helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Count )( 
            IMessengerServices __RPC_FAR * This,
            /* [retval][out] */ long __RPC_FAR *pcServices);
        
        /* [helpcontext][helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Item )( 
            IMessengerServices __RPC_FAR * This,
            /* [in] */ long Index,
            /* [retval][out] */ IDispatch __RPC_FAR *__RPC_FAR *ppService);
        
        /* [helpcontext][helpstring][restricted][propget][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get__NewEnum )( 
            IMessengerServices __RPC_FAR * This,
            /* [retval][out] */ IUnknown __RPC_FAR *__RPC_FAR *ppUnknown);
        
        END_INTERFACE
    } IMessengerServicesVtbl;

    interface IMessengerServices
    {
        CONST_VTBL struct IMessengerServicesVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IMessengerServices_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IMessengerServices_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IMessengerServices_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IMessengerServices_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define IMessengerServices_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define IMessengerServices_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define IMessengerServices_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define IMessengerServices_get_PrimaryService(This,ppService)	\
    (This)->lpVtbl -> get_PrimaryService(This,ppService)

#define IMessengerServices_get_Count(This,pcServices)	\
    (This)->lpVtbl -> get_Count(This,pcServices)

#define IMessengerServices_Item(This,Index,ppService)	\
    (This)->lpVtbl -> Item(This,Index,ppService)

#define IMessengerServices_get__NewEnum(This,ppUnknown)	\
    (This)->lpVtbl -> get__NewEnum(This,ppUnknown)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpcontext][helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE IMessengerServices_get_PrimaryService_Proxy( 
    IMessengerServices __RPC_FAR * This,
    /* [retval][out] */ IDispatch __RPC_FAR *__RPC_FAR *ppService);


void __RPC_STUB IMessengerServices_get_PrimaryService_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpcontext][helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE IMessengerServices_get_Count_Proxy( 
    IMessengerServices __RPC_FAR * This,
    /* [retval][out] */ long __RPC_FAR *pcServices);


void __RPC_STUB IMessengerServices_get_Count_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpcontext][helpstring][id] */ HRESULT STDMETHODCALLTYPE IMessengerServices_Item_Proxy( 
    IMessengerServices __RPC_FAR * This,
    /* [in] */ long Index,
    /* [retval][out] */ IDispatch __RPC_FAR *__RPC_FAR *ppService);


void __RPC_STUB IMessengerServices_Item_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpcontext][helpstring][restricted][propget][id] */ HRESULT STDMETHODCALLTYPE IMessengerServices_get__NewEnum_Proxy( 
    IMessengerServices __RPC_FAR * This,
    /* [retval][out] */ IUnknown __RPC_FAR *__RPC_FAR *ppUnknown);


void __RPC_STUB IMessengerServices_get__NewEnum_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IMessengerServices_INTERFACE_DEFINED__ */


#ifndef __IMessengerService_INTERFACE_DEFINED__
#define __IMessengerService_INTERFACE_DEFINED__

/* interface IMessengerService */
/* [object][oleautomation][dual][helpcontext][helpstring][uuid] */ 


EXTERN_C const IID IID_IMessengerService;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("2E50547C-A8AA-4f60-B57E-1F414711007B")
    IMessengerService : public IDispatch
    {
    public:
        virtual /* [helpcontext][helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ServiceName( 
            /* [retval][out] */ BSTR __RPC_FAR *pbstrServiceName) = 0;
        
        virtual /* [helpcontext][helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ServiceID( 
            /* [retval][out] */ BSTR __RPC_FAR *pbstrID) = 0;
        
        virtual /* [helpcontext][helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_MyFriendlyName( 
            /* [retval][out] */ BSTR __RPC_FAR *pbstrName) = 0;
        
        virtual /* [helpcontext][helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_MyStatus( 
            /* [retval][out] */ MISTATUS __RPC_FAR *pmiStatus) = 0;
        
        virtual /* [helpcontext][helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_MySigninName( 
            /* [retval][out] */ BSTR __RPC_FAR *pbstrName) = 0;
        
        virtual /* [helpcontext][helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Property( 
            /* [in] */ MSERVICEPROPERTY ePropType,
            /* [retval][out] */ VARIANT __RPC_FAR *pvPropVal) = 0;
        
        virtual /* [helpcontext][helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_Property( 
            /* [in] */ MSERVICEPROPERTY ePropType,
            /* [in] */ VARIANT vPropVal) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IMessengerServiceVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            IMessengerService __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            IMessengerService __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            IMessengerService __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfoCount )( 
            IMessengerService __RPC_FAR * This,
            /* [out] */ UINT __RPC_FAR *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfo )( 
            IMessengerService __RPC_FAR * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo __RPC_FAR *__RPC_FAR *ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetIDsOfNames )( 
            IMessengerService __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR __RPC_FAR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID __RPC_FAR *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Invoke )( 
            IMessengerService __RPC_FAR * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS __RPC_FAR *pDispParams,
            /* [out] */ VARIANT __RPC_FAR *pVarResult,
            /* [out] */ EXCEPINFO __RPC_FAR *pExcepInfo,
            /* [out] */ UINT __RPC_FAR *puArgErr);
        
        /* [helpcontext][helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_ServiceName )( 
            IMessengerService __RPC_FAR * This,
            /* [retval][out] */ BSTR __RPC_FAR *pbstrServiceName);
        
        /* [helpcontext][helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_ServiceID )( 
            IMessengerService __RPC_FAR * This,
            /* [retval][out] */ BSTR __RPC_FAR *pbstrID);
        
        /* [helpcontext][helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_MyFriendlyName )( 
            IMessengerService __RPC_FAR * This,
            /* [retval][out] */ BSTR __RPC_FAR *pbstrName);
        
        /* [helpcontext][helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_MyStatus )( 
            IMessengerService __RPC_FAR * This,
            /* [retval][out] */ MISTATUS __RPC_FAR *pmiStatus);
        
        /* [helpcontext][helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_MySigninName )( 
            IMessengerService __RPC_FAR * This,
            /* [retval][out] */ BSTR __RPC_FAR *pbstrName);
        
        /* [helpcontext][helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Property )( 
            IMessengerService __RPC_FAR * This,
            /* [in] */ MSERVICEPROPERTY ePropType,
            /* [retval][out] */ VARIANT __RPC_FAR *pvPropVal);
        
        /* [helpcontext][helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_Property )( 
            IMessengerService __RPC_FAR * This,
            /* [in] */ MSERVICEPROPERTY ePropType,
            /* [in] */ VARIANT vPropVal);
        
        END_INTERFACE
    } IMessengerServiceVtbl;

    interface IMessengerService
    {
        CONST_VTBL struct IMessengerServiceVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IMessengerService_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IMessengerService_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IMessengerService_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IMessengerService_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define IMessengerService_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define IMessengerService_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define IMessengerService_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define IMessengerService_get_ServiceName(This,pbstrServiceName)	\
    (This)->lpVtbl -> get_ServiceName(This,pbstrServiceName)

#define IMessengerService_get_ServiceID(This,pbstrID)	\
    (This)->lpVtbl -> get_ServiceID(This,pbstrID)

#define IMessengerService_get_MyFriendlyName(This,pbstrName)	\
    (This)->lpVtbl -> get_MyFriendlyName(This,pbstrName)

#define IMessengerService_get_MyStatus(This,pmiStatus)	\
    (This)->lpVtbl -> get_MyStatus(This,pmiStatus)

#define IMessengerService_get_MySigninName(This,pbstrName)	\
    (This)->lpVtbl -> get_MySigninName(This,pbstrName)

#define IMessengerService_get_Property(This,ePropType,pvPropVal)	\
    (This)->lpVtbl -> get_Property(This,ePropType,pvPropVal)

#define IMessengerService_put_Property(This,ePropType,vPropVal)	\
    (This)->lpVtbl -> put_Property(This,ePropType,vPropVal)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpcontext][helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE IMessengerService_get_ServiceName_Proxy( 
    IMessengerService __RPC_FAR * This,
    /* [retval][out] */ BSTR __RPC_FAR *pbstrServiceName);


void __RPC_STUB IMessengerService_get_ServiceName_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpcontext][helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE IMessengerService_get_ServiceID_Proxy( 
    IMessengerService __RPC_FAR * This,
    /* [retval][out] */ BSTR __RPC_FAR *pbstrID);


void __RPC_STUB IMessengerService_get_ServiceID_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpcontext][helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE IMessengerService_get_MyFriendlyName_Proxy( 
    IMessengerService __RPC_FAR * This,
    /* [retval][out] */ BSTR __RPC_FAR *pbstrName);


void __RPC_STUB IMessengerService_get_MyFriendlyName_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpcontext][helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE IMessengerService_get_MyStatus_Proxy( 
    IMessengerService __RPC_FAR * This,
    /* [retval][out] */ MISTATUS __RPC_FAR *pmiStatus);


void __RPC_STUB IMessengerService_get_MyStatus_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpcontext][helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE IMessengerService_get_MySigninName_Proxy( 
    IMessengerService __RPC_FAR * This,
    /* [retval][out] */ BSTR __RPC_FAR *pbstrName);


void __RPC_STUB IMessengerService_get_MySigninName_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpcontext][helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE IMessengerService_get_Property_Proxy( 
    IMessengerService __RPC_FAR * This,
    /* [in] */ MSERVICEPROPERTY ePropType,
    /* [retval][out] */ VARIANT __RPC_FAR *pvPropVal);


void __RPC_STUB IMessengerService_get_Property_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpcontext][helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE IMessengerService_put_Property_Proxy( 
    IMessengerService __RPC_FAR * This,
    /* [in] */ MSERVICEPROPERTY ePropType,
    /* [in] */ VARIANT vPropVal);


void __RPC_STUB IMessengerService_put_Property_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IMessengerService_INTERFACE_DEFINED__ */


#ifndef __IMessengerGroups_INTERFACE_DEFINED__
#define __IMessengerGroups_INTERFACE_DEFINED__

/* interface IMessengerGroups */
/* [object][oleautomation][dual][helpstring][uuid] */ 


EXTERN_C const IID IID_IMessengerGroups;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("E1AF1028-B884-44cb-A535-1C3C11A3D1DB")
    IMessengerGroups : public IDispatch
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Remove( 
            /* [in] */ IDispatch __RPC_FAR *pGroup) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Count( 
            /* [retval][out] */ LONG __RPC_FAR *pcCount) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Item( 
            /* [in] */ LONG Index,
            /* [retval][out] */ IDispatch __RPC_FAR *__RPC_FAR *ppMGroup) = 0;
        
        virtual /* [helpstring][restricted][propget][id] */ HRESULT STDMETHODCALLTYPE get__NewEnum( 
            /* [retval][out] */ IUnknown __RPC_FAR *__RPC_FAR *ppUnknown) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IMessengerGroupsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            IMessengerGroups __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            IMessengerGroups __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            IMessengerGroups __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfoCount )( 
            IMessengerGroups __RPC_FAR * This,
            /* [out] */ UINT __RPC_FAR *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfo )( 
            IMessengerGroups __RPC_FAR * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo __RPC_FAR *__RPC_FAR *ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetIDsOfNames )( 
            IMessengerGroups __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR __RPC_FAR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID __RPC_FAR *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Invoke )( 
            IMessengerGroups __RPC_FAR * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS __RPC_FAR *pDispParams,
            /* [out] */ VARIANT __RPC_FAR *pVarResult,
            /* [out] */ EXCEPINFO __RPC_FAR *pExcepInfo,
            /* [out] */ UINT __RPC_FAR *puArgErr);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Remove )( 
            IMessengerGroups __RPC_FAR * This,
            /* [in] */ IDispatch __RPC_FAR *pGroup);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Count )( 
            IMessengerGroups __RPC_FAR * This,
            /* [retval][out] */ LONG __RPC_FAR *pcCount);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Item )( 
            IMessengerGroups __RPC_FAR * This,
            /* [in] */ LONG Index,
            /* [retval][out] */ IDispatch __RPC_FAR *__RPC_FAR *ppMGroup);
        
        /* [helpstring][restricted][propget][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get__NewEnum )( 
            IMessengerGroups __RPC_FAR * This,
            /* [retval][out] */ IUnknown __RPC_FAR *__RPC_FAR *ppUnknown);
        
        END_INTERFACE
    } IMessengerGroupsVtbl;

    interface IMessengerGroups
    {
        CONST_VTBL struct IMessengerGroupsVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IMessengerGroups_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IMessengerGroups_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IMessengerGroups_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IMessengerGroups_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define IMessengerGroups_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define IMessengerGroups_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define IMessengerGroups_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define IMessengerGroups_Remove(This,pGroup)	\
    (This)->lpVtbl -> Remove(This,pGroup)

#define IMessengerGroups_get_Count(This,pcCount)	\
    (This)->lpVtbl -> get_Count(This,pcCount)

#define IMessengerGroups_Item(This,Index,ppMGroup)	\
    (This)->lpVtbl -> Item(This,Index,ppMGroup)

#define IMessengerGroups_get__NewEnum(This,ppUnknown)	\
    (This)->lpVtbl -> get__NewEnum(This,ppUnknown)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IMessengerGroups_Remove_Proxy( 
    IMessengerGroups __RPC_FAR * This,
    /* [in] */ IDispatch __RPC_FAR *pGroup);


void __RPC_STUB IMessengerGroups_Remove_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE IMessengerGroups_get_Count_Proxy( 
    IMessengerGroups __RPC_FAR * This,
    /* [retval][out] */ LONG __RPC_FAR *pcCount);


void __RPC_STUB IMessengerGroups_get_Count_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IMessengerGroups_Item_Proxy( 
    IMessengerGroups __RPC_FAR * This,
    /* [in] */ LONG Index,
    /* [retval][out] */ IDispatch __RPC_FAR *__RPC_FAR *ppMGroup);


void __RPC_STUB IMessengerGroups_Item_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][restricted][propget][id] */ HRESULT STDMETHODCALLTYPE IMessengerGroups_get__NewEnum_Proxy( 
    IMessengerGroups __RPC_FAR * This,
    /* [retval][out] */ IUnknown __RPC_FAR *__RPC_FAR *ppUnknown);


void __RPC_STUB IMessengerGroups_get__NewEnum_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IMessengerGroups_INTERFACE_DEFINED__ */


#ifndef __IMessengerGroup_INTERFACE_DEFINED__
#define __IMessengerGroup_INTERFACE_DEFINED__

/* interface IMessengerGroup */
/* [object][oleautomation][dual][helpstring][uuid] */ 


EXTERN_C const IID IID_IMessengerGroup;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("E1AF1038-B884-44cb-A535-1C3C11A3D1DB")
    IMessengerGroup : public IDispatch
    {
    public:
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Contacts( 
            /* [retval][out] */ IDispatch __RPC_FAR *__RPC_FAR *ppMContacts) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Name( 
            /* [retval][out] */ BSTR __RPC_FAR *bstrName) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_Name( 
            /* [in] */ BSTR bstrName) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE AddContact( 
            /* [in] */ VARIANT vContact) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE RemoveContact( 
            /* [in] */ VARIANT vContact) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Service( 
            /* [retval][out] */ IDispatch __RPC_FAR *__RPC_FAR *pService) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IMessengerGroupVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            IMessengerGroup __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            IMessengerGroup __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            IMessengerGroup __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfoCount )( 
            IMessengerGroup __RPC_FAR * This,
            /* [out] */ UINT __RPC_FAR *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfo )( 
            IMessengerGroup __RPC_FAR * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo __RPC_FAR *__RPC_FAR *ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetIDsOfNames )( 
            IMessengerGroup __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR __RPC_FAR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID __RPC_FAR *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Invoke )( 
            IMessengerGroup __RPC_FAR * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS __RPC_FAR *pDispParams,
            /* [out] */ VARIANT __RPC_FAR *pVarResult,
            /* [out] */ EXCEPINFO __RPC_FAR *pExcepInfo,
            /* [out] */ UINT __RPC_FAR *puArgErr);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Contacts )( 
            IMessengerGroup __RPC_FAR * This,
            /* [retval][out] */ IDispatch __RPC_FAR *__RPC_FAR *ppMContacts);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Name )( 
            IMessengerGroup __RPC_FAR * This,
            /* [retval][out] */ BSTR __RPC_FAR *bstrName);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_Name )( 
            IMessengerGroup __RPC_FAR * This,
            /* [in] */ BSTR bstrName);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *AddContact )( 
            IMessengerGroup __RPC_FAR * This,
            /* [in] */ VARIANT vContact);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *RemoveContact )( 
            IMessengerGroup __RPC_FAR * This,
            /* [in] */ VARIANT vContact);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Service )( 
            IMessengerGroup __RPC_FAR * This,
            /* [retval][out] */ IDispatch __RPC_FAR *__RPC_FAR *pService);
        
        END_INTERFACE
    } IMessengerGroupVtbl;

    interface IMessengerGroup
    {
        CONST_VTBL struct IMessengerGroupVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IMessengerGroup_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IMessengerGroup_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IMessengerGroup_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IMessengerGroup_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define IMessengerGroup_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define IMessengerGroup_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define IMessengerGroup_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define IMessengerGroup_get_Contacts(This,ppMContacts)	\
    (This)->lpVtbl -> get_Contacts(This,ppMContacts)

#define IMessengerGroup_get_Name(This,bstrName)	\
    (This)->lpVtbl -> get_Name(This,bstrName)

#define IMessengerGroup_put_Name(This,bstrName)	\
    (This)->lpVtbl -> put_Name(This,bstrName)

#define IMessengerGroup_AddContact(This,vContact)	\
    (This)->lpVtbl -> AddContact(This,vContact)

#define IMessengerGroup_RemoveContact(This,vContact)	\
    (This)->lpVtbl -> RemoveContact(This,vContact)

#define IMessengerGroup_get_Service(This,pService)	\
    (This)->lpVtbl -> get_Service(This,pService)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE IMessengerGroup_get_Contacts_Proxy( 
    IMessengerGroup __RPC_FAR * This,
    /* [retval][out] */ IDispatch __RPC_FAR *__RPC_FAR *ppMContacts);


void __RPC_STUB IMessengerGroup_get_Contacts_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE IMessengerGroup_get_Name_Proxy( 
    IMessengerGroup __RPC_FAR * This,
    /* [retval][out] */ BSTR __RPC_FAR *bstrName);


void __RPC_STUB IMessengerGroup_get_Name_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE IMessengerGroup_put_Name_Proxy( 
    IMessengerGroup __RPC_FAR * This,
    /* [in] */ BSTR bstrName);


void __RPC_STUB IMessengerGroup_put_Name_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IMessengerGroup_AddContact_Proxy( 
    IMessengerGroup __RPC_FAR * This,
    /* [in] */ VARIANT vContact);


void __RPC_STUB IMessengerGroup_AddContact_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IMessengerGroup_RemoveContact_Proxy( 
    IMessengerGroup __RPC_FAR * This,
    /* [in] */ VARIANT vContact);


void __RPC_STUB IMessengerGroup_RemoveContact_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE IMessengerGroup_get_Service_Proxy( 
    IMessengerGroup __RPC_FAR * This,
    /* [retval][out] */ IDispatch __RPC_FAR *__RPC_FAR *pService);


void __RPC_STUB IMessengerGroup_get_Service_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IMessengerGroup_INTERFACE_DEFINED__ */



#ifndef __MessengerAPI_LIBRARY_DEFINED__
#define __MessengerAPI_LIBRARY_DEFINED__

/* library MessengerAPI */
/* [helpstring][version][uuid] */ 



EXTERN_C const IID LIBID_MessengerAPI;

#ifndef __DMessengerEvents_DISPINTERFACE_DEFINED__
#define __DMessengerEvents_DISPINTERFACE_DEFINED__

/* dispinterface DMessengerEvents */
/* [hidden][helpstring][uuid] */ 


EXTERN_C const IID DIID_DMessengerEvents;

#if defined(__cplusplus) && !defined(CINTERFACE)

    MIDL_INTERFACE("C9A6A6B6-9BC1-43a5-B06B-E58874EEBC96")
    DMessengerEvents : public IDispatch
    {
    };
    
#else 	/* C style interface */

    typedef struct DMessengerEventsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            DMessengerEvents __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            DMessengerEvents __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            DMessengerEvents __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfoCount )( 
            DMessengerEvents __RPC_FAR * This,
            /* [out] */ UINT __RPC_FAR *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfo )( 
            DMessengerEvents __RPC_FAR * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo __RPC_FAR *__RPC_FAR *ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetIDsOfNames )( 
            DMessengerEvents __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR __RPC_FAR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID __RPC_FAR *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Invoke )( 
            DMessengerEvents __RPC_FAR * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS __RPC_FAR *pDispParams,
            /* [out] */ VARIANT __RPC_FAR *pVarResult,
            /* [out] */ EXCEPINFO __RPC_FAR *pExcepInfo,
            /* [out] */ UINT __RPC_FAR *puArgErr);
        
        END_INTERFACE
    } DMessengerEventsVtbl;

    interface DMessengerEvents
    {
        CONST_VTBL struct DMessengerEventsVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define DMessengerEvents_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define DMessengerEvents_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define DMessengerEvents_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define DMessengerEvents_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define DMessengerEvents_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define DMessengerEvents_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define DMessengerEvents_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)

#endif /* COBJMACROS */


#endif 	/* C style interface */


#endif 	/* __DMessengerEvents_DISPINTERFACE_DEFINED__ */


EXTERN_C const CLSID CLSID_Messenger;

#ifdef __cplusplus

class DECLSPEC_UUID("B69003B3-C55E-4b48-836C-BC5946FC3B28")
Messenger;
#endif
#endif /* __MessengerAPI_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

unsigned long             __RPC_USER  BSTR_UserSize(     unsigned long __RPC_FAR *, unsigned long            , BSTR __RPC_FAR * ); 
unsigned char __RPC_FAR * __RPC_USER  BSTR_UserMarshal(  unsigned long __RPC_FAR *, unsigned char __RPC_FAR *, BSTR __RPC_FAR * ); 
unsigned char __RPC_FAR * __RPC_USER  BSTR_UserUnmarshal(unsigned long __RPC_FAR *, unsigned char __RPC_FAR *, BSTR __RPC_FAR * ); 
void                      __RPC_USER  BSTR_UserFree(     unsigned long __RPC_FAR *, BSTR __RPC_FAR * ); 

unsigned long             __RPC_USER  VARIANT_UserSize(     unsigned long __RPC_FAR *, unsigned long            , VARIANT __RPC_FAR * ); 
unsigned char __RPC_FAR * __RPC_USER  VARIANT_UserMarshal(  unsigned long __RPC_FAR *, unsigned char __RPC_FAR *, VARIANT __RPC_FAR * ); 
unsigned char __RPC_FAR * __RPC_USER  VARIANT_UserUnmarshal(unsigned long __RPC_FAR *, unsigned char __RPC_FAR *, VARIANT __RPC_FAR * ); 
void                      __RPC_USER  VARIANT_UserFree(     unsigned long __RPC_FAR *, VARIANT __RPC_FAR * ); 

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


