

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 6.00.0366 */
/* at Tue May 18 13:59:20 2010
 */
/* Compiler settings for g:\Develop\Harm700\MLSample\ComSignalFile\SignalFile\EventItem.idl:
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

#ifndef __EventItem_h__
#define __EventItem_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __IEventItem_FWD_DEFINED__
#define __IEventItem_FWD_DEFINED__
typedef interface IEventItem IEventItem;
#endif 	/* __IEventItem_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"
#include "SignalFileDef.h"
#include "EventGroup.h"

#ifdef __cplusplus
extern "C"{
#endif 

void * __RPC_USER MIDL_user_allocate(size_t);
void __RPC_USER MIDL_user_free( void * ); 

#ifndef __IEventItem_INTERFACE_DEFINED__
#define __IEventItem_INTERFACE_DEFINED__

/* interface IEventItem */
/* [unique][nonextensible][dual][helpstring][version][uuid][object] */ 


EXTERN_C const IID IID_IEventItem;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("A0D717CE-0F29-4B12-ABF9-B925D019807E")
    IEventItem : public IDispatch
    {
    public:
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SetName( 
            /* [in] */ BSTR bstrName) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetName( 
            /* [retval][out] */ BSTR *pbstrName) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetDisplayName( 
            /* [retval][out] */ BSTR *pbstrName) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SetDescription( 
            /* [in] */ BSTR bstrDesc) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetDescription( 
            /* [retval][out] */ BSTR *pbstrDesc) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SetStartTime( 
            /* [in] */ DATE dateStartTime) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetStartTime( 
            /* [retval][out] */ DATE *pdateTime) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SetStartSample( 
            /* [in] */ LONG lSample) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetStartSample( 
            /* [retval][out] */ LONG *plSample) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SetTimeLength( 
            /* [in] */ DOUBLE dSeconds) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetTimeLength( 
            /* [retval][out] */ DOUBLE *pdSeconds) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SetSampleLength( 
            /* [in] */ LONG lSamples) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetSampleLength( 
            /* [retval][out] */ LONG *plSamples) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SetGroup( 
            /* [in] */ IEventGroup *pEventGroup) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetGroup( 
            /* [retval][out] */ IEventGroup **ppEventGroup) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SetChannel( 
            /* [in] */ BSTR bstrChannel) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetChannel( 
            /* [retval][out] */ BSTR *pbstrChannel) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SetColor( 
            /* [in] */ OLE_COLOR oclrColor) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetColor( 
            /* [retval][out] */ OLE_COLOR *poclrColor) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SetVisibility( 
            /* [in] */ EVisibilityStatus eVisibility) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetVisibility( 
            /* [retval][out] */ EVisibilityStatus *peVisibility) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SetChangeStatus( 
            /* [in] */ EChangeStatus eChangeStatus) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetChangeStatus( 
            /* [retval][out] */ EChangeStatus *peChangeStatus) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetOrdinal( 
            /* [retval][out] */ LONG *plOrdinal) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetAssociationStatus( 
            /* [retval][out] */ EItemAssocStatus *peItemAssocStatus) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetCausingItemOrdinal( 
            /* [retval][out] */ LONG *plCausingOrdinal) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetAffectedItemOrdinals( 
            /* [retval][out] */ SAFEARRAY * *ppsaAffectedOrdinals) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE CanCauseAssociation( 
            /* [defaultvalue][retval][out] */ BOOL *pbCanCause = 0) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SetItemPropertyValue( 
            /* [in] */ BSTR bstrKey,
            /* [in] */ BSTR bstrValue) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetItemPropertyValue( 
            /* [in] */ BSTR bstrKey,
            /* [retval][out] */ BSTR *pbstrValue) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Init( 
            /* [in] */ IEventItem *pEventItem) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Reset( void) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IEventItemVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IEventItem * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IEventItem * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IEventItem * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IEventItem * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IEventItem * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IEventItem * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IEventItem * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetName )( 
            IEventItem * This,
            /* [in] */ BSTR bstrName);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetName )( 
            IEventItem * This,
            /* [retval][out] */ BSTR *pbstrName);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetDisplayName )( 
            IEventItem * This,
            /* [retval][out] */ BSTR *pbstrName);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetDescription )( 
            IEventItem * This,
            /* [in] */ BSTR bstrDesc);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetDescription )( 
            IEventItem * This,
            /* [retval][out] */ BSTR *pbstrDesc);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetStartTime )( 
            IEventItem * This,
            /* [in] */ DATE dateStartTime);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetStartTime )( 
            IEventItem * This,
            /* [retval][out] */ DATE *pdateTime);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetStartSample )( 
            IEventItem * This,
            /* [in] */ LONG lSample);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetStartSample )( 
            IEventItem * This,
            /* [retval][out] */ LONG *plSample);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetTimeLength )( 
            IEventItem * This,
            /* [in] */ DOUBLE dSeconds);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetTimeLength )( 
            IEventItem * This,
            /* [retval][out] */ DOUBLE *pdSeconds);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetSampleLength )( 
            IEventItem * This,
            /* [in] */ LONG lSamples);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetSampleLength )( 
            IEventItem * This,
            /* [retval][out] */ LONG *plSamples);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetGroup )( 
            IEventItem * This,
            /* [in] */ IEventGroup *pEventGroup);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetGroup )( 
            IEventItem * This,
            /* [retval][out] */ IEventGroup **ppEventGroup);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetChannel )( 
            IEventItem * This,
            /* [in] */ BSTR bstrChannel);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetChannel )( 
            IEventItem * This,
            /* [retval][out] */ BSTR *pbstrChannel);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetColor )( 
            IEventItem * This,
            /* [in] */ OLE_COLOR oclrColor);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetColor )( 
            IEventItem * This,
            /* [retval][out] */ OLE_COLOR *poclrColor);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetVisibility )( 
            IEventItem * This,
            /* [in] */ EVisibilityStatus eVisibility);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetVisibility )( 
            IEventItem * This,
            /* [retval][out] */ EVisibilityStatus *peVisibility);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetChangeStatus )( 
            IEventItem * This,
            /* [in] */ EChangeStatus eChangeStatus);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetChangeStatus )( 
            IEventItem * This,
            /* [retval][out] */ EChangeStatus *peChangeStatus);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetOrdinal )( 
            IEventItem * This,
            /* [retval][out] */ LONG *plOrdinal);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetAssociationStatus )( 
            IEventItem * This,
            /* [retval][out] */ EItemAssocStatus *peItemAssocStatus);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetCausingItemOrdinal )( 
            IEventItem * This,
            /* [retval][out] */ LONG *plCausingOrdinal);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetAffectedItemOrdinals )( 
            IEventItem * This,
            /* [retval][out] */ SAFEARRAY * *ppsaAffectedOrdinals);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *CanCauseAssociation )( 
            IEventItem * This,
            /* [defaultvalue][retval][out] */ BOOL *pbCanCause);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetItemPropertyValue )( 
            IEventItem * This,
            /* [in] */ BSTR bstrKey,
            /* [in] */ BSTR bstrValue);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetItemPropertyValue )( 
            IEventItem * This,
            /* [in] */ BSTR bstrKey,
            /* [retval][out] */ BSTR *pbstrValue);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Init )( 
            IEventItem * This,
            /* [in] */ IEventItem *pEventItem);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Reset )( 
            IEventItem * This);
        
        END_INTERFACE
    } IEventItemVtbl;

    interface IEventItem
    {
        CONST_VTBL struct IEventItemVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IEventItem_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IEventItem_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IEventItem_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IEventItem_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define IEventItem_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define IEventItem_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define IEventItem_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define IEventItem_SetName(This,bstrName)	\
    (This)->lpVtbl -> SetName(This,bstrName)

#define IEventItem_GetName(This,pbstrName)	\
    (This)->lpVtbl -> GetName(This,pbstrName)

#define IEventItem_GetDisplayName(This,pbstrName)	\
    (This)->lpVtbl -> GetDisplayName(This,pbstrName)

#define IEventItem_SetDescription(This,bstrDesc)	\
    (This)->lpVtbl -> SetDescription(This,bstrDesc)

#define IEventItem_GetDescription(This,pbstrDesc)	\
    (This)->lpVtbl -> GetDescription(This,pbstrDesc)

#define IEventItem_SetStartTime(This,dateStartTime)	\
    (This)->lpVtbl -> SetStartTime(This,dateStartTime)

#define IEventItem_GetStartTime(This,pdateTime)	\
    (This)->lpVtbl -> GetStartTime(This,pdateTime)

#define IEventItem_SetStartSample(This,lSample)	\
    (This)->lpVtbl -> SetStartSample(This,lSample)

#define IEventItem_GetStartSample(This,plSample)	\
    (This)->lpVtbl -> GetStartSample(This,plSample)

#define IEventItem_SetTimeLength(This,dSeconds)	\
    (This)->lpVtbl -> SetTimeLength(This,dSeconds)

#define IEventItem_GetTimeLength(This,pdSeconds)	\
    (This)->lpVtbl -> GetTimeLength(This,pdSeconds)

#define IEventItem_SetSampleLength(This,lSamples)	\
    (This)->lpVtbl -> SetSampleLength(This,lSamples)

#define IEventItem_GetSampleLength(This,plSamples)	\
    (This)->lpVtbl -> GetSampleLength(This,plSamples)

#define IEventItem_SetGroup(This,pEventGroup)	\
    (This)->lpVtbl -> SetGroup(This,pEventGroup)

#define IEventItem_GetGroup(This,ppEventGroup)	\
    (This)->lpVtbl -> GetGroup(This,ppEventGroup)

#define IEventItem_SetChannel(This,bstrChannel)	\
    (This)->lpVtbl -> SetChannel(This,bstrChannel)

#define IEventItem_GetChannel(This,pbstrChannel)	\
    (This)->lpVtbl -> GetChannel(This,pbstrChannel)

#define IEventItem_SetColor(This,oclrColor)	\
    (This)->lpVtbl -> SetColor(This,oclrColor)

#define IEventItem_GetColor(This,poclrColor)	\
    (This)->lpVtbl -> GetColor(This,poclrColor)

#define IEventItem_SetVisibility(This,eVisibility)	\
    (This)->lpVtbl -> SetVisibility(This,eVisibility)

#define IEventItem_GetVisibility(This,peVisibility)	\
    (This)->lpVtbl -> GetVisibility(This,peVisibility)

#define IEventItem_SetChangeStatus(This,eChangeStatus)	\
    (This)->lpVtbl -> SetChangeStatus(This,eChangeStatus)

#define IEventItem_GetChangeStatus(This,peChangeStatus)	\
    (This)->lpVtbl -> GetChangeStatus(This,peChangeStatus)

#define IEventItem_GetOrdinal(This,plOrdinal)	\
    (This)->lpVtbl -> GetOrdinal(This,plOrdinal)

#define IEventItem_GetAssociationStatus(This,peItemAssocStatus)	\
    (This)->lpVtbl -> GetAssociationStatus(This,peItemAssocStatus)

#define IEventItem_GetCausingItemOrdinal(This,plCausingOrdinal)	\
    (This)->lpVtbl -> GetCausingItemOrdinal(This,plCausingOrdinal)

#define IEventItem_GetAffectedItemOrdinals(This,ppsaAffectedOrdinals)	\
    (This)->lpVtbl -> GetAffectedItemOrdinals(This,ppsaAffectedOrdinals)

#define IEventItem_CanCauseAssociation(This,pbCanCause)	\
    (This)->lpVtbl -> CanCauseAssociation(This,pbCanCause)

#define IEventItem_SetItemPropertyValue(This,bstrKey,bstrValue)	\
    (This)->lpVtbl -> SetItemPropertyValue(This,bstrKey,bstrValue)

#define IEventItem_GetItemPropertyValue(This,bstrKey,pbstrValue)	\
    (This)->lpVtbl -> GetItemPropertyValue(This,bstrKey,pbstrValue)

#define IEventItem_Init(This,pEventItem)	\
    (This)->lpVtbl -> Init(This,pEventItem)

#define IEventItem_Reset(This)	\
    (This)->lpVtbl -> Reset(This)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring] */ HRESULT STDMETHODCALLTYPE IEventItem_SetName_Proxy( 
    IEventItem * This,
    /* [in] */ BSTR bstrName);


