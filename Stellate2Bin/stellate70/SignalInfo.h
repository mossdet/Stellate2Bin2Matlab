

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 6.00.0366 */
/* at Tue May 18 13:58:11 2010
 */
/* Compiler settings for g:\Develop\Harm700\MLSample\ComSignalFile\SignalFile\SignalInfo.idl:
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

#ifndef __SignalInfo_h__
#define __SignalInfo_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __ISignalInfo_FWD_DEFINED__
#define __ISignalInfo_FWD_DEFINED__
typedef interface ISignalInfo ISignalInfo;
#endif 	/* __ISignalInfo_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"
#include "SignalFileDef.h"
#include "FileInfo.h"
#include "PatientInfo.h"
#include "PhysicalMontage.h"
#include "RecordingCalibration.h"
#include "EventGroup.h"
#include "EventItem.h"
#include "AssociationInfo.h"

#ifdef __cplusplus
extern "C"{
#endif 

void * __RPC_USER MIDL_user_allocate(size_t);
void __RPC_USER MIDL_user_free( void * ); 

#ifndef __ISignalInfo_INTERFACE_DEFINED__
#define __ISignalInfo_INTERFACE_DEFINED__

/* interface ISignalInfo */
/* [unique][nonextensible][dual][helpstring][version][uuid][object] */ 


