

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 6.00.0366 */
/* at Tue May 18 13:58:45 2010
 */
/* Compiler settings for g:\Develop\Harm700\MLSample\ComSignalFile\SignalFile\PhysicalMontage.idl:
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

#ifndef __PhysicalMontage_h__
#define __PhysicalMontage_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __IPhysicalMontage_FWD_DEFINED__
#define __IPhysicalMontage_FWD_DEFINED__
typedef interface IPhysicalMontage IPhysicalMontage;
#endif 	/* __IPhysicalMontage_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"
#include "SignalFileDef.h"
#include "RecordingMontage.h"
#include "ElectrodeGroup.h"

#ifdef __cplusplus
extern "C"{
#endif 

void * __RPC_USER MIDL_user_allocate(size_t);
void __RPC_USER MIDL_user_free( void * ); 

#ifndef __IPhysicalMontage_INTERFACE_DEFINED__
#define __IPhysicalMontage_INTERFACE_DEFINED__

/* interface IPhysicalMontage */
/* [unique][nonextensible][dual][helpstring][version][uuid][object] */ 


EXTERN_C const IID IID_IPhysicalMontage;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("CA1C29B9-E680-462E-86BA-AD71443611A7")
    IPhysicalMontage : public IDispatch
    {
    public:
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SetMontageName( 
            /* [in] */ BSTR bstrName) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetMontageName( 
            /* [retval][out] */ BSTR *pbstrName) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE AddElectrode( 
            /* [in] */ BSTR bstrName) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE AddElectrodeGroup( 
            /* [in] */ IElectrodeGroup *pElectrodeGroup) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE InsertElectrode( 
            /* [in] */ INT iIndex,
            /* [in] */ BSTR bstrName) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE InsertElectrodeGroup( 
            /* [in] */ INT iIndex,
            /* [in] */ IElectrodeGroup *pElectrodeGroup) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE DeleteElectrode( 
            /* [in] */ INT iIndex) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetElectrodeCount( 
            /* [retval][out] */ INT *piCount) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetElectrodeIndex( 
            /* [in] */ BSTR bstrName,
            /* [retval][out] */ INT *piIndex) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SetElectrodeName( 
            /* [in] */ INT iIndex,
            /* [in] */ BSTR bstrName) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetElectrodeName( 
            /* [in] */ INT iIndex,
            /* [retval][out] */ BSTR *pbstrName) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE AddRecordingMontage( 
            /* [in] */ BSTR bstrName) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE InsertRecordingMontage( 
            /* [in] */ INT iIndex,
            /* [in] */ BSTR bstrName) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE DeleteRecordingMontage( 
            /* [in] */ INT iIndex) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetRecordingMontageCount( 
            /* [retval][out] */ INT *piCount) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetRecordingMontageIndex( 
            /* [in] */ BSTR bstrName,
            /* [retval][out] */ INT *piIndex) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetRecordingMontage( 
            /* [in] */ INT iIndex,
            /* [retval][out] */ IRecordingMontage **ppRecordingMontage) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE IsElectrodeGroup( 
            /* [in] */ INT iIndex,
            /* [retval][out] */ BOOL *pbElectrodeGroup) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetElectrodeGroupByName( 
            /* [in] */ BSTR bstrName,
            /* [retval][out] */ IElectrodeGroup **ppElectrodeGroup) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetElectrodeGroup( 
            /* [in] */ INT iIndex,
            /* [retval][out] */ IElectrodeGroup **ppElectrodeGroup) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE ReplaceElectrodeGroup( 
            /* [in] */ INT iIndex,
            /* [in] */ IElectrodeGroup *pElectrodeGroup) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Init( 
            /* [in] */ IPhysicalMontage *pPhysicalMontage) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Reset( void) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IPhysicalMontageVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IPhysicalMontage * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IPhysicalMontage * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IPhysicalMontage * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IPhysicalMontage * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IPhysicalMontage * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IPhysicalMontage * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IPhysicalMontage * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetMontageName )( 
            IPhysicalMontage * This,
            /* [in] */ BSTR bstrName);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetMontageName )( 
            IPhysicalMontage * This,
            /* [retval][out] */ BSTR *pbstrName);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *AddElectrode )( 
            IPhysicalMontage * This,
            /* [in] */ BSTR bstrName);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *AddElectrodeGroup )( 
            IPhysicalMontage * This,
            /* [in] */ IElectrodeGroup *pElectrodeGroup);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *InsertElectrode )( 
            IPhysicalMontage * This,
            /* [in] */ INT iIndex,
            /* [in] */ BSTR bstrName);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *InsertElectrodeGroup )( 
            IPhysicalMontage * This,
            /* [in] */ INT iIndex,
            /* [in] */ IElectrodeGroup *pElectrodeGroup);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *DeleteElectrode )( 
            IPhysicalMontage * This,
            /* [in] */ INT iIndex);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetElectrodeCount )( 
            IPhysicalMontage * This,
            /* [retval][out] */ INT *piCount);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetElectrodeIndex )( 
            IPhysicalMontage * This,
            /* [in] */ BSTR bstrName,
            /* [retval][out] */ INT *piIndex);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetElectrodeName )( 
            IPhysicalMontage * This,
            /* [in] */ INT iIndex,
            /* [in] */ BSTR bstrName);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetElectrodeName )( 
            IPhysicalMontage * This,
            /* [in] */ INT iIndex,
            /* [retval][out] */ BSTR *pbstrName);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *AddRecordingMontage )( 
            IPhysicalMontage * This,
            /* [in] */ BSTR bstrName);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *InsertRecordingMontage )( 
            IPhysicalMontage * This,
            /* [in] */ INT iIndex,
            /* [in] */ BSTR bstrName);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *DeleteRecordingMontage )( 
            IPhysicalMontage * This,
            /* [in] */ INT iIndex);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetRecordingMontageCount )( 
            IPhysicalMontage * This,
            /* [retval][out] */ INT *piCount);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetRecordingMontageIndex )( 
            IPhysicalMontage * This,
            /* [in] */ BSTR bstrName,
            /* [retval][out] */ INT *piIndex);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetRecordingMontage )( 
            IPhysicalMontage * This,
            /* [in] */ INT iIndex,
            /* [retval][out] */ IRecordingMontage **ppRecordingMontage);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *IsElectrodeGroup )( 
            IPhysicalMontage * This,
            /* [in] */ INT iIndex,
            /* [retval][out] */ BOOL *pbElectrodeGroup);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetElectrodeGroupByName )( 
            IPhysicalMontage * This,
            /* [in] */ BSTR bstrName,
            /* [retval][out] */ IElectrodeGroup **ppElectrodeGroup);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetElectrodeGroup )( 
            IPhysicalMontage * This,
            /* [in] */ INT iIndex,
            /* [retval][out] */ IElectrodeGroup **ppElectrodeGroup);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *ReplaceElectrodeGroup )( 
            IPhysicalMontage * This,
            /* [in] */ INT iIndex,
            /* [in] */ IElectrodeGroup *pElectrodeGroup);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Init )( 
            IPhysicalMontage * This,
            /* [in] */ IPhysicalMontage *pPhysicalMontage);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Reset )( 
            IPhysicalMontage * This);
        
        END_INTERFACE
    } IPhysicalMontageVtbl;

    interface IPhysicalMontage
    {
        CONST_VTBL struct IPhysicalMontageVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IPhysicalMontage_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IPhysicalMontage_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IPhysicalMontage_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IPhysicalMontage_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define IPhysicalMontage_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define IPhysicalMontage_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define IPhysicalMontage_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define IPhysicalMontage_SetMontageName(This,bstrName)	\
    (This)->lpVtbl -> SetMontageName(This,bstrName)

#define IPhysicalMontage_GetMontageName(This,pbstrName)	\
    (This)->lpVtbl -> GetMontageName(This,pbstrName)

#define IPhysicalMontage_AddElectrode(This,bstrName)	\
    (This)->lpVtbl -> AddElectrode(This,bstrName)

#define IPhysicalMontage_AddElectrodeGroup(This,pElectrodeGroup)	\
    (This)->lpVtbl -> AddElectrodeGroup(This,pElectrodeGroup)

#define IPhysicalMontage_InsertElectrode(This,iIndex,bstrName)	\
    (This)->lpVtbl -> InsertElectrode(This,iIndex,bstrName)

#define IPhysicalMontage_InsertElectrodeGroup(This,iIndex,pElectrodeGroup)	\
    (This)->lpVtbl -> InsertElectrodeGroup(This,iIndex,pElectrodeGroup)

#define IPhysicalMontage_DeleteElectrode(This,iIndex)	\
    (This)->lpVtbl -> DeleteElectrode(This,iIndex)

#define IPhysicalMontage_GetElectrodeCount(This,piCount)	\
    (This)->lpVtbl -> GetElectrodeCount(This,piCount)

#define IPhysicalMontage_GetElectrodeIndex(This,bstrName,piIndex)	\
    (This)->lpVtbl -> GetElectrodeIndex(This,bstrName,piIndex)

#define IPhysicalMontage_SetElectrodeName(This,iIndex,bstrName)	\
    (This)->lpVtbl -> SetElectrodeName(This,iIndex,bstrName)

#define IPhysicalMontage_GetElectrodeName(This,iIndex,pbstrName)	\
    (This)->lpVtbl -> GetElectrodeName(This,iIndex,pbstrName)

#define IPhysicalMontage_AddRecordingMontage(This,bstrName)	\
    (This)->lpVtbl -> AddRecordingMontage(This,bstrName)

#define IPhysicalMontage_InsertRecordingMontage(This,iIndex,bstrName)	\
    (This)->lpVtbl -> InsertRecordingMontage(This,iIndex,bstrName)

#define IPhysicalMontage_DeleteRecordingMontage(This,iIndex)	\
    (This)->lpVtbl -> DeleteRecordingMontage(This,iIndex)

#define IPhysicalMontage_GetRecordingMontageCount(This,piCount)	\
    (This)->lpVtbl -> GetRecordingMontageCount(This,piCount)

#define IPhysicalMontage_GetRecordingMontageIndex(This,bstrName,piIndex)	\
    (This)->lpVtbl -> GetRecordingMontageIndex(This,bstrName,piIndex)

#define IPhysicalMontage_GetRecordingMontage(This,iIndex,ppRecordingMontage)	\
    (This)->lpVtbl -> GetRecordingMontage(This,iIndex,ppRecordingMontage)

#define IPhysicalMontage_IsElectrodeGroup(This,iIndex,pbElectrodeGroup)	\
    (This)->lpVtbl -> IsElectrodeGroup(This,iIndex,pbElectrodeGroup)

#define IPhysicalMontage_GetElectrodeGroupByName(This,bstrName,ppElectrodeGroup)	\
    (This)->lpVtbl -> GetElectrodeGroupByName(This,bstrName,ppElectrodeGroup)

#define IPhysicalMontage_GetElectrodeGroup(This,iIndex,ppElectrodeGroup)	\
    (This)->lpVtbl -> GetElectrodeGroup(This,iIndex,ppElectrodeGroup)

#define IPhysicalMontage_ReplaceElectrodeGroup(This,iIndex,pElectrodeGroup)	\
    (This)->lpVtbl -> ReplaceElectrodeGroup(This,iIndex,pElectrodeGroup)

#define IPhysicalMontage_Init(This,pPhysicalMontage)	\
    (This)->lpVtbl -> Init(This,pPhysicalMontage)

#define IPhysicalMontage_Reset(This)	\
    (This)->lpVtbl -> Reset(This)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring] */ HRESULT STDMETHODCALLTYPE IPhysicalMontage_SetMontageName_Proxy( 
    IPhysicalMontage * This,
    /* [in] */ BSTR bstrName);