void __RPC_STUB IEventItem_SetName_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IEventItem_GetName_Proxy( 
    IEventItem * This,
    /* [retval][out] */ BSTR *pbstrName);


void __RPC_STUB IEventItem_GetName_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IEventItem_GetDisplayName_Proxy( 
    IEventItem * This,
    /* [retval][out] */ BSTR *pbstrName);


void __RPC_STUB IEventItem_GetDisplayName_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IEventItem_SetDescription_Proxy( 
    IEventItem * This,
    /* [in] */ BSTR bstrDesc);


void __RPC_STUB IEventItem_SetDescription_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IEventItem_GetDescription_Proxy( 
    IEventItem * This,
    /* [retval][out] */ BSTR *pbstrDesc);


void __RPC_STUB IEventItem_GetDescription_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IEventItem_SetStartTime_Proxy( 
    IEventItem * This,
    /* [in] */ DATE dateStartTime);


void __RPC_STUB IEventItem_SetStartTime_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IEventItem_GetStartTime_Proxy( 
    IEventItem * This,
    /* [retval][out] */ DATE *pdateTime);


void __RPC_STUB IEventItem_GetStartTime_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IEventItem_SetStartSample_Proxy( 
    IEventItem * This,
    /* [in] */ LONG lSample);


void __RPC_STUB IEventItem_SetStartSample_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IEventItem_GetStartSample_Proxy( 
    IEventItem * This,
    /* [retval][out] */ LONG *plSample);