EXTERN_C const IID IID_ISignalInfo;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("72907AA2-6554-4ba9-848B-DEFFE5676058")
    ISignalInfo : public IDispatch
    {
    public:
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetFileInfo( 
            /* [retval][out] */ IFileInfo **ppFileInfo) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE UpdateFileInfo( 
            /* [in] */ IFileInfo *pFileInfo) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetPatientInfo( 
            /* [retval][out] */ IPatientInfo **ppPatientInfo) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE UpdatePatientInfo( 
            /* [in] */ IPatientInfo *pPatientInfo) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetPhysicalMontage( 
            /* [retval][out] */ IPhysicalMontage **ppPhysicalMontage) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE UpdatePhysicalMontage( 
            /* [in] */ IPhysicalMontage *pPhysicalMontage) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetRecordingCalibration( 
            /* [retval][out] */ IRecordingCalibration **ppRecordingCalibration) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE UpdateRecordingCalibration( 
            /* [in] */ IRecordingCalibration *pRecordingCalibration) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE AddEventGroup( 
            /* [in] */ BSTR bstrID,
            /* [in] */ BSTR bstrName,
            /* [in] */ BSTR bstrDesc,
            /* [in] */ EGroupType eType,
            /* [in] */ EGroupExtent eExtent,
            /* [in] */ EGroupAccess eAccess,
            /* [in] */ OLE_COLOR clrColor,
            /* [in] */ EGroupChannelType eGroupChannelType,
            /* [in] */ EVisibilityStatus eVisibility,
            /* [in] */ EItemNameType eItemNameType) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE InsertEventGroup( 
            /* [in] */ INT iIndex,
            /* [in] */ BSTR bstrID,
            /* [in] */ BSTR bstrName,
            /* [in] */ BSTR bstrDesc,
            /* [in] */ EGroupType eType,
            /* [in] */ EGroupExtent eExtent,
            /* [in] */ EGroupAccess eAccess,
            /* [in] */ OLE_COLOR clrColor,
            /* [in] */ EGroupChannelType eGroupChannelType,
            /* [in] */ EVisibilityStatus eVisibility,
            /* [in] */ EItemNameType eItemNameType) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE UpdateEventGroup( 
            /* [in] */ INT iIndex,
            /* [in] */ IEventGroup *pEventGroup) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE DeleteEventGroup( 
            /* [in] */ INT iIndex) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetEventGroupCount( 
            /* [retval][out] */ INT *piCount) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetGroupIDStr( 
            /* [in] */ EGroups eGroup,
            /* [retval][out] */ BSTR *pbstrGroupId) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetEventGroupIndexByID( 
            /* [in] */ BSTR bstrID,
            /* [retval][out] */ INT *piIndex) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetEventGroupIndexByName( 
            /* [in] */ BSTR bstrName,
            /* [retval][out] */ INT *piIndex) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetEventGroup( 
            /* [in] */ INT iIndex,
            /* [retval][out] */ IEventGroup **ppEventGroup) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE AddEventItem( 
            /* [in] */ BSTR bstrName,
            /* [in] */ BSTR bstrDesc,
            /* [in] */ DATE dateStartTime,
            /* [in] */ LONG lStartSample,
            /* [in] */ DOUBLE dTimeLength,
            /* [in] */ LONG lSampleLength,
            /* [in] */ IEventGroup *pEventGroup,
            /* [in] */ BSTR bstrChannel,
            /* [in] */ OLE_COLOR clrColor,
            /* [in] */ EVisibilityStatus eVisibility) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE InsertEventItem( 
            /* [in] */ INT iIndex,
            /* [in] */ BSTR bstrName,
            /* [in] */ BSTR bstrDesc,
            /* [in] */ DATE dateStartTime,
            /* [in] */ LONG lStartSample,
            /* [in] */ DOUBLE dTimeLength,
            /* [in] */ LONG lSampleLength,
            /* [in] */ IEventGroup *pEventGroup,
            /* [in] */ BSTR bstrChannel,
            /* [in] */ OLE_COLOR clrColor,
            /* [in] */ EVisibilityStatus eVisibility) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE UpdateEventItem( 
            /* [in] */ INT iIndex,
            /* [in] */ IEventItem *pEventItem) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE DeleteEventItem( 
            /* [in] */ INT iIndex) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetEventItemCount( 
            /* [retval][out] */ INT *piCount) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetEventItemIndexByOrdinal( 
            /* [in] */ LONG lOrdinal,
            /* [retval][out] */ INT *piIndex) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetEventItem( 
            /* [in] */ INT iIndex,
            /* [retval][out] */ IEventItem **ppEventItem) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Init( 
            /* [in] */ ISignalInfo *pSignalInfo) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Reset( void) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetAssociationInfo( 
            /* [retval][out] */ IAssociationInfo **ppAssociationInfo) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISignalInfoVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISignalInfo * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISignalInfo * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISignalInfo * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ISignalInfo * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ISignalInfo * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ISignalInfo * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ISignalInfo * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetFileInfo )( 
            ISignalInfo * This,
            /* [retval][out] */ IFileInfo **ppFileInfo);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *UpdateFileInfo )( 
            ISignalInfo * This,
            /* [in] */ IFileInfo *pFileInfo);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetPatientInfo )( 
            ISignalInfo * This,
            /* [retval][out] */ IPatientInfo **ppPatientInfo);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *UpdatePatientInfo )( 
            ISignalInfo * This,
            /* [in] */ IPatientInfo *pPatientInfo);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetPhysicalMontage )( 
            ISignalInfo * This,
            /* [retval][out] */ IPhysicalMontage **ppPhysicalMontage);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *UpdatePhysicalMontage )( 
            ISignalInfo * This,
            /* [in] */ IPhysicalMontage *pPhysicalMontage);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetRecordingCalibration )( 
            ISignalInfo * This,
            /* [retval][out] */ IRecordingCalibration **ppRecordingCalibration);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *UpdateRecordingCalibration )( 
            ISignalInfo * This,
            /* [in] */ IRecordingCalibration *pRecordingCalibration);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *AddEventGroup )( 
            ISignalInfo * This,
            /* [in] */ BSTR bstrID,
            /* [in] */ BSTR bstrName,
            /* [in] */ BSTR bstrDesc,
            /* [in] */ EGroupType eType,
            /* [in] */ EGroupExtent eExtent,
            /* [in] */ EGroupAccess eAccess,
            /* [in] */ OLE_COLOR clrColor,
            /* [in] */ EGroupChannelType eGroupChannelType,
            /* [in] */ EVisibilityStatus eVisibility,
            /* [in] */ EItemNameType eItemNameType);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *InsertEventGroup )( 
            ISignalInfo * This,
            /* [in] */ INT iIndex,
            /* [in] */ BSTR bstrID,
            /* [in] */ BSTR bstrName,
            /* [in] */ BSTR bstrDesc,
            /* [in] */ EGroupType eType,
            /* [in] */ EGroupExtent eExtent,
            /* [in] */ EGroupAccess eAccess,
            /* [in] */ OLE_COLOR clrColor,
            /* [in] */ EGroupChannelType eGroupChannelType,
            /* [in] */ EVisibilityStatus eVisibility,
            /* [in] */ EItemNameType eItemNameType);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *UpdateEventGroup )( 
            ISignalInfo * This,
            /* [in] */ INT iIndex,
            /* [in] */ IEventGroup *pEventGroup);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *DeleteEventGroup )( 
            ISignalInfo * This,
            /* [in] */ INT iIndex);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetEventGroupCount )( 
            ISignalInfo * This,
            /* [retval][out] */ INT *piCount);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetGroupIDStr )( 
            ISignalInfo * This,
            /* [in] */ EGroups eGroup,
            /* [retval][out] */ BSTR *pbstrGroupId);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetEventGroupIndexByID )( 
            ISignalInfo * This,
            /* [in] */ BSTR bstrID,
            /* [retval][out] */ INT *piIndex);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetEventGroupIndexByName )( 
            ISignalInfo * This,
            /* [in] */ BSTR bstrName,
            /* [retval][out] */ INT *piIndex);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetEventGroup )( 
            ISignalInfo * This,
            /* [in] */ INT iIndex,
            /* [retval][out] */ IEventGroup **ppEventGroup);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *AddEventItem )( 
            ISignalInfo * This,
            /* [in] */ BSTR bstrName,
            /* [in] */ BSTR bstrDesc,
            /* [in] */ DATE dateStartTime,
            /* [in] */ LONG lStartSample,
            /* [in] */ DOUBLE dTimeLength,
            /* [in] */ LONG lSampleLength,
            /* [in] */ IEventGroup *pEventGroup,
            /* [in] */ BSTR bstrChannel,
            /* [in] */ OLE_COLOR clrColor,
            /* [in] */ EVisibilityStatus eVisibility);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *InsertEventItem )( 
            ISignalInfo * This,
            /* [in] */ INT iIndex,
            /* [in] */ BSTR bstrName,
            /* [in] */ BSTR bstrDesc,
            /* [in] */ DATE dateStartTime,
            /* [in] */ LONG lStartSample,
            /* [in] */ DOUBLE dTimeLength,
            /* [in] */ LONG lSampleLength,
            /* [in] */ IEventGroup *pEventGroup,
            /* [in] */ BSTR bstrChannel,
            /* [in] */ OLE_COLOR clrColor,
            /* [in] */ EVisibilityStatus eVisibility);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *UpdateEventItem )( 
            ISignalInfo * This,
            /* [in] */ INT iIndex,
            /* [in] */ IEventItem *pEventItem);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *DeleteEventItem )( 
            ISignalInfo * This,
            /* [in] */ INT iIndex);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetEventItemCount )( 
            ISignalInfo * This,
            /* [retval][out] */ INT *piCount);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetEventItemIndexByOrdinal )( 
            ISignalInfo * This,
            /* [in] */ LONG lOrdinal,
            /* [retval][out] */ INT *piIndex);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetEventItem )( 
            ISignalInfo * This,
            /* [in] */ INT iIndex,
            /* [retval][out] */ IEventItem **ppEventItem);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Init )( 
            ISignalInfo * This,
            /* [in] */ ISignalInfo *pSignalInfo);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Reset )( 
            ISignalInfo * This);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetAssociationInfo )( 
            ISignalInfo * This,
            /* [retval][out] */ IAssociationInfo **ppAssociationInfo);
        
        END_INTERFACE
    } ISignalInfoVtbl;

    interface ISignalInfo
    {
        CONST_VTBL struct ISignalInfoVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISignalInfo_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ISignalInfo_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ISignalInfo_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ISignalInfo_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define ISignalInfo_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define ISignalInfo_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define ISignalInfo_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define ISignalInfo_GetFileInfo(This,ppFileInfo)	\
    (This)->lpVtbl -> GetFileInfo(This,ppFileInfo)

#define ISignalInfo_UpdateFileInfo(This,pFileInfo)	\
    (This)->lpVtbl -> UpdateFileInfo(This,pFileInfo)

#define ISignalInfo_GetPatientInfo(This,ppPatientInfo)	\
    (This)->lpVtbl -> GetPatientInfo(This,ppPatientInfo)

#define ISignalInfo_UpdatePatientInfo(This,pPatientInfo)	\
    (This)->lpVtbl -> UpdatePatientInfo(This,pPatientInfo)

#define ISignalInfo_GetPhysicalMontage(This,ppPhysicalMontage)	\
    (This)->lpVtbl -> GetPhysicalMontage(This,ppPhysicalMontage)

#define ISignalInfo_UpdatePhysicalMontage(This,pPhysicalMontage)	\
    (This)->lpVtbl -> UpdatePhysicalMontage(This,pPhysicalMontage)

#define ISignalInfo_GetRecordingCalibration(This,ppRecordingCalibration)	\
    (This)->lpVtbl -> GetRecordingCalibration(This,ppRecordingCalibration)

#define ISignalInfo_UpdateRecordingCalibration(This,pRecordingCalibration)	\
    (This)->lpVtbl -> UpdateRecordingCalibration(This,pRecordingCalibration)

#define ISignalInfo_AddEventGroup(This,bstrID,bstrName,bstrDesc,eType,eExtent,eAccess,clrColor,eGroupChannelType,eVisibility,eItemNameType)	\
    (This)->lpVtbl -> AddEventGroup(This,bstrID,bstrName,bstrDesc,eType,eExtent,eAccess,clrColor,eGroupChannelType,eVisibility,eItemNameType)

#define ISignalInfo_InsertEventGroup(This,iIndex,bstrID,bstrName,bstrDesc,eType,eExtent,eAccess,clrColor,eGroupChannelType,eVisibility,eItemNameType)	\
    (This)->lpVtbl -> InsertEventGroup(This,iIndex,bstrID,bstrName,bstrDesc,eType,eExtent,eAccess,clrColor,eGroupChannelType,eVisibility,eItemNameType)

#define ISignalInfo_UpdateEventGroup(This,iIndex,pEventGroup)	\
    (This)->lpVtbl -> UpdateEventGroup(This,iIndex,pEventGroup)

#define ISignalInfo_DeleteEventGroup(This,iIndex)	\
    (This)->lpVtbl -> DeleteEventGroup(This,iIndex)

#define ISignalInfo_GetEventGroupCount(This,piCount)	\
    (This)->lpVtbl -> GetEventGroupCount(This,piCount)

#define ISignalInfo_GetGroupIDStr(This,eGroup,pbstrGroupId)	\
    (This)->lpVtbl -> GetGroupIDStr(This,eGroup,pbstrGroupId)

#define ISignalInfo_GetEventGroupIndexByID(This,bstrID,piIndex)	\
    (This)->lpVtbl -> GetEventGroupIndexByID(This,bstrID,piIndex)

#define ISignalInfo_GetEventGroupIndexByName(This,bstrName,piIndex)	\
    (This)->lpVtbl -> GetEventGroupIndexByName(This,bstrName,piIndex)

#define ISignalInfo_GetEventGroup(This,iIndex,ppEventGroup)	\
    (This)->lpVtbl -> GetEventGroup(This,iIndex,ppEventGroup)

#define ISignalInfo_AddEventItem(This,bstrName,bstrDesc,dateStartTime,lStartSample,dTimeLength,lSampleLength,pEventGroup,bstrChannel,clrColor,eVisibility)	\
    (This)->lpVtbl -> AddEventItem(This,bstrName,bstrDesc,dateStartTime,lStartSample,dTimeLength,lSampleLength,pEventGroup,bstrChannel,clrColor,eVisibility)

#define ISignalInfo_InsertEventItem(This,iIndex,bstrName,bstrDesc,dateStartTime,lStartSample,dTimeLength,lSampleLength,pEventGroup,bstrChannel,clrColor,eVisibility)	\
    (This)->lpVtbl -> InsertEventItem(This,iIndex,bstrName,bstrDesc,dateStartTime,lStartSample,dTimeLength,lSampleLength,pEventGroup,bstrChannel,clrColor,eVisibility)

#define ISignalInfo_UpdateEventItem(This,iIndex,pEventItem)	\
    (This)->lpVtbl -> UpdateEventItem(This,iIndex,pEventItem)

#define ISignalInfo_DeleteEventItem(This,iIndex)	\
    (This)->lpVtbl -> DeleteEventItem(This,iIndex)

#define ISignalInfo_GetEventItemCount(This,piCount)	\
    (This)->lpVtbl -> GetEventItemCount(This,piCount)

#define ISignalInfo_GetEventItemIndexByOrdinal(This,lOrdinal,piIndex)	\
    (This)->lpVtbl -> GetEventItemIndexByOrdinal(This,lOrdinal,piIndex)

#define ISignalInfo_GetEventItem(This,iIndex,ppEventItem)	\
    (This)->lpVtbl -> GetEventItem(This,iIndex,ppEventItem)

#define ISignalInfo_Init(This,pSignalInfo)	\
    (This)->lpVtbl -> Init(This,pSignalInfo)

#define ISignalInfo_Reset(This)	\
    (This)->lpVtbl -> Reset(This)

#define ISignalInfo_GetAssociationInfo(This,ppAssociationInfo)	\
    (This)->lpVtbl -> GetAssociationInfo(This,ppAssociationInfo)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring] */ HRESULT STDMETHODCALLTYPE ISignalInfo_GetFileInfo_Proxy( 
    ISignalInfo * This,
    /* [retval][out] */ IFileInfo **ppFileInfo);


