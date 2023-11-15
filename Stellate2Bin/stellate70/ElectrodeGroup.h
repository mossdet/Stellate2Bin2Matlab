

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 6.00.0366 */
/* at Tue May 18 13:59:36 2010
 */
/* Compiler settings for g:\Develop\Harm700\MLSample\ComSignalFile\SignalFile\ElectrodeGroup.idl:
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

#ifndef __ElectrodeGroup_h__
#define __ElectrodeGroup_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __IElectrodeGroup_FWD_DEFINED__
#define __IElectrodeGroup_FWD_DEFINED__
typedef interface IElectrodeGroup IElectrodeGroup;
#endif 	/* __IElectrodeGroup_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"
#include "SignalFileDef.h"
#include "Electrode.h"

#ifdef __cplusplus
extern "C"{
#endif 

void * __RPC_USER MIDL_user_allocate(size_t);
void __RPC_USER MIDL_user_free( void * ); 

#ifndef __IElectrodeGroup_INTERFACE_DEFINED__
#define __IElectrodeGroup_INTERFACE_DEFINED__

/* interface IElectrodeGroup */
/* [unique][nonextensible][dual][helpstring][version][uuid][object] */ 


EXTERN_C const IID IID_IElectrodeGroup;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("9AE64DDB-6671-4D0A-B032-D43BE7057514")
    IElectrodeGroup : public IDispatch
    {
    public:
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SetName( 
            /* [in] */ BSTR bstrName) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetName( 
            /* [retval][out] */ BSTR *pbstrName) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SetType( 
            /* [in] */ EElectrodeGroupType eType) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetType( 
            /* [retval][out] */ EElectrodeGroupType *peType) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SetRowCount( 
            /* [in] */ INT iRowCount) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetRowCount( 
            /* [retval][out] */ INT *piRowCount) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SetColCount( 
            /* [in] */ INT iColCount) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetColCount( 
            /* [retval][out] */ INT *piColCount) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SetNameSequence( 
            /* [in] */ EElectrodeGroupSequence eSequence) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetNameSequence( 
            /* [retval][out] */ EElectrodeGroupSequence *peSequence) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SetOriginPoint( 
            /* [in] */ EElectrodeGroupOriginPoint eOrigin) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetOriginPoint( 
            /* [retval][out] */ EElectrodeGroupOriginPoint *peOrigin) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SetInterDistance( 
            /* [in] */ DOUBLE dInterDistance) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetInterDistance( 
            /* [retval][out] */ DOUBLE *pdInterDistance) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SetContactSize( 
            /* [in] */ DOUBLE dContactSize) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetContactSize( 
            /* [retval][out] */ DOUBLE *pdContactSize) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SetColor( 
            /* [in] */ OLE_COLOR oclrColor) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetColor( 
            /* [retval][out] */ OLE_COLOR *poclrColor) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SetElectrodeStatus( 
            /* [in] */ INT iRow,
            /* [in] */ INT iCol,
            /* [in] */ EElectrodeUsageStatus eStatus) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetElectrodeStatus( 
            /* [in] */ INT iRow,
            /* [in] */ INT iCol,
            /* [retval][out] */ EElectrodeUsageStatus *peStatus) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetElectrodeCount( 
            /* [retval][out] */ INT *piElectrodeCount) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetElectrode( 
            /* [in] */ INT iIndex,
            /* [retval][out] */ IElectrode **ppElectrode) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Init( 
            /* [in] */ IElectrodeGroup *pElectrodeGroup) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Reset( void) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IElectrodeGroupVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IElectrodeGroup * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IElectrodeGroup * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IElectrodeGroup * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IElectrodeGroup * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IElectrodeGroup * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IElectrodeGroup * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IElectrodeGroup * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetName )( 
            IElectrodeGroup * This,
            /* [in] */ BSTR bstrName);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetName )( 
            IElectrodeGroup * This,
            /* [retval][out] */ BSTR *pbstrName);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetType )( 
            IElectrodeGroup * This,
            /* [in] */ EElectrodeGroupType eType);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetType )( 
            IElectrodeGroup * This,
            /* [retval][out] */ EElectrodeGroupType *peType);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetRowCount )( 
            IElectrodeGroup * This,
            /* [in] */ INT iRowCount);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetRowCount )( 
            IElectrodeGroup * This,
            /* [retval][out] */ INT *piRowCount);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetColCount )( 
            IElectrodeGroup * This,
            /* [in] */ INT iColCount);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetColCount )( 
            IElectrodeGroup * This,
            /* [retval][out] */ INT *piColCount);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetNameSequence )( 
            IElectrodeGroup * This,
            /* [in] */ EElectrodeGroupSequence eSequence);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetNameSequence )( 
            IElectrodeGroup * This,
            /* [retval][out] */ EElectrodeGroupSequence *peSequence);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetOriginPoint )( 
            IElectrodeGroup * This,
            /* [in] */ EElectrodeGroupOriginPoint eOrigin);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetOriginPoint )( 
            IElectrodeGroup * This,
            /* [retval][out] */ EElectrodeGroupOriginPoint *peOrigin);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetInterDistance )( 
            IElectrodeGroup * This,
            /* [in] */ DOUBLE dInterDistance);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetInterDistance )( 
            IElectrodeGroup * This,
            /* [retval][out] */ DOUBLE *pdInterDistance);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetContactSize )( 
            IElectrodeGroup * This,
            /* [in] */ DOUBLE dContactSize);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetContactSize )( 
            IElectrodeGroup * This,
            /* [retval][out] */ DOUBLE *pdContactSize);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetColor )( 
            IElectrodeGroup * This,
            /* [in] */ OLE_COLOR oclrColor);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetColor )( 
            IElectrodeGroup * This,
            /* [retval][out] */ OLE_COLOR *poclrColor);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetElectrodeStatus )( 
            IElectrodeGroup * This,
            /* [in] */ INT iRow,
            /* [in] */ INT iCol,
            /* [in] */ EElectrodeUsageStatus eStatus);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetElectrodeStatus )( 
            IElectrodeGroup * This,
            /* [in] */ INT iRow,
            /* [in] */ INT iCol,
            /* [retval][out] */ EElectrodeUsageStatus *peStatus);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetElectrodeCount )( 
            IElectrodeGroup * This,
            /* [retval][out] */ INT *piElectrodeCount);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetElectrode )( 
            IElectrodeGroup * This,
            /* [in] */ INT iIndex,
            /* [retval][out] */ IElectrode **ppElectrode);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Init )( 
            IElectrodeGroup * This,
            /* [in] */ IElectrodeGroup *pElectrodeGroup);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Reset )( 
            IElectrodeGroup * This);
        
        END_INTERFACE
    } IElectrodeGroupVtbl;

    interface IElectrodeGroup
    {
        CONST_VTBL struct IElectrodeGroupVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IElectrodeGroup_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IElectrodeGroup_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IElectrodeGroup_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IElectrodeGroup_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define IElectrodeGroup_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define IElectrodeGroup_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define IElectrodeGroup_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define IElectrodeGroup_SetName(This,bstrName)	\
    (This)->lpVtbl -> SetName(This,bstrName)

#define IElectrodeGroup_GetName(This,pbstrName)	\
    (This)->lpVtbl -> GetName(This,pbstrName)

#define IElectrodeGroup_SetType(This,eType)	\
    (This)->lpVtbl -> SetType(This,eType)

#define IElectrodeGroup_GetType(This,peType)	\
    (This)->lpVtbl -> GetType(This,peType)

#define IElectrodeGroup_SetRowCount(This,iRowCount)	\
    (This)->lpVtbl -> SetRowCount(This,iRowCount)

#define IElectrodeGroup_GetRowCount(This,piRowCount)	\
    (This)->lpVtbl -> GetRowCount(This,piRowCount)

#define IElectrodeGroup_SetColCount(This,iColCount)	\
    (This)->lpVtbl -> SetColCount(This,iColCount)

#define IElectrodeGroup_GetColCount(This,piColCount)	\
    (This)->lpVtbl -> GetColCount(This,piColCount)

#define IElectrodeGroup_SetNameSequence(This,eSequence)	\
    (This)->lpVtbl -> SetNameSequence(This,eSequence)

#define IElectrodeGroup_GetNameSequence(This,peSequence)	\
    (This)->lpVtbl -> GetNameSequence(This,peSequence)

#define IElectrodeGroup_SetOriginPoint(This,eOrigin)	\
    (This)->lpVtbl -> SetOriginPoint(This,eOrigin)

#define IElectrodeGroup_GetOriginPoint(This,peOrigin)	\
    (This)->lpVtbl -> GetOriginPoint(This,peOrigin)

#define IElectrodeGroup_SetInterDistance(This,dInterDistance)	\
    (This)->lpVtbl -> SetInterDistance(This,dInterDistance)

#define IElectrodeGroup_GetInterDistance(This,pdInterDistance)	\
    (This)->lpVtbl -> GetInterDistance(This,pdInterDistance)

#define IElectrodeGroup_SetContactSize(This,dContactSize)	\
    (This)->lpVtbl -> SetContactSize(This,dContactSize)

#define IElectrodeGroup_GetContactSize(This,pdContactSize)	\
    (This)->lpVtbl -> GetContactSize(This,pdContactSize)

#define IElectrodeGroup_SetColor(This,oclrColor)	\
    (This)->lpVtbl -> SetColor(This,oclrColor)

#define IElectrodeGroup_GetColor(This,poclrColor)	\
    (This)->lpVtbl -> GetColor(This,poclrColor)

#define IElectrodeGroup_SetElectrodeStatus(This,iRow,iCol,eStatus)	\
    (This)->lpVtbl -> SetElectrodeStatus(This,iRow,iCol,eStatus)

#define IElectrodeGroup_GetElectrodeStatus(This,iRow,iCol,peStatus)	\
    (This)->lpVtbl -> GetElectrodeStatus(This,iRow,iCol,peStatus)

#define IElectrodeGroup_GetElectrodeCount(This,piElectrodeCount)	\
    (This)->lpVtbl -> GetElectrodeCount(This,piElectrodeCount)

#define IElectrodeGroup_GetElectrode(This,iIndex,ppElectrode)	\
    (This)->lpVtbl -> GetElectrode(This,iIndex,ppElectrode)

#define IElectrodeGroup_Init(This,pElectrodeGroup)	\
    (This)->lpVtbl -> Init(This,pElectrodeGroup)

#define IElectrodeGroup_Reset(This)	\
    (This)->lpVtbl -> Reset(This)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring] */ HRESULT STDMETHODCALLTYPE IElectrodeGroup_SetName_Proxy( 
    IElectrodeGroup * This,
    /* [in] */ BSTR bstrName);


