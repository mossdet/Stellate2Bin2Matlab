

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 6.00.0366 */
/* at Tue May 18 13:59:16 2010
 */
/* Compiler settings for g:\Develop\Harm700\MLSample\ComSignalFile\SignalFile\FileInfo.idl:
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

#ifndef __FileInfo_h__
#define __FileInfo_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __IFileInfo_FWD_DEFINED__
#define __IFileInfo_FWD_DEFINED__
typedef interface IFileInfo IFileInfo;
#endif 	/* __IFileInfo_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"
#include "SignalFileDef.h"

#ifdef __cplusplus
extern "C"{
#endif 

void * __RPC_USER MIDL_user_allocate(size_t);
void __RPC_USER MIDL_user_free( void * ); 

#ifndef __IFileInfo_INTERFACE_DEFINED__
#define __IFileInfo_INTERFACE_DEFINED__

/* interface IFileInfo */
/* [unique][nonextensible][dual][helpstring][version][uuid][object] */ 


EXTERN_C const IID IID_IFileInfo;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("B78DE83D-ABE7-4688-B03B-AD0A28FB04AA")
    IFileInfo : public IDispatch
    {
    public:
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SetDescription( 
            /* [in] */ BSTR bstrDesc) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetDescription( 
            /* [retval][out] */ BSTR *pbstrDesc) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SetInstitution( 
            /* [in] */ BSTR bstrInst) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetInstitution( 
            /* [retval][out] */ BSTR *pbstrInst) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SetCreationDate( 
            /* [in] */ DATE dateCreation) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetCreationDate( 
            /* [retval][out] */ DATE *pdateCreation) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetCreatedBy( 
            /* [retval][out] */ BSTR *pbstrCreatedBy) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetLastModifiedBy( 
            /* [retval][out] */ BSTR *pbstrLastModifiedBy) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetLastSavedId( 
            /* [retval][out] */ BSTR *pbstrLastSavedId) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Init( 
            /* [in] */ IFileInfo *pFileInfo) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Reset( void) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IFileInfoVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IFileInfo * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IFileInfo * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IFileInfo * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IFileInfo * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IFileInfo * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IFileInfo * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IFileInfo * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetDescription )( 
            IFileInfo * This,
            /* [in] */ BSTR bstrDesc);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetDescription )( 
            IFileInfo * This,
            /* [retval][out] */ BSTR *pbstrDesc);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetInstitution )( 
            IFileInfo * This,
            /* [in] */ BSTR bstrInst);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetInstitution )( 
            IFileInfo * This,
            /* [retval][out] */ BSTR *pbstrInst);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetCreationDate )( 
            IFileInfo * This,
            /* [in] */ DATE dateCreation);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetCreationDate )( 
            IFileInfo * This,
            /* [retval][out] */ DATE *pdateCreation);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetCreatedBy )( 
            IFileInfo * This,
            /* [retval][out] */ BSTR *pbstrCreatedBy);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetLastModifiedBy )( 
            IFileInfo * This,
            /* [retval][out] */ BSTR *pbstrLastModifiedBy);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetLastSavedId )( 
            IFileInfo * This,
            /* [retval][out] */ BSTR *pbstrLastSavedId);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Init )( 
            IFileInfo * This,
            /* [in] */ IFileInfo *pFileInfo);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Reset )( 
            IFileInfo * This);
        
        END_INTERFACE
    } IFileInfoVtbl;

    interface IFileInfo
    {
        CONST_VTBL struct IFileInfoVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IFileInfo_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IFileInfo_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IFileInfo_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IFileInfo_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define IFileInfo_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define IFileInfo_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define IFileInfo_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define IFileInfo_SetDescription(This,bstrDesc)	\
    (This)->lpVtbl -> SetDescription(This,bstrDesc)

#define IFileInfo_GetDescription(This,pbstrDesc)	\
    (This)->lpVtbl -> GetDescription(This,pbstrDesc)

#define IFileInfo_SetInstitution(This,bstrInst)	\
    (This)->lpVtbl -> SetInstitution(This,bstrInst)

#define IFileInfo_GetInstitution(This,pbstrInst)	\
    (This)->lpVtbl -> GetInstitution(This,pbstrInst)

#define IFileInfo_SetCreationDate(This,dateCreation)	\
    (This)->lpVtbl -> SetCreationDate(This,dateCreation)

#define IFileInfo_GetCreationDate(This,pdateCreation)	\
    (This)->lpVtbl -> GetCreationDate(This,pdateCreation)

#define IFileInfo_GetCreatedBy(This,pbstrCreatedBy)	\
    (This)->lpVtbl -> GetCreatedBy(This,pbstrCreatedBy)

#define IFileInfo_GetLastModifiedBy(This,pbstrLastModifiedBy)	\
    (This)->lpVtbl -> GetLastModifiedBy(This,pbstrLastModifiedBy)

#define IFileInfo_GetLastSavedId(This,pbstrLastSavedId)	\
    (This)->lpVtbl -> GetLastSavedId(This,pbstrLastSavedId)

#define IFileInfo_Init(This,pFileInfo)	\
    (This)->lpVtbl -> Init(This,pFileInfo)

#define IFileInfo_Reset(This)	\
    (This)->lpVtbl -> Reset(This)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring] */ HRESULT STDMETHODCALLTYPE IFileInfo_SetDescription_Proxy( 
    IFileInfo * This,
    /* [in] */ BSTR bstrDesc);


void __RPC_STUB IFileInfo_SetDescription_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IFileInfo_GetDescription_Proxy( 
    IFileInfo * This,
    /* [retval][out] */ BSTR *pbstrDesc);


void __RPC_STUB IFileInfo_GetDescription_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IFileInfo_SetInstitution_Proxy( 
    IFileInfo * This,
    /* [in] */ BSTR bstrInst);


void __RPC_STUB IFileInfo_SetInstitution_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IFileInfo_GetInstitution_Proxy( 
    IFileInfo * This,
    /* [retval][out] */ BSTR *pbstrInst);


void __RPC_STUB IFileInfo_GetInstitution_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IFileInfo_SetCreationDate_Proxy( 
    IFileInfo * This,
    /* [in] */ DATE dateCreation);


void __RPC_STUB IFileInfo_SetCreationDate_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IFileInfo_GetCreationDate_Proxy( 
    IFileInfo * This,
    /* [retval][out] */ DATE *pdateCreation);


void __RPC_STUB IFileInfo_GetCreationDate_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IFileInfo_GetCreatedBy_Proxy( 
    IFileInfo * This,
    /* [retval][out] */ BSTR *pbstrCreatedBy);


void __RPC_STUB IFileInfo_GetCreatedBy_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IFileInfo_GetLastModifiedBy_Proxy( 
    IFileInfo * This,
    /* [retval][out] */ BSTR *pbstrLastModifiedBy);


void __RPC_STUB IFileInfo_GetLastModifiedBy_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IFileInfo_GetLastSavedId_Proxy( 
    IFileInfo * This,
    /* [retval][out] */ BSTR *pbstrLastSavedId);


void __RPC_STUB IFileInfo_GetLastSavedId_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IFileInfo_Init_Proxy( 
    IFileInfo * This,
    /* [in] */ IFileInfo *pFileInfo);


void __RPC_STUB IFileInfo_Init_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IFileInfo_Reset_Proxy( 
    IFileInfo * This);


void __RPC_STUB IFileInfo_Reset_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IFileInfo_INTERFACE_DEFINED__ */


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