void __RPC_STUB ISignalInfo_GetFileInfo_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE ISignalInfo_UpdateFileInfo_Proxy( 
    ISignalInfo * This,
    /* [in] */ IFileInfo *pFileInfo);


void __RPC_STUB ISignalInfo_UpdateFileInfo_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE ISignalInfo_GetPatientInfo_Proxy( 
    ISignalInfo * This,
    /* [retval][out] */ IPatientInfo **ppPatientInfo);


void __RPC_STUB ISignalInfo_GetPatientInfo_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE ISignalInfo_UpdatePatientInfo_Proxy( 
    ISignalInfo * This,
    /* [in] */ IPatientInfo *pPatientInfo);


void __RPC_STUB ISignalInfo_UpdatePatientInfo_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE ISignalInfo_GetPhysicalMontage_Proxy( 
    ISignalInfo * This,
    /* [retval][out] */ IPhysicalMontage **ppPhysicalMontage);


void __RPC_STUB ISignalInfo_GetPhysicalMontage_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE ISignalInfo_UpdatePhysicalMontage_Proxy( 
    ISignalInfo * This,
    /* [in] */ IPhysicalMontage *pPhysicalMontage);


void __RPC_STUB ISignalInfo_UpdatePhysicalMontage_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE ISignalInfo_GetRecordingCalibration_Proxy( 
    ISignalInfo * This,
    /* [retval][out] */ IRecordingCalibration **ppRecordingCalibration);