void __RPC_STUB IElectrodeGroup_SetName_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IElectrodeGroup_GetName_Proxy( 
    IElectrodeGroup * This,
    /* [retval][out] */ BSTR *pbstrName);


void __RPC_STUB IElectrodeGroup_GetName_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IElectrodeGroup_SetType_Proxy( 
    IElectrodeGroup * This,
    /* [in] */ EElectrodeGroupType eType);


void __RPC_STUB IElectrodeGroup_SetType_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IElectrodeGroup_GetType_Proxy( 
    IElectrodeGroup * This,
    /* [retval][out] */ EElectrodeGroupType *peType);


void __RPC_STUB IElectrodeGroup_GetType_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IElectrodeGroup_SetRowCount_Proxy( 
    IElectrodeGroup * This,
    /* [in] */ INT iRowCount);


void __RPC_STUB IElectrodeGroup_SetRowCount_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IElectrodeGroup_GetRowCount_Proxy( 
    IElectrodeGroup * This,
    /* [retval][out] */ INT *piRowCount);


void __RPC_STUB IElectrodeGroup_GetRowCount_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IElectrodeGroup_SetColCount_Proxy( 
    IElectrodeGroup * This,
    /* [in] */ INT iColCount);


void __RPC_STUB IElectrodeGroup_SetColCount_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IElectrodeGroup_GetColCount_Proxy( 
    IElectrodeGroup * This,
    /* [retval][out] */ INT *piColCount);


