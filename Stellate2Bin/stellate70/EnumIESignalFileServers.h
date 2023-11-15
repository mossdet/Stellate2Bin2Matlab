

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 6.00.0366 */
/* at Tue May 18 13:59:32 2010
 */
/* Compiler settings for g:\Develop\Harm700\MLSample\ComSignalFile\SignalFile\EnumIESignalFileServers.idl:
    Oicf, W1, Zp8, env=Win32 (32b run)
    protocol : dce , ms_ext, c_ext, robust
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
//@@MIDL_FILE_HEADING(  )

#pragma warning( disable: 4049 )  /* more than 64k source lines */


/* verify that the <rpcndr.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 475
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

#ifndef __EnumIESignalFileServers_h__
#define __EnumIESignalFileServers_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __IEnumIESignalFileServers_FWD_DEFINED__
#define __IEnumIESignalFileServers_FWD_DEFINED__
typedef interface IEnumIESignalFileServers IEnumIESignalFileServers;
#endif 	/* __IEnumIESignalFileServers_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"
#include "SignalFileDef.h"

#ifdef __cplusplus
extern "C"{
#endif 

void * __RPC_USER MIDL_user_allocate(size_t);
void __RPC_USER MIDL_user_free( void * ); 

#ifndef __IEnumIESignalFileServers_INTERFACE_DEFINED__
#define __IEnumIESignalFileServers_INTERFACE_DEFINED__

/* interface IEnumIESignalFileServers */
/* [unique][nonextensible][dual][helpstring][version][uuid][object] */ 


EXTERN_C const IID IID_IEnumIESignalFileServers;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("A0BF55EF-E97E-11D1-BB8F-00001B4E6868")
    IEnumIESignalFileServers : public IDispatch
    {
    public:
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Init( void) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Next( 
            /* [out] */ BSTR *pbstrName,
            /* [out] */ BSTR *pbstrClsId,
            /* [defaultvalue][retval][out] */ BOOL *pbIsNotEnd = 0) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Skip( 
            /* [defaultvalue][retval][out] */ BOOL *pbIsNotEnd = 0) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Reset( void) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Clone( 
            /* [retval][out] */ IEnumIESignalFileServers **ppEnum) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IEnumIESignalFileServersVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IEnumIESignalFileServers * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IEnumIESignalFileServers * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IEnumIESignalFileServers * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IEnumIESignalFileServers * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IEnumIESignalFileServers * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IEnumIESignalFileServers * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IEnumIESignalFileServers * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Init )( 
            IEnumIESignalFileServers * This);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Next )( 
            IEnumIESignalFileServers * This,
            /* [out] */ BSTR *pbstrName,
            /* [out] */ BSTR *pbstrClsId,
            /* [defaultvalue][retval][out] */ BOOL *pbIsNotEnd);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Skip )( 
            IEnumIESignalFileServers * This,
            /* [defaultvalue][retval][out] */ BOOL *pbIsNotEnd);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Reset )( 
            IEnumIESignalFileServers * This);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Clone )( 
            IEnumIESignalFileServers * This,
            /* [retval][out] */ IEnumIESignalFileServers **ppEnum);
        
        END_INTERFACE
    } IEnumIESignalFileServersVtbl;

    interface IEnumIESignalFileServers
    {
        CONST_VTBL struct IEnumIESignalFileServersVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IEnumIESignalFileServers_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IEnumIESignalFileServers_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IEnumIESignalFileServers_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IEnumIESignalFileServers_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define IEnumIESignalFileServers_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define IEnumIESignalFileServers_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define IEnumIESignalFileServers_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define IEnumIESignalFileServers_Init(This)	\
    (This)->lpVtbl -> Init(This)

#define IEnumIESignalFileServers_Next(This,pbstrName,pbstrClsId,pbIsNotEnd)	\
    (This)->lpVtbl -> Next(This,pbstrName,pbstrClsId,pbIsNotEnd)

#define IEnumIESignalFileServers_Skip(This,pbIsNotEnd)	\
    (This)->lpVtbl -> Skip(This,pbIsNotEnd)

#define IEnumIESignalFileServers_Reset(This)	\
    (This)->lpVtbl -> Reset(This)

#define IEnumIESignalFileServers_Clone(This,ppEnum)	\
    (This)->lpVtbl -> Clone(This,ppEnum)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring] */ HRESULT STDMETHODCALLTYPE IEnumIESignalFileServers_Init_Proxy( 
    IEnumIESignalFileServers * This);


void __RPC_STUB IEnumIESignalFileServers_Init_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IEnumIESignalFileServers_Next_Proxy( 
    IEnumIESignalFileServers * This,
    /* [out] */ BSTR *pbstrName,
    /* [out] */ BSTR *pbstrClsId,
    /* [defaultvalue][retval][out] */ BOOL *pbIsNotEnd);


void __RPC_STUB IEnumIESignalFileServers_Next_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IEnumIESignalFileServers_Skip_Proxy( 
    IEnumIESignalFileServers * This,
    /* [defaultvalue][retval][out] */ BOOL *pbIsNotEnd);


void __RPC_STUB IEnumIESignalFileServers_Skip_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IEnumIESignalFileServers_Reset_Proxy( 
    IEnumIESignalFileServers * This);


void __RPC_STUB IEnumIESignalFileServers_Reset_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IEnumIESignalFileServers_Clone_Proxy( 
    IEnumIESignalFileServers * This,
    /* [retval][out] */ IEnumIESignalFileServers **ppEnum);


void __RPC_STUB IEnumIESignalFileServers_Clone_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IEnumIESignalFileServers_INTERFACE_DEFINED__ */


/* Additional Prototypes for ALL interfaces */

unsigned long             __RPC_USER  BSTR_UserSize(     unsigned long *, unsigned long            , BSTR * ); 
unsigned char * __RPC_USER  BSTR_UserMarshal(  unsigned long *, unsigned char *, BSTR * ); 
unsigned char * __RPC_USER  BSTR_UserUnmarshal(unsigned long *, unsigned char *, BSTR * ); 
void                      __RPC_USER  BSTR_UserFree(     unsigned long *, BSTR * ); 

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


