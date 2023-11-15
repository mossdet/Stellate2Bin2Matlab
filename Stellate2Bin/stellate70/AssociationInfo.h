

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 6.00.0366 */
/* at Tue May 18 13:59:44 2010
 */
/* Compiler settings for g:\Develop\Harm700\MLSample\ComSignalFile\SignalFile\AssociationInfo.idl:
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

#ifndef __AssociationInfo_h__
#define __AssociationInfo_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __IAssociationInfo_FWD_DEFINED__
#define __IAssociationInfo_FWD_DEFINED__
typedef interface IAssociationInfo IAssociationInfo;
#endif 	/* __IAssociationInfo_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"
#include "SignalFileDef.h"

#ifdef __cplusplus
extern "C"{
#endif 

void * __RPC_USER MIDL_user_allocate(size_t);
void __RPC_USER MIDL_user_free( void * ); 

#ifndef __IAssociationInfo_INTERFACE_DEFINED__
#define __IAssociationInfo_INTERFACE_DEFINED__

/* interface IAssociationInfo */
/* [unique][nonextensible][dual][helpstring][version][uuid][object] */ 


EXTERN_C const IID IID_IAssociationInfo;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("A6E2BA57-85F3-40AA-BFB2-3316886261BC")
    IAssociationInfo : public IDispatch
    {
    public:
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE IsStageToSleepEventsEnabled( 
            /* [retval][out] */ BOOL *pbIsEnabled) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE IsArtifactToSleepEventsEnabled( 
            /* [retval][out] */ BOOL *pbIsEnabled) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE IsCPapTreatmentToRespEnabled( 
            /* [retval][out] */ BOOL *pbIsEnabled) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE IsRespToDesatEnabled( 
            /* [retval][out] */ BOOL *pbIsEnabled) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE IsRespToArousalEnabled( 
            /* [retval][out] */ BOOL *pbIsEnabled) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE IsSnoreToArousalEnabled( 
            /* [retval][out] */ BOOL *pbIsEnabled) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE IsPlmToArousalEnabled( 
            /* [retval][out] */ BOOL *pbIsEnabled) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Init( 
            /* [in] */ IAssociationInfo *pAssocInfo) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Reset( void) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IAssociationInfoVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IAssociationInfo * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IAssociationInfo * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IAssociationInfo * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IAssociationInfo * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IAssociationInfo * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IAssociationInfo * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IAssociationInfo * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *IsStageToSleepEventsEnabled )( 
            IAssociationInfo * This,
            /* [retval][out] */ BOOL *pbIsEnabled);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *IsArtifactToSleepEventsEnabled )( 
            IAssociationInfo * This,
            /* [retval][out] */ BOOL *pbIsEnabled);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *IsCPapTreatmentToRespEnabled )( 
            IAssociationInfo * This,
            /* [retval][out] */ BOOL *pbIsEnabled);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *IsRespToDesatEnabled )( 
            IAssociationInfo * This,
            /* [retval][out] */ BOOL *pbIsEnabled);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *IsRespToArousalEnabled )( 
            IAssociationInfo * This,
            /* [retval][out] */ BOOL *pbIsEnabled);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *IsSnoreToArousalEnabled )( 
            IAssociationInfo * This,
            /* [retval][out] */ BOOL *pbIsEnabled);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *IsPlmToArousalEnabled )( 
            IAssociationInfo * This,
            /* [retval][out] */ BOOL *pbIsEnabled);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Init )( 
            IAssociationInfo * This,
            /* [in] */ IAssociationInfo *pAssocInfo);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Reset )( 
            IAssociationInfo * This);
        
        END_INTERFACE
    } IAssociationInfoVtbl;

    interface IAssociationInfo
    {
        CONST_VTBL struct IAssociationInfoVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IAssociationInfo_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IAssociationInfo_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IAssociationInfo_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IAssociationInfo_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define IAssociationInfo_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define IAssociationInfo_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define IAssociationInfo_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define IAssociationInfo_IsStageToSleepEventsEnabled(This,pbIsEnabled)	\
    (This)->lpVtbl -> IsStageToSleepEventsEnabled(This,pbIsEnabled)

#define IAssociationInfo_IsArtifactToSleepEventsEnabled(This,pbIsEnabled)	\
    (This)->lpVtbl -> IsArtifactToSleepEventsEnabled(This,pbIsEnabled)

#define IAssociationInfo_IsCPapTreatmentToRespEnabled(This,pbIsEnabled)	\
    (This)->lpVtbl -> IsCPapTreatmentToRespEnabled(This,pbIsEnabled)

#define IAssociationInfo_IsRespToDesatEnabled(This,pbIsEnabled)	\
    (This)->lpVtbl -> IsRespToDesatEnabled(This,pbIsEnabled)

#define IAssociationInfo_IsRespToArousalEnabled(This,pbIsEnabled)	\
    (This)->lpVtbl -> IsRespToArousalEnabled(This,pbIsEnabled)

#define IAssociationInfo_IsSnoreToArousalEnabled(This,pbIsEnabled)	\
    (This)->lpVtbl -> IsSnoreToArousalEnabled(This,pbIsEnabled)

#define IAssociationInfo_IsPlmToArousalEnabled(This,pbIsEnabled)	\
    (This)->lpVtbl -> IsPlmToArousalEnabled(This,pbIsEnabled)

#define IAssociationInfo_Init(This,pAssocInfo)	\
    (This)->lpVtbl -> Init(This,pAssocInfo)

#define IAssociationInfo_Reset(This)	\
    (This)->lpVtbl -> Reset(This)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring] */ HRESULT STDMETHODCALLTYPE IAssociationInfo_IsStageToSleepEventsEnabled_Proxy( 
    IAssociationInfo * This,
    /* [retval][out] */ BOOL *pbIsEnabled);