void __RPC_STUB IElectrodeGroup_GetColCount_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IElectrodeGroup_SetNameSequence_Proxy( 
    IElectrodeGroup * This,
    /* [in] */ EElectrodeGroupSequence eSequence);


void __RPC_STUB IElectrodeGroup_SetNameSequence_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IElectrodeGroup_GetNameSequence_Proxy( 
    IElectrodeGroup * This,
    /* [retval][out] */ EElectrodeGroupSequence *peSequence);


void __RPC_STUB IElectrodeGroup_GetNameSequence_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IElectrodeGroup_SetOriginPoint_Proxy( 
    IElectrodeGroup * This,
    /* [in] */ EElectrodeGroupOriginPoint eOrigin);


void __RPC_STUB IElectrodeGroup_SetOriginPoint_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IElectrodeGroup_GetOriginPoint_Proxy( 
    IElectrodeGroup * This,
    /* [retval][out] */ EElectrodeGroupOriginPoint *peOrigin);


void __RPC_STUB IElectrodeGroup_GetOriginPoint_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IElectrodeGroup_SetInterDistance_Proxy( 
    IElectrodeGroup * This,
    /* [in] */ DOUBLE dInterDistance);


void __RPC_STUB IElectrodeGroup_SetInterDistance_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IElectrodeGroup_GetInterDistance_Proxy( 
    IElectrodeGroup * This,
    /* [retval][out] */ DOUBLE *pdInterDistance);