void __RPC_STUB ISignalInfo_GetRecordingCalibration_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE ISignalInfo_UpdateRecordingCalibration_Proxy( 
    ISignalInfo * This,
    /* [in] */ IRecordingCalibration *pRecordingCalibration);


void __RPC_STUB ISignalInfo_UpdateRecordingCalibration_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE ISignalInfo_AddEventGroup_Proxy( 
    ISignalInfo * This,
    /* [in] */ BSTR bstrID,
    /* [in] */ BSTR bstrName,
    /* [in] */ BSTR bstrDesc,
    /* [in] */ EGroupType eType,
    /* [in] */ EGroupExtent eExtent,
    /* [in] */ EGroupAccess eAccess,
    /* [in] */ OLE_COLOR clrColor,
    /* [in] */ EGroupChannelType eGroupChannelType,
    /* [in] */ EVisibilityStatus eVisibility,
    /* [in] */ EItemNameType eItemNameType);


void __RPC_STUB ISignalInfo_AddEventGroup_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE ISignalInfo_InsertEventGroup_Proxy( 
    ISignalInfo * This,
    /* [in] */ INT iIndex,
    /* [in] */ BSTR bstrID,
    /* [in] */ BSTR bstrName,
    /* [in] */ BSTR bstrDesc,
    /* [in] */ EGroupType eType,
    /* [in] */ EGroupExtent eExtent,
    /* [in] */ EGroupAccess eAccess,
    /* [in] */ OLE_COLOR clrColor,
    /* [in] */ EGroupChannelType eGroupChannelType,
    /* [in] */ EVisibilityStatus eVisibility,
    /* [in] */ EItemNameType eItemNameType);