void __RPC_STUB IPhysicalMontage_SetMontageName_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IPhysicalMontage_GetMontageName_Proxy( 
    IPhysicalMontage * This,
    /* [retval][out] */ BSTR *pbstrName);


void __RPC_STUB IPhysicalMontage_GetMontageName_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IPhysicalMontage_AddElectrode_Proxy( 
    IPhysicalMontage * This,
    /* [in] */ BSTR bstrName);


void __RPC_STUB IPhysicalMontage_AddElectrode_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IPhysicalMontage_AddElectrodeGroup_Proxy( 
    IPhysicalMontage * This,
    /* [in] */ IElectrodeGroup *pElectrodeGroup);


void __RPC_STUB IPhysicalMontage_AddElectrodeGroup_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IPhysicalMontage_InsertElectrode_Proxy( 
    IPhysicalMontage * This,
    /* [in] */ INT iIndex,
    /* [in] */ BSTR bstrName);


void __RPC_STUB IPhysicalMontage_InsertElectrode_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IPhysicalMontage_InsertElectrodeGroup_Proxy( 
    IPhysicalMontage * This,
    /* [in] */ INT iIndex,
    /* [in] */ IElectrodeGroup *pElectrodeGroup);


void __RPC_STUB IPhysicalMontage_InsertElectrodeGroup_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IPhysicalMontage_DeleteElectrode_Proxy( 
    IPhysicalMontage * This,
    /* [in] */ INT iIndex);