void __RPC_STUB IElectrodeGroup_GetInterDistance_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IElectrodeGroup_SetContactSize_Proxy( 
    IElectrodeGroup * This,
    /* [in] */ DOUBLE dContactSize);


void __RPC_STUB IElectrodeGroup_SetContactSize_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IElectrodeGroup_GetContactSize_Proxy( 
    IElectrodeGroup * This,
    /* [retval][out] */ DOUBLE *pdContactSize);


void __RPC_STUB IElectrodeGroup_GetContactSize_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IElectrodeGroup_SetColor_Proxy( 
    IElectrodeGroup * This,
    /* [in] */ OLE_COLOR oclrColor);


void __RPC_STUB IElectrodeGroup_SetColor_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IElectrodeGroup_GetColor_Proxy( 
    IElectrodeGroup * This,
    /* [retval][out] */ OLE_COLOR *poclrColor);


void __RPC_STUB IElectrodeGroup_GetColor_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IElectrodeGroup_SetElectrodeStatus_Proxy( 
    IElectrodeGroup * This,
    /* [in] */ INT iRow,
    /* [in] */ INT iCol,
    /* [in] */ EElectrodeUsageStatus eStatus);


void __RPC_STUB IElectrodeGroup_SetElectrodeStatus_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IElectrodeGroup_GetElectrodeStatus_Proxy( 
    IElectrodeGroup * This,
    /* [in] */ INT iRow,
    /* [in] */ INT iCol,
    /* [retval][out] */ EElectrodeUsageStatus *peStatus);


void __RPC_STUB IElectrodeGroup_GetElectrodeStatus_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IElectrodeGroup_GetElectrodeCount_Proxy( 
    IElectrodeGroup * This,
    /* [retval][out] */ INT *piElectrodeCount);


void __RPC_STUB IElectrodeGroup_GetElectrodeCount_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IElectrodeGroup_GetElectrode_Proxy( 
    IElectrodeGroup * This,
    /* [in] */ INT iIndex,
    /* [retval][out] */ IElectrode **ppElectrode);


void __RPC_STUB IElectrodeGroup_GetElectrode_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IElectrodeGroup_Init_Proxy( 
    IElectrodeGroup * This,
    /* [in] */ IElectrodeGroup *pElectrodeGroup);


void __RPC_STUB IElectrodeGroup_Init_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IElectrodeGroup_Reset_Proxy( 
    IElectrodeGroup * This);


void __RPC_STUB IElectrodeGroup_Reset_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IElectrodeGroup_INTERFACE_DEFINED__ */


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