void __RPC_STUB ISignalInfo_InsertEventGroup_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE ISignalInfo_UpdateEventGroup_Proxy( 
    ISignalInfo * This,
    /* [in] */ INT iIndex,
    /* [in] */ IEventGroup *pEventGroup);


void __RPC_STUB ISignalInfo_UpdateEventGroup_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE ISignalInfo_DeleteEventGroup_Proxy( 
    ISignalInfo * This,
    /* [in] */ INT iIndex);


void __RPC_STUB ISignalInfo_DeleteEventGroup_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE ISignalInfo_GetEventGroupCount_Proxy( 
    ISignalInfo * This,
    /* [retval][out] */ INT *piCount);


void __RPC_STUB ISignalInfo_GetEventGroupCount_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE ISignalInfo_GetGroupIDStr_Proxy( 
    ISignalInfo * This,
    /* [in] */ EGroups eGroup,
    /* [retval][out] */ BSTR *pbstrGroupId);


void __RPC_STUB ISignalInfo_GetGroupIDStr_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE ISignalInfo_GetEventGroupIndexByID_Proxy( 
    ISignalInfo * This,
    /* [in] */ BSTR bstrID,
    /* [retval][out] */ INT *piIndex);


void __RPC_STUB ISignalInfo_GetEventGroupIndexByID_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE ISignalInfo_GetEventGroupIndexByName_Proxy( 
    ISignalInfo * This,
    /* [in] */ BSTR bstrName,
    /* [retval][out] */ INT *piIndex);