void __RPC_STUB IAssociationInfo_IsStageToSleepEventsEnabled_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IAssociationInfo_IsArtifactToSleepEventsEnabled_Proxy( 
    IAssociationInfo * This,
    /* [retval][out] */ BOOL *pbIsEnabled);


void __RPC_STUB IAssociationInfo_IsArtifactToSleepEventsEnabled_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IAssociationInfo_IsCPapTreatmentToRespEnabled_Proxy( 
    IAssociationInfo * This,
    /* [retval][out] */ BOOL *pbIsEnabled);


void __RPC_STUB IAssociationInfo_IsCPapTreatmentToRespEnabled_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IAssociationInfo_IsRespToDesatEnabled_Proxy( 
    IAssociationInfo * This,
    /* [retval][out] */ BOOL *pbIsEnabled);


void __RPC_STUB IAssociationInfo_IsRespToDesatEnabled_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IAssociationInfo_IsRespToArousalEnabled_Proxy( 
    IAssociationInfo * This,
    /* [retval][out] */ BOOL *pbIsEnabled);


void __RPC_STUB IAssociationInfo_IsRespToArousalEnabled_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IAssociationInfo_IsSnoreToArousalEnabled_Proxy( 
    IAssociationInfo * This,
    /* [retval][out] */ BOOL *pbIsEnabled);


void __RPC_STUB IAssociationInfo_IsSnoreToArousalEnabled_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IAssociationInfo_IsPlmToArousalEnabled_Proxy( 
    IAssociationInfo * This,
    /* [retval][out] */ BOOL *pbIsEnabled);


void __RPC_STUB IAssociationInfo_IsPlmToArousalEnabled_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IAssociationInfo_Init_Proxy( 
    IAssociationInfo * This,
    /* [in] */ IAssociationInfo *pAssocInfo);


void __RPC_STUB IAssociationInfo_Init_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IAssociationInfo_Reset_Proxy( 
    IAssociationInfo * This);


void __RPC_STUB IAssociationInfo_Reset_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IAssociationInfo_INTERFACE_DEFINED__ */


/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