void __RPC_STUB IEventItem_GetStartSample_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IEventItem_SetTimeLength_Proxy( 
    IEventItem * This,
    /* [in] */ DOUBLE dSeconds);


void __RPC_STUB IEventItem_SetTimeLength_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IEventItem_GetTimeLength_Proxy( 
    IEventItem * This,
    /* [retval][out] */ DOUBLE *pdSeconds);


void __RPC_STUB IEventItem_GetTimeLength_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IEventItem_SetSampleLength_Proxy( 
    IEventItem * This,
    /* [in] */ LONG lSamples);


void __RPC_STUB IEventItem_SetSampleLength_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IEventItem_GetSampleLength_Proxy( 
    IEventItem * This,
    /* [retval][out] */ LONG *plSamples);


void __RPC_STUB IEventItem_GetSampleLength_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IEventItem_SetGroup_Proxy( 
    IEventItem * This,
    /* [in] */ IEventGroup *pEventGroup);


void __RPC_STUB IEventItem_SetGroup_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IEventItem_GetGroup_Proxy( 
    IEventItem * This,
    /* [retval][out] */ IEventGroup **ppEventGroup);


void __RPC_STUB IEventItem_GetGroup_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IEventItem_SetChannel_Proxy( 
    IEventItem * This,
    /* [in] */ BSTR bstrChannel);