void __RPC_STUB ISignalInfo_GetEventGroupIndexByName_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE ISignalInfo_GetEventGroup_Proxy( 
    ISignalInfo * This,
    /* [in] */ INT iIndex,
    /* [retval][out] */ IEventGroup **ppEventGroup);


void __RPC_STUB ISignalInfo_GetEventGroup_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE ISignalInfo_AddEventItem_Proxy( 
    ISignalInfo * This,
    /* [in] */ BSTR bstrName,
    /* [in] */ BSTR bstrDesc,
    /* [in] */ DATE dateStartTime,
    /* [in] */ LONG lStartSample,
    /* [in] */ DOUBLE dTimeLength,
    /* [in] */ LONG lSampleLength,
    /* [in] */ IEventGroup *pEventGroup,
    /* [in] */ BSTR bstrChannel,
    /* [in] */ OLE_COLOR clrColor,
    /* [in] */ EVisibilityStatus eVisibility);


void __RPC_STUB ISignalInfo_AddEventItem_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE ISignalInfo_InsertEventItem_Proxy( 
    ISignalInfo * This,
    /* [in] */ INT iIndex,
    /* [in] */ BSTR bstrName,
    /* [in] */ BSTR bstrDesc,
    /* [in] */ DATE dateStartTime,
    /* [in] */ LONG lStartSample,
    /* [in] */ DOUBLE dTimeLength,
    /* [in] */ LONG lSampleLength,
    /* [in] */ IEventGroup *pEventGroup,
    /* [in] */ BSTR bstrChannel,
    /* [in] */ OLE_COLOR clrColor,
    /* [in] */ EVisibilityStatus eVisibility);


void __RPC_STUB ISignalInfo_InsertEventItem_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE ISignalInfo_UpdateEventItem_Proxy( 
    ISignalInfo * This,
    /* [in] */ INT iIndex,
    /* [in] */ IEventItem *pEventItem);


void __RPC_STUB ISignalInfo_UpdateEventItem_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE ISignalInfo_DeleteEventItem_Proxy( 
    ISignalInfo * This,
    /* [in] */ INT iIndex);


void __RPC_STUB ISignalInfo_DeleteEventItem_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE ISignalInfo_GetEventItemCount_Proxy( 
    ISignalInfo * This,
    /* [retval][out] */ INT *piCount);


void __RPC_STUB ISignalInfo_GetEventItemCount_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE ISignalInfo_GetEventItemIndexByOrdinal_Proxy( 
    ISignalInfo * This,
    /* [in] */ LONG lOrdinal,
    /* [retval][out] */ INT *piIndex);


void __RPC_STUB ISignalInfo_GetEventItemIndexByOrdinal_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE ISignalInfo_GetEventItem_Proxy( 
    ISignalInfo * This,
    /* [in] */ INT iIndex,
    /* [retval][out] */ IEventItem **ppEventItem);


void __RPC_STUB ISignalInfo_GetEventItem_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE ISignalInfo_Init_Proxy( 
    ISignalInfo * This,
    /* [in] */ ISignalInfo *pSignalInfo);


void __RPC_STUB ISignalInfo_Init_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE ISignalInfo_Reset_Proxy( 
    ISignalInfo * This);


void __RPC_STUB ISignalInfo_Reset_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE ISignalInfo_GetAssociationInfo_Proxy( 
    ISignalInfo * This,
    /* [retval][out] */ IAssociationInfo **ppAssociationInfo);


void __RPC_STUB ISignalInfo_GetAssociationInfo_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ISignalInfo_INTERFACE_DEFINED__ */


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