void __RPC_STUB IPhysicalMontage_DeleteElectrode_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IPhysicalMontage_GetElectrodeCount_Proxy( 
    IPhysicalMontage * This,
    /* [retval][out] */ INT *piCount);


void __RPC_STUB IPhysicalMontage_GetElectrodeCount_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IPhysicalMontage_GetElectrodeIndex_Proxy( 
    IPhysicalMontage * This,
    /* [in] */ BSTR bstrName,
    /* [retval][out] */ INT *piIndex);


void __RPC_STUB IPhysicalMontage_GetElectrodeIndex_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IPhysicalMontage_SetElectrodeName_Proxy( 
    IPhysicalMontage * This,
    /* [in] */ INT iIndex,
    /* [in] */ BSTR bstrName);


void __RPC_STUB IPhysicalMontage_SetElectrodeName_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IPhysicalMontage_GetElectrodeName_Proxy( 
    IPhysicalMontage * This,
    /* [in] */ INT iIndex,
    /* [retval][out] */ BSTR *pbstrName);


void __RPC_STUB IPhysicalMontage_GetElectrodeName_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IPhysicalMontage_AddRecordingMontage_Proxy( 
    IPhysicalMontage * This,
    /* [in] */ BSTR bstrName);


void __RPC_STUB IPhysicalMontage_AddRecordingMontage_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IPhysicalMontage_InsertRecordingMontage_Proxy( 
    IPhysicalMontage * This,
    /* [in] */ INT iIndex,
    /* [in] */ BSTR bstrName);