void __RPC_STUB IEventItem_SetChannel_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IEventItem_GetChannel_Proxy( 
    IEventItem * This,
    /* [retval][out] */ BSTR *pbstrChannel);


void __RPC_STUB IEventItem_GetChannel_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IEventItem_SetColor_Proxy( 
    IEventItem * This,
    /* [in] */ OLE_COLOR oclrColor);


void __RPC_STUB IEventItem_SetColor_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IEventItem_GetColor_Proxy( 
    IEventItem * This,
    /* [retval][out] */ OLE_COLOR *poclrColor);


void __RPC_STUB IEventItem_GetColor_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IEventItem_SetVisibility_Proxy( 
    IEventItem * This,
    /* [in] */ EVisibilityStatus eVisibility);


void __RPC_STUB IEventItem_SetVisibility_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IEventItem_GetVisibility_Proxy( 
    IEventItem * This,
    /* [retval][out] */ EVisibilityStatus *peVisibility);


void __RPC_STUB IEventItem_GetVisibility_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IEventItem_SetChangeStatus_Proxy( 
    IEventItem * This,
    /* [in] */ EChangeStatus eChangeStatus);


void __RPC_STUB IEventItem_SetChangeStatus_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IEventItem_GetChangeStatus_Proxy( 
    IEventItem * This,
    /* [retval][out] */ EChangeStatus *peChangeStatus);


