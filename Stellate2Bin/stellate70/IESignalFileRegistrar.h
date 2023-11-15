

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 6.00.0366 */
/* at Tue May 18 13:58:58 2010
 */
/* Compiler settings for g:\Develop\Harm700\MLSample\ComSignalFile\SignalFile\IESignalFileRegistrar.idl:
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

#ifndef __IESignalFileRegistrar_h__
#define __IESignalFileRegistrar_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __IIESignalFileRegistrar_FWD_DEFINED__
#define __IIESignalFileRegistrar_FWD_DEFINED__
typedef interface IIESignalFileRegistrar IIESignalFileRegistrar;
#endif 	/* __IIESignalFileRegistrar_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"
#include "SignalFileDef.h"
#include "IESignalFile.h"
#include "EnumIESignalFileServers.h"
#include "EnumIESignalFileTypes.h"

#ifdef __cplusplus
extern "C"{
#endif 

void * __RPC_USER MIDL_user_allocate(size_t);
void __RPC_USER MIDL_user_free( void * ); 

#ifndef __IIESignalFileRegistrar_INTERFACE_DEFINED__
#define __IIESignalFileRegistrar_INTERFACE_DEFINED__

/* interface IIESignalFileRegistrar */
/* [unique][nonextensible][dual][helpstring][version][uuid][object] */ 


EXTERN_C const IID IID_IIESignalFileRegistrar;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("A0BF55EC-E97E-11D1-BB8F-00001B4E6868")
    IIESignalFileRegistrar : public IDispatch
    {
    public:
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE FindFileServer( 
            /* [in] */ BSTR bstrFile,
            /* [out][in] */ LONG *plFlags,
            /* [retval][out] */ IIESignalFile **ppIESignalFile) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE RegisterFileServer( 
            /* [in] */ BSTR bstrName,
            /* [in] */ BSTR bstrClsId) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE UnregisterFileServer( 
            /* [in] */ BSTR bstrClsId) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE RegisterFileType( 
            /* [in] */ BSTR bstrServerName,
            /* [in] */ BSTR bstrTypeName,
            /* [in] */ BSTR bstrFilters,
            /* [in] */ LONG lFlags) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE UnregisterFileType( 
            /* [in] */ BSTR bstrServerName,
            /* [in] */ BSTR bstrTypeName) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE EnumFileServers( 
            /* [retval][out] */ IEnumIESignalFileServers **ppEnum) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE EnumFileTypes( 
            /* [in] */ BSTR bstrServerName,
            /* [retval][out] */ IEnumIESignalFileTypes **ppEnum) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IIESignalFileRegistrarVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IIESignalFileRegistrar * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IIESignalFileRegistrar * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IIESignalFileRegistrar * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IIESignalFileRegistrar * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IIESignalFileRegistrar * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IIESignalFileRegistrar * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IIESignalFileRegistrar * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *FindFileServer )( 
            IIESignalFileRegistrar * This,
            /* [in] */ BSTR bstrFile,
            /* [out][in] */ LONG *plFlags,
            /* [retval][out] */ IIESignalFile **ppIESignalFile);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *RegisterFileServer )( 
            IIESignalFileRegistrar * This,
            /* [in] */ BSTR bstrName,
            /* [in] */ BSTR bstrClsId);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *UnregisterFileServer )( 
            IIESignalFileRegistrar * This,
            /* [in] */ BSTR bstrClsId);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *RegisterFileType )( 
            IIESignalFileRegistrar * This,
            /* [in] */ BSTR bstrServerName,
            /* [in] */ BSTR bstrTypeName,
            /* [in] */ BSTR bstrFilters,
            /* [in] */ LONG lFlags);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *UnregisterFileType )( 
            IIESignalFileRegistrar * This,
            /* [in] */ BSTR bstrServerName,
            /* [in] */ BSTR bstrTypeName);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *EnumFileServers )( 
            IIESignalFileRegistrar * This,
            /* [retval][out] */ IEnumIESignalFileServers **ppEnum);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *EnumFileTypes )( 
            IIESignalFileRegistrar * This,
            /* [in] */ BSTR bstrServerName,
            /* [retval][out] */ IEnumIESignalFileTypes **ppEnum);
        
        END_INTERFACE
    } IIESignalFileRegistrarVtbl;

    interface IIESignalFileRegistrar
    {
        CONST_VTBL struct IIESignalFileRegistrarVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IIESignalFileRegistrar_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IIESignalFileRegistrar_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IIESignalFileRegistrar_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IIESignalFileRegistrar_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define IIESignalFileRegistrar_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define IIESignalFileRegistrar_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define IIESignalFileRegistrar_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define IIESignalFileRegistrar_FindFileServer(This,bstrFile,plFlags,ppIESignalFile)	\
    (This)->lpVtbl -> FindFileServer(This,bstrFile,plFlags,ppIESignalFile)

#define IIESignalFileRegistrar_RegisterFileServer(This,bstrName,bstrClsId)	\
    (This)->lpVtbl -> RegisterFileServer(This,bstrName,bstrClsId)

#define IIESignalFileRegistrar_UnregisterFileServer(This,bstrClsId)	\
    (This)->lpVtbl -> UnregisterFileServer(This,bstrClsId)

#define IIESignalFileRegistrar_RegisterFileType(This,bstrServerName,bstrTypeName,bstrFilters,lFlags)	\
    (This)->lpVtbl -> RegisterFileType(This,bstrServerName,bstrTypeName,bstrFilters,lFlags)

#define IIESignalFileRegistrar_UnregisterFileType(This,bstrServerName,bstrTypeName)	\
    (This)->lpVtbl -> UnregisterFileType(This,bstrServerName,bstrTypeName)

#define IIESignalFileRegistrar_EnumFileServers(This,ppEnum)	\
    (This)->lpVtbl -> EnumFileServers(This,ppEnum)

#define IIESignalFileRegistrar_EnumFileTypes(This,bstrServerName,ppEnum)	\
    (This)->lpVtbl -> EnumFileTypes(This,bstrServerName,ppEnum)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring] */ HRESULT STDMETHODCALLTYPE IIESignalFileRegistrar_FindFileServer_Proxy( 
    IIESignalFileRegistrar * This,
    /* [in] */ BSTR bstrFile,
    /* [out][in] */ LONG *plFlags,
    /* [retval][out] */ IIESignalFile **ppIESignalFile);