void __RPC_STUB IPhysicalMontage_InsertRecordingMontage_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IPhysicalMontage_DeleteRecordingMontage_Proxy( 
    IPhysicalMontage * This,
    /* [in] */ INT iIndex);


void __RPC_STUB IPhysicalMontage_DeleteRecordingMontage_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IPhysicalMontage_GetRecordingMontageCount_Proxy( 
    IPhysicalMontage * This,
    /* [retval][out] */ INT *piCount);


void __RPC_STUB IPhysicalMontage_GetRecordingMontageCount_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IPhysicalMontage_GetRecordingMontageIndex_Proxy( 
    IPhysicalMontage * This,
    /* [in] */ BSTR bstrName,
    /* [retval][out] */ INT *piIndex);


void __RPC_STUB IPhysicalMontage_GetRecordingMontageIndex_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IPhysicalMontage_GetRecordingMontage_Proxy( 
    IPhysicalMontage * This,
    /* [in] */ INT iIndex,
    /* [retval][out] */ IRecordingMontage **ppRecordingMontage);


void __RPC_STUB IPhysicalMontage_GetRecordingMontage_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IPhysicalMontage_IsElectrodeGroup_Proxy( 
    IPhysicalMontage * This,
    /* [in] */ INT iIndex,
    /* [retval][out] */ BOOL *pbElectrodeGroup);


void __RPC_STUB IPhysicalMontage_IsElectrodeGroup_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IPhysicalMontage_GetElectrodeGroupByName_Proxy( 
    IPhysicalMontage * This,
    /* [in] */ BSTR bstrName,
    /* [retval][out] */ IElectrodeGroup **ppElectrodeGroup);


void __RPC_STUB IPhysicalMontage_GetElectrodeGroupByName_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IPhysicalMontage_GetElectrodeGroup_Proxy( 
    IPhysicalMontage * This,
    /* [in] */ INT iIndex,
    /* [retval][out] */ IElectrodeGroup **ppElectrodeGroup);


void __RPC_STUB IPhysicalMontage_GetElectrodeGroup_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IPhysicalMontage_ReplaceElectrodeGroup_Proxy( 
    IPhysicalMontage * This,
    /* [in] */ INT iIndex,
    /* [in] */ IElectrodeGroup *pElectrodeGroup);


void __RPC_STUB IPhysicalMontage_ReplaceElectrodeGroup_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IPhysicalMontage_Init_Proxy( 
    IPhysicalMontage * This,
    /* [in] */ IPhysicalMontage *pPhysicalMontage);


void __RPC_STUB IPhysicalMontage_Init_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IPhysicalMontage_Reset_Proxy( 
    IPhysicalMontage * This);


void __RPC_STUB IPhysicalMontage_Reset_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IPhysicalMontage_INTERFACE_DEFINED__ */


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