void __RPC_STUB IEventItem_GetChangeStatus_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IEventItem_GetOrdinal_Proxy( 
    IEventItem * This,
    /* [retval][out] */ LONG *plOrdinal);


void __RPC_STUB IEventItem_GetOrdinal_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IEventItem_GetAssociationStatus_Proxy( 
    IEventItem * This,
    /* [retval][out] */ EItemAssocStatus *peItemAssocStatus);


void __RPC_STUB IEventItem_GetAssociationStatus_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IEventItem_GetCausingItemOrdinal_Proxy( 
    IEventItem * This,
    /* [retval][out] */ LONG *plCausingOrdinal);


void __RPC_STUB IEventItem_GetCausingItemOrdinal_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IEventItem_GetAffectedItemOrdinals_Proxy( 
    IEventItem * This,
    /* [retval][out] */ SAFEARRAY * *ppsaAffectedOrdinals);


void __RPC_STUB IEventItem_GetAffectedItemOrdinals_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IEventItem_CanCauseAssociation_Proxy( 
    IEventItem * This,
    /* [defaultvalue][retval][out] */ BOOL *pbCanCause);


void __RPC_STUB IEventItem_CanCauseAssociation_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IEventItem_SetItemPropertyValue_Proxy( 
    IEventItem * This,
    /* [in] */ BSTR bstrKey,
    /* [in] */ BSTR bstrValue);


void __RPC_STUB IEventItem_SetItemPropertyValue_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IEventItem_GetItemPropertyValue_Proxy( 
    IEventItem * This,
    /* [in] */ BSTR bstrKey,
    /* [retval][out] */ BSTR *pbstrValue);


void __RPC_STUB IEventItem_GetItemPropertyValue_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IEventItem_Init_Proxy( 
    IEventItem * This,
    /* [in] */ IEventItem *pEventItem);


void __RPC_STUB IEventItem_Init_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IEventItem_Reset_Proxy( 
    IEventItem * This);


void __RPC_STUB IEventItem_Reset_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IEventItem_INTERFACE_DEFINED__ */


/* Additional Prototypes for ALL interfaces */

unsigned long             __RPC_USER  BSTR_UserSize(     unsigned long *, unsigned long            , BSTR * ); 
unsigned char * __RPC_USER  BSTR_UserMarshal(  unsigned long *, unsigned char *, BSTR * ); 
unsigned char * __RPC_USER  BSTR_UserUnmarshal(unsigned long *, unsigned char *, BSTR * ); 
void                      __RPC_USER  BSTR_UserFree(     unsigned long *, BSTR * ); 

unsigned long             __RPC_USER  LPSAFEARRAY_UserSize(     unsigned long *, unsigned long            , LPSAFEARRAY * ); 
unsigned char * __RPC_USER  LPSAFEARRAY_UserMarshal(  unsigned long *, unsigned char *, LPSAFEARRAY * ); 
unsigned char * __RPC_USER  LPSAFEARRAY_UserUnmarshal(unsigned long *, unsigned char *, LPSAFEARRAY * ); 
void                      __RPC_USER  LPSAFEARRAY_UserFree(     unsigned long *, LPSAFEARRAY * ); 

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