void __RPC_STUB IIESignalFileRegistrar_FindFileServer_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IIESignalFileRegistrar_RegisterFileServer_Proxy( 
    IIESignalFileRegistrar * This,
    /* [in] */ BSTR bstrName,
    /* [in] */ BSTR bstrClsId);


void __RPC_STUB IIESignalFileRegistrar_RegisterFileServer_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IIESignalFileRegistrar_UnregisterFileServer_Proxy( 
    IIESignalFileRegistrar * This,
    /* [in] */ BSTR bstrClsId);


void __RPC_STUB IIESignalFileRegistrar_UnregisterFileServer_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IIESignalFileRegistrar_RegisterFileType_Proxy( 
    IIESignalFileRegistrar * This,
    /* [in] */ BSTR bstrServerName,
    /* [in] */ BSTR bstrTypeName,
    /* [in] */ BSTR bstrFilters,
    /* [in] */ LONG lFlags);


void __RPC_STUB IIESignalFileRegistrar_RegisterFileType_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IIESignalFileRegistrar_UnregisterFileType_Proxy( 
    IIESignalFileRegistrar * This,
    /* [in] */ BSTR bstrServerName,
    /* [in] */ BSTR bstrTypeName);


void __RPC_STUB IIESignalFileRegistrar_UnregisterFileType_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IIESignalFileRegistrar_EnumFileServers_Proxy( 
    IIESignalFileRegistrar * This,
    /* [retval][out] */ IEnumIESignalFileServers **ppEnum);


void __RPC_STUB IIESignalFileRegistrar_EnumFileServers_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IIESignalFileRegistrar_EnumFileTypes_Proxy( 
    IIESignalFileRegistrar * This,
    /* [in] */ BSTR bstrServerName,
    /* [retval][out] */ IEnumIESignalFileTypes **ppEnum);


void __RPC_STUB IIESignalFileRegistrar_EnumFileTypes_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IIESignalFileRegistrar_INTERFACE_DEFINED__ */


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


