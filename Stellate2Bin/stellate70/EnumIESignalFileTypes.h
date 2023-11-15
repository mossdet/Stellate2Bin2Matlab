

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 6.00.0366 */
/* at Tue May 18 13:59:28 2010
 */
/* Compiler settings for g:\Develop\Harm700\MLSample\ComSignalFile\SignalFile\EnumIESignalFileTypes.idl:
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

#ifndef __EnumIESignalFileTypes_h__
#define __EnumIESignalFileTypes_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __IEnumIESignalFileTypes_FWD_DEFINED__
#define __IEnumIESignalFileTypes_FWD_DEFINED__
typedef interface IEnumIESignalFileTypes IEnumIESignalFileTypes;
#endif 	/* __IEnumIESignalFileTypes_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"
#include "SignalFileDef.h"

#ifdef __cplusplus
extern "C"{
#endif 

void * __RPC_USER MIDL_user_allocate(size_t);
void __RPC_USER MIDL_user_free( void * ); 

#ifndef __IEnumIESignalFileTypes_INTERFACE_DEFINED__
#define __IEnumIESignalFileTypes_INTERFACE_DEFINED__

/* interface IEnumIESignalFileTypes */
/* [unique][nonextensible][dual][helpstring][version][uuid][object] */ 


EXTERN_C const IID IID_IEnumIESignalFileTypes;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("A0BF55F1-E97E-11D1-BB8F-00001B4E6868")
    IEnumIESignalFileTypes : public IDispatch
    {
    public:
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Init( 
            /* [in] */ BSTR bstrServerName) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Next( 
            /* [out] */ BSTR *pbstrTypeName,
            /* [out] */ BSTR *pbstrFilters,
            /* [out] */ LONG *plFlags,
            /* [defaultvalue][retval][out] */ BOOL *pbIsNotEnd = 0) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Skip( 
            /* [defaultvalue][retval][out] */ BOOL *pbIsNotEnd = 0) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Reset( void) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Clone( 
            /* [retval][out] */ IEnumIESignalFileTypes **ppEnum) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IEnumIESignalFileTypesVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IEnumIESignalFileTypes * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IEnumIESignalFileTypes * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IEnumIESignalFileTypes * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IEnumIESignalFileTypes * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IEnumIESignalFileTypes * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IEnumIESignalFileTypes * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IEnumIESignalFileTypes * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Init )( 
            IEnumIESignalFileTypes * This,
            /* [in] */ BSTR bstrServerName);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Next )( 
            IEnumIESignalFileTypes * This,
            /* [out] */ BSTR *pbstrTypeName,
            /* [out] */ BSTR *pbstrFilters,
            /* [out] */ LONG *plFlags,
            /* [defaultvalue][retval][out] */ BOOL *pbIsNotEnd);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Skip )( 
            IEnumIESignalFileTypes * This,
            /* [defaultvalue][retval][out] */ BOOL *pbIsNotEnd);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Reset )( 
            IEnumIESignalFileTypes * This);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Clone )( 
            IEnumIESignalFileTypes * This,
            /* [retval][out] */ IEnumIESignalFileTypes **ppEnum);
        
        END_INTERFACE
    } IEnumIESignalFileTypesVtbl;

    interface IEnumIESignalFileTypes
    {
        CONST_VTBL struct IEnumIESignalFileTypesVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IEnumIESignalFileTypes_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IEnumIESignalFileTypes_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IEnumIESignalFileTypes_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IEnumIESignalFileTypes_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define IEnumIESignalFileTypes_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define IEnumIESignalFileTypes_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define IEnumIESignalFileTypes_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define IEnumIESignalFileTypes_Init(This,bstrServerName)	\
    (This)->lpVtbl -> Init(This,bstrServerName)

#define IEnumIESignalFileTypes_Next(This,pbstrTypeName,pbstrFilters,plFlags,pbIsNotEnd)	\
    (This)->lpVtbl -> Next(This,pbstrTypeName,pbstrFilters,plFlags,pbIsNotEnd)

#define IEnumIESignalFileTypes_Skip(This,pbIsNotEnd)	\
    (This)->lpVtbl -> Skip(This,pbIsNotEnd)

#define IEnumIESignalFileTypes_Reset(This)	\
    (This)->lpVtbl -> Reset(This)

#define IEnumIESignalFileTypes_Clone(This,ppEnum)	\
    (This)->lpVtbl -> Clone(This,ppEnum)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring] */ HRESULT STDMETHODCALLTYPE IEnumIESignalFileTypes_Init_Proxy( 
    IEnumIESignalFileTypes * This,
    /* [in] */ BSTR bstrServerName);


void __RPC_STUB IEnumIESignalFileTypes_Init_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IEnumIESignalFileTypes_Next_Proxy( 
    IEnumIESignalFileTypes * This,
    /* [out] */ BSTR *pbstrTypeName,
    /* [out] */ BSTR *pbstrFilters,
    /* [out] */ LONG *plFlags,
    /* [defaultvalue][retval][out] */ BOOL *pbIsNotEnd);


void __RPC_STUB IEnumIESignalFileTypes_Next_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IEnumIESignalFileTypes_Skip_Proxy( 
    IEnumIESignalFileTypes * This,
    /* [defaultvalue][retval][out] */ BOOL *pbIsNotEnd);


void __RPC_STUB IEnumIESignalFileTypes_Skip_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IEnumIESignalFileTypes_Reset_Proxy( 
    IEnumIESignalFileTypes * This);


void __RPC_STUB IEnumIESignalFileTypes_Reset_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IEnumIESignalFileTypes_Clone_Proxy( 
    IEnumIESignalFileTypes * This,
    /* [retval][out] */ IEnumIESignalFileTypes **ppEnum);


void __RPC_STUB IEnumIESignalFileTypes_Clone_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IEnumIESignalFileTypes_INTERFACE_DEFINED__ */


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


