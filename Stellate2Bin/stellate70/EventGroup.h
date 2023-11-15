

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 6.00.0366 */
/* at Tue May 18 13:59:24 2010
 */
/* Compiler settings for g:\Develop\Harm700\MLSample\ComSignalFile\SignalFile\EventGroup.idl:
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

#ifndef __EventGroup_h__
#define __EventGroup_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __IEventGroup_FWD_DEFINED__
#define __IEventGroup_FWD_DEFINED__
typedef interface IEventGroup IEventGroup;
#endif 	/* __IEventGroup_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"
#include "SignalFileDef.h"
#include "LogicalMontage.h"

#ifdef __cplusplus
extern "C"{
#endif 

void * __RPC_USER MIDL_user_allocate(size_t);
void __RPC_USER MIDL_user_free( void * ); 

#ifndef __IEventGroup_INTERFACE_DEFINED__
#define __IEventGroup_INTERFACE_DEFINED__

/* interface IEventGroup */
/* [unique][nonextensible][dual][helpstring][version][uuid][object] */ 


EXTERN_C const IID IID_IEventGroup;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("5818F2E6-5503-44ce-A4A6-4FB30F68AEF9")
    IEventGroup : public IDispatch
    {
    public:
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SetID( 
            /* [in] */ BSTR bstrID) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetID( 
            /* [retval][out] */ BSTR *pbstrID) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SetName( 
            /* [in] */ BSTR bstrName) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetName( 
            /* [retval][out] */ BSTR *pbstrName) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SetDescription( 
            /* [in] */ BSTR bstrDesc) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetDescription( 
            /* [retval][out] */ BSTR *pbstrDesc) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SetType( 
            /* [in] */ EGroupType eType) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetType( 
            /* [retval][out] */ EGroupType *peType) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SetExtent( 
            /* [in] */ EGroupExtent eExtent) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetExtent( 
            /* [retval][out] */ EGroupExtent *peExtent) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SetAccess( 
            /* [in] */ EGroupAccess eAccess) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetAccess( 
            /* [retval][out] */ EGroupAccess *peAccess) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SetColor( 
            /* [in] */ OLE_COLOR oclrColor) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetColor( 
            /* [retval][out] */ OLE_COLOR *poclrColor) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SetChannelType( 
            /* [in] */ EGroupChannelType eGroupChannelType) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetChannelType( 
            /* [retval][out] */ EGroupChannelType *peGroupChannelType) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetMarkingTraceTypesCount( 
            /* [retval][out] */ INT *piCount) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetMarkingTraceType( 
            /* [in] */ INT iTraceTypeIndex,
            /* [retval][out] */ EChannelType *peType) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE AddMarkingTraceType( 
            /* [in] */ EChannelType eType) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE DeleteMarkingTraceType( 
            /* [in] */ INT iTraceTypeIndex) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetMarkingChannelLabelsCount( 
            /* [in] */ INT iTraceTypeIndex,
            /* [retval][out] */ INT *piCount) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetMarkingChannelLabel( 
            /* [in] */ INT iTraceTypeIndex,
            /* [in] */ INT iLabelIndex,
            /* [retval][out] */ BSTR *pbstrLabel) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE AddMarkingChannelLabel( 
            /* [in] */ INT iTraceTypeIndex,
            /* [in] */ BSTR bstrLabel) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE DeleteMarkingChannelLabel( 
            /* [in] */ INT iTraceTypeIndex,
            /* [in] */ INT iLabelIndex) = 0;
        
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
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SetItemNameType( 
            /* [in] */ EItemNameType eItemNameType) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetItemNameType( 
            /* [retval][out] */ EItemNameType *eItemNameType) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetDefaultItemNamesCount( 
            /* [retval][out] */ INT *piCount) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetDefaultItemName( 
            /* [in] */ INT iIndex,
            /* [retval][out] */ BSTR *pbstrName) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetDefaultItemColor( 
            /* [in] */ INT iIndex,
            /* [retval][out] */ OLE_COLOR *poclrColor) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SetDefaultItem( 
            /* [in] */ INT iIndex,
            /* [in] */ BSTR bstrName,
            /* [in] */ OLE_COLOR oclrColor) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE InsertDefaultItem( 
            /* [in] */ INT iIndex,
            /* [in] */ BSTR bstrName,
            /* [in] */ OLE_COLOR oclrColor) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE AddDefaultItem( 
            /* [in] */ BSTR bstrName,
            /* [in] */ OLE_COLOR oclrColor) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE DeleteDefaultItem( 
            /* [in] */ INT iIndex) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SetItemDuration( 
            /* [in] */ DOUBLE dDefault,
            /* [in] */ DOUBLE dMinimum,
            /* [in] */ DOUBLE dMaximum) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetDefaultItemDuration( 
            /* [retval][out] */ DOUBLE *pdDuration) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetMinimumItemDuration( 
            /* [retval][out] */ DOUBLE *pdDuration) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetMaximumItemDuration( 
            /* [retval][out] */ DOUBLE *pdDuration) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE AddGroupProperty( 
            /* [in] */ BSTR bstrKey,
            /* [in] */ BSTR bstrValue,
            /* [in] */ BSTR bstrDesc) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE DeleteGroupProperty( 
            /* [in] */ BSTR bstrKey) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetGroupPropertyCount( 
            /* [retval][out] */ INT *piCount) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetGroupPropertyIndex( 
            /* [in] */ BSTR bstrKey,
            /* [retval][out] */ INT *piIndex) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetGroupPropertyKey( 
            /* [in] */ INT iIndex,
            /* [retval][out] */ BSTR *pbstrKey) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SetGroupPropertyValue( 
            /* [in] */ BSTR bstrKey,
            /* [in] */ BSTR bstrValue) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetGroupPropertyValue( 
            /* [in] */ BSTR bstrKey,
            /* [retval][out] */ BSTR *pbstrValue) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SetGroupPropertyDescription( 
            /* [in] */ BSTR bstrKey,
            /* [in] */ BSTR bstrDesc) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetGroupPropertyDescription( 
            /* [in] */ BSTR bstrKey,
            /* [retval][out] */ BSTR *pbstrDesc) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE AddItemProperty( 
            /* [in] */ BSTR bstrKey,
            /* [in] */ BSTR bstrDesc) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE DeleteItemProperty( 
            /* [in] */ BSTR bstrKey) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetItemPropertyCount( 
            /* [retval][out] */ INT *piCount) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetItemPropertyIndex( 
            /* [in] */ BSTR bstrKey,
            /* [retval][out] */ INT *piIndex) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetItemPropertyKey( 
            /* [in] */ INT iIndex,
            /* [retval][out] */ BSTR *pbstrKey) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SetItemPropertyDescription( 
            /* [in] */ BSTR bstrKey,
            /* [in] */ BSTR bstrDesc) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetItemPropertyDescription( 
            /* [in] */ BSTR bstrKey,
            /* [retval][out] */ BSTR *pbstrDesc) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Init( 
            /* [in] */ IEventGroup *pEventGroup) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Reset( void) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IEventGroupVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IEventGroup * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IEventGroup * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IEventGroup * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IEventGroup * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IEventGroup * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IEventGroup * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IEventGroup * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetID )( 
            IEventGroup * This,
            /* [in] */ BSTR bstrID);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetID )( 
            IEventGroup * This,
            /* [retval][out] */ BSTR *pbstrID);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetName )( 
            IEventGroup * This,
            /* [in] */ BSTR bstrName);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetName )( 
            IEventGroup * This,
            /* [retval][out] */ BSTR *pbstrName);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetDescription )( 
            IEventGroup * This,
            /* [in] */ BSTR bstrDesc);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetDescription )( 
            IEventGroup * This,
            /* [retval][out] */ BSTR *pbstrDesc);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetType )( 
            IEventGroup * This,
            /* [in] */ EGroupType eType);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetType )( 
            IEventGroup * This,
            /* [retval][out] */ EGroupType *peType);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetExtent )( 
            IEventGroup * This,
            /* [in] */ EGroupExtent eExtent);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetExtent )( 
            IEventGroup * This,
            /* [retval][out] */ EGroupExtent *peExtent);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetAccess )( 
            IEventGroup * This,
            /* [in] */ EGroupAccess eAccess);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetAccess )( 
            IEventGroup * This,
            /* [retval][out] */ EGroupAccess *peAccess);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetColor )( 
            IEventGroup * This,
            /* [in] */ OLE_COLOR oclrColor);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetColor )( 
            IEventGroup * This,
            /* [retval][out] */ OLE_COLOR *poclrColor);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetChannelType )( 
            IEventGroup * This,
            /* [in] */ EGroupChannelType eGroupChannelType);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetChannelType )( 
            IEventGroup * This,
            /* [retval][out] */ EGroupChannelType *peGroupChannelType);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetMarkingTraceTypesCount )( 
            IEventGroup * This,
            /* [retval][out] */ INT *piCount);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetMarkingTraceType )( 
            IEventGroup * This,
            /* [in] */ INT iTraceTypeIndex,
            /* [retval][out] */ EChannelType *peType);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *AddMarkingTraceType )( 
            IEventGroup * This,
            /* [in] */ EChannelType eType);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *DeleteMarkingTraceType )( 
            IEventGroup * This,
            /* [in] */ INT iTraceTypeIndex);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetMarkingChannelLabelsCount )( 
            IEventGroup * This,
            /* [in] */ INT iTraceTypeIndex,
            /* [retval][out] */ INT *piCount);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetMarkingChannelLabel )( 
            IEventGroup * This,
            /* [in] */ INT iTraceTypeIndex,
            /* [in] */ INT iLabelIndex,
            /* [retval][out] */ BSTR *pbstrLabel);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *AddMarkingChannelLabel )( 
            IEventGroup * This,
            /* [in] */ INT iTraceTypeIndex,
            /* [in] */ BSTR bstrLabel);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *DeleteMarkingChannelLabel )( 
            IEventGroup * This,
            /* [in] */ INT iTraceTypeIndex,
            /* [in] */ INT iLabelIndex);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetVisibility )( 
            IEventGroup * This,
            /* [in] */ EVisibilityStatus eVisibility);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetVisibility )( 
            IEventGroup * This,
            /* [retval][out] */ EVisibilityStatus *peVisibility);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetChangeStatus )( 
            IEventGroup * This,
            /* [in] */ EChangeStatus eChangeStatus);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetChangeStatus )( 
            IEventGroup * This,
            /* [retval][out] */ EChangeStatus *peChangeStatus);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetOrdinal )( 
            IEventGroup * This,
            /* [retval][out] */ LONG *plOrdinal);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetItemNameType )( 
            IEventGroup * This,
            /* [in] */ EItemNameType eItemNameType);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetItemNameType )( 
            IEventGroup * This,
            /* [retval][out] */ EItemNameType *eItemNameType);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetDefaultItemNamesCount )( 
            IEventGroup * This,
            /* [retval][out] */ INT *piCount);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetDefaultItemName )( 
            IEventGroup * This,
            /* [in] */ INT iIndex,
            /* [retval][out] */ BSTR *pbstrName);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetDefaultItemColor )( 
            IEventGroup * This,
            /* [in] */ INT iIndex,
            /* [retval][out] */ OLE_COLOR *poclrColor);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetDefaultItem )( 
            IEventGroup * This,
            /* [in] */ INT iIndex,
            /* [in] */ BSTR bstrName,
            /* [in] */ OLE_COLOR oclrColor);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *InsertDefaultItem )( 
            IEventGroup * This,
            /* [in] */ INT iIndex,
            /* [in] */ BSTR bstrName,
            /* [in] */ OLE_COLOR oclrColor);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *AddDefaultItem )( 
            IEventGroup * This,
            /* [in] */ BSTR bstrName,
            /* [in] */ OLE_COLOR oclrColor);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *DeleteDefaultItem )( 
            IEventGroup * This,
            /* [in] */ INT iIndex);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetItemDuration )( 
            IEventGroup * This,
            /* [in] */ DOUBLE dDefault,
            /* [in] */ DOUBLE dMinimum,
            /* [in] */ DOUBLE dMaximum);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetDefaultItemDuration )( 
            IEventGroup * This,
            /* [retval][out] */ DOUBLE *pdDuration);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetMinimumItemDuration )( 
            IEventGroup * This,
            /* [retval][out] */ DOUBLE *pdDuration);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetMaximumItemDuration )( 
            IEventGroup * This,
            /* [retval][out] */ DOUBLE *pdDuration);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *AddGroupProperty )( 
            IEventGroup * This,
            /* [in] */ BSTR bstrKey,
            /* [in] */ BSTR bstrValue,
            /* [in] */ BSTR bstrDesc);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *DeleteGroupProperty )( 
            IEventGroup * This,
            /* [in] */ BSTR bstrKey);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetGroupPropertyCount )( 
            IEventGroup * This,
            /* [retval][out] */ INT *piCount);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetGroupPropertyIndex )( 
            IEventGroup * This,
            /* [in] */ BSTR bstrKey,
            /* [retval][out] */ INT *piIndex);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetGroupPropertyKey )( 
            IEventGroup * This,
            /* [in] */ INT iIndex,
            /* [retval][out] */ BSTR *pbstrKey);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetGroupPropertyValue )( 
            IEventGroup * This,
            /* [in] */ BSTR bstrKey,
            /* [in] */ BSTR bstrValue);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetGroupPropertyValue )( 
            IEventGroup * This,
            /* [in] */ BSTR bstrKey,
            /* [retval][out] */ BSTR *pbstrValue);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetGroupPropertyDescription )( 
            IEventGroup * This,
            /* [in] */ BSTR bstrKey,
            /* [in] */ BSTR bstrDesc);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetGroupPropertyDescription )( 
            IEventGroup * This,
            /* [in] */ BSTR bstrKey,
            /* [retval][out] */ BSTR *pbstrDesc);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *AddItemProperty )( 
            IEventGroup * This,
            /* [in] */ BSTR bstrKey,
            /* [in] */ BSTR bstrDesc);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *DeleteItemProperty )( 
            IEventGroup * This,
            /* [in] */ BSTR bstrKey);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetItemPropertyCount )( 
            IEventGroup * This,
            /* [retval][out] */ INT *piCount);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetItemPropertyIndex )( 
            IEventGroup * This,
            /* [in] */ BSTR bstrKey,
            /* [retval][out] */ INT *piIndex);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetItemPropertyKey )( 
            IEventGroup * This,
            /* [in] */ INT iIndex,
            /* [retval][out] */ BSTR *pbstrKey);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetItemPropertyDescription )( 
            IEventGroup * This,
            /* [in] */ BSTR bstrKey,
            /* [in] */ BSTR bstrDesc);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetItemPropertyDescription )( 
            IEventGroup * This,
            /* [in] */ BSTR bstrKey,
            /* [retval][out] */ BSTR *pbstrDesc);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Init )( 
            IEventGroup * This,
            /* [in] */ IEventGroup *pEventGroup);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Reset )( 
            IEventGroup * This);
        
        END_INTERFACE
    } IEventGroupVtbl;

    interface IEventGroup
    {
        CONST_VTBL struct IEventGroupVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IEventGroup_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IEventGroup_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IEventGroup_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IEventGroup_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define IEventGroup_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define IEventGroup_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define IEventGroup_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define IEventGroup_SetID(This,bstrID)	\
    (This)->lpVtbl -> SetID(This,bstrID)

#define IEventGroup_GetID(This,pbstrID)	\
    (This)->lpVtbl -> GetID(This,pbstrID)

#define IEventGroup_SetName(This,bstrName)	\
    (This)->lpVtbl -> SetName(This,bstrName)

#define IEventGroup_GetName(This,pbstrName)	\
    (This)->lpVtbl -> GetName(This,pbstrName)

#define IEventGroup_SetDescription(This,bstrDesc)	\
    (This)->lpVtbl -> SetDescription(This,bstrDesc)

#define IEventGroup_GetDescription(This,pbstrDesc)	\
    (This)->lpVtbl -> GetDescription(This,pbstrDesc)

#define IEventGroup_SetType(This,eType)	\
    (This)->lpVtbl -> SetType(This,eType)

#define IEventGroup_GetType(This,peType)	\
    (This)->lpVtbl -> GetType(This,peType)

#define IEventGroup_SetExtent(This,eExtent)	\
    (This)->lpVtbl -> SetExtent(This,eExtent)

#define IEventGroup_GetExtent(This,peExtent)	\
    (This)->lpVtbl -> GetExtent(This,peExtent)

#define IEventGroup_SetAccess(This,eAccess)	\
    (This)->lpVtbl -> SetAccess(This,eAccess)

#define IEventGroup_GetAccess(This,peAccess)	\
    (This)->lpVtbl -> GetAccess(This,peAccess)

#define IEventGroup_SetColor(This,oclrColor)	\
    (This)->lpVtbl -> SetColor(This,oclrColor)

#define IEventGroup_GetColor(This,poclrColor)	\
    (This)->lpVtbl -> GetColor(This,poclrColor)

#define IEventGroup_SetChannelType(This,eGroupChannelType)	\
    (This)->lpVtbl -> SetChannelType(This,eGroupChannelType)

#define IEventGroup_GetChannelType(This,peGroupChannelType)	\
    (This)->lpVtbl -> GetChannelType(This,peGroupChannelType)

#define IEventGroup_GetMarkingTraceTypesCount(This,piCount)	\
    (This)->lpVtbl -> GetMarkingTraceTypesCount(This,piCount)

#define IEventGroup_GetMarkingTraceType(This,iTraceTypeIndex,peType)	\
    (This)->lpVtbl -> GetMarkingTraceType(This,iTraceTypeIndex,peType)

#define IEventGroup_AddMarkingTraceType(This,eType)	\
    (This)->lpVtbl -> AddMarkingTraceType(This,eType)

#define IEventGroup_DeleteMarkingTraceType(This,iTraceTypeIndex)	\
    (This)->lpVtbl -> DeleteMarkingTraceType(This,iTraceTypeIndex)

#define IEventGroup_GetMarkingChannelLabelsCount(This,iTraceTypeIndex,piCount)	\
    (This)->lpVtbl -> GetMarkingChannelLabelsCount(This,iTraceTypeIndex,piCount)

#define IEventGroup_GetMarkingChannelLabel(This,iTraceTypeIndex,iLabelIndex,pbstrLabel)	\
    (This)->lpVtbl -> GetMarkingChannelLabel(This,iTraceTypeIndex,iLabelIndex,pbstrLabel)

#define IEventGroup_AddMarkingChannelLabel(This,iTraceTypeIndex,bstrLabel)	\
    (This)->lpVtbl -> AddMarkingChannelLabel(This,iTraceTypeIndex,bstrLabel)

#define IEventGroup_DeleteMarkingChannelLabel(This,iTraceTypeIndex,iLabelIndex)	\
    (This)->lpVtbl -> DeleteMarkingChannelLabel(This,iTraceTypeIndex,iLabelIndex)

#define IEventGroup_SetVisibility(This,eVisibility)	\
    (This)->lpVtbl -> SetVisibility(This,eVisibility)

#define IEventGroup_GetVisibility(This,peVisibility)	\
    (This)->lpVtbl -> GetVisibility(This,peVisibility)

#define IEventGroup_SetChangeStatus(This,eChangeStatus)	\
    (This)->lpVtbl -> SetChangeStatus(This,eChangeStatus)

#define IEventGroup_GetChangeStatus(This,peChangeStatus)	\
    (This)->lpVtbl -> GetChangeStatus(This,peChangeStatus)

#define IEventGroup_GetOrdinal(This,plOrdinal)	\
    (This)->lpVtbl -> GetOrdinal(This,plOrdinal)

#define IEventGroup_SetItemNameType(This,eItemNameType)	\
    (This)->lpVtbl -> SetItemNameType(This,eItemNameType)

#define IEventGroup_GetItemNameType(This,eItemNameType)	\
    (This)->lpVtbl -> GetItemNameType(This,eItemNameType)

#define IEventGroup_GetDefaultItemNamesCount(This,piCount)	\
    (This)->lpVtbl -> GetDefaultItemNamesCount(This,piCount)

#define IEventGroup_GetDefaultItemName(This,iIndex,pbstrName)	\
    (This)->lpVtbl -> GetDefaultItemName(This,iIndex,pbstrName)

#define IEventGroup_GetDefaultItemColor(This,iIndex,poclrColor)	\
    (This)->lpVtbl -> GetDefaultItemColor(This,iIndex,poclrColor)

#define IEventGroup_SetDefaultItem(This,iIndex,bstrName,oclrColor)	\
    (This)->lpVtbl -> SetDefaultItem(This,iIndex,bstrName,oclrColor)

#define IEventGroup_InsertDefaultItem(This,iIndex,bstrName,oclrColor)	\
    (This)->lpVtbl -> InsertDefaultItem(This,iIndex,bstrName,oclrColor)

#define IEventGroup_AddDefaultItem(This,bstrName,oclrColor)	\
    (This)->lpVtbl -> AddDefaultItem(This,bstrName,oclrColor)

#define IEventGroup_DeleteDefaultItem(This,iIndex)	\
    (This)->lpVtbl -> DeleteDefaultItem(This,iIndex)

#define IEventGroup_SetItemDuration(This,dDefault,dMinimum,dMaximum)	\
    (This)->lpVtbl -> SetItemDuration(This,dDefault,dMinimum,dMaximum)

#define IEventGroup_GetDefaultItemDuration(This,pdDuration)	\
    (This)->lpVtbl -> GetDefaultItemDuration(This,pdDuration)

#define IEventGroup_GetMinimumItemDuration(This,pdDuration)	\
    (This)->lpVtbl -> GetMinimumItemDuration(This,pdDuration)

#define IEventGroup_GetMaximumItemDuration(This,pdDuration)	\
    (This)->lpVtbl -> GetMaximumItemDuration(This,pdDuration)

#define IEventGroup_AddGroupProperty(This,bstrKey,bstrValue,bstrDesc)	\
    (This)->lpVtbl -> AddGroupProperty(This,bstrKey,bstrValue,bstrDesc)

#define IEventGroup_DeleteGroupProperty(This,bstrKey)	\
    (This)->lpVtbl -> DeleteGroupProperty(This,bstrKey)

#define IEventGroup_GetGroupPropertyCount(This,piCount)	\
    (This)->lpVtbl -> GetGroupPropertyCount(This,piCount)

#define IEventGroup_GetGroupPropertyIndex(This,bstrKey,piIndex)	\
    (This)->lpVtbl -> GetGroupPropertyIndex(This,bstrKey,piIndex)

#define IEventGroup_GetGroupPropertyKey(This,iIndex,pbstrKey)	\
    (This)->lpVtbl -> GetGroupPropertyKey(This,iIndex,pbstrKey)

#define IEventGroup_SetGroupPropertyValue(This,bstrKey,bstrValue)	\
    (This)->lpVtbl -> SetGroupPropertyValue(This,bstrKey,bstrValue)

#define IEventGroup_GetGroupPropertyValue(This,bstrKey,pbstrValue)	\
    (This)->lpVtbl -> GetGroupPropertyValue(This,bstrKey,pbstrValue)

#define IEventGroup_SetGroupPropertyDescription(This,bstrKey,bstrDesc)	\
    (This)->lpVtbl -> SetGroupPropertyDescription(This,bstrKey,bstrDesc)

#define IEventGroup_GetGroupPropertyDescription(This,bstrKey,pbstrDesc)	\
    (This)->lpVtbl -> GetGroupPropertyDescription(This,bstrKey,pbstrDesc)

#define IEventGroup_AddItemProperty(This,bstrKey,bstrDesc)	\
    (This)->lpVtbl -> AddItemProperty(This,bstrKey,bstrDesc)

#define IEventGroup_DeleteItemProperty(This,bstrKey)	\
    (This)->lpVtbl -> DeleteItemProperty(This,bstrKey)

#define IEventGroup_GetItemPropertyCount(This,piCount)	\
    (This)->lpVtbl -> GetItemPropertyCount(This,piCount)

#define IEventGroup_GetItemPropertyIndex(This,bstrKey,piIndex)	\
    (This)->lpVtbl -> GetItemPropertyIndex(This,bstrKey,piIndex)

#define IEventGroup_GetItemPropertyKey(This,iIndex,pbstrKey)	\
    (This)->lpVtbl -> GetItemPropertyKey(This,iIndex,pbstrKey)

#define IEventGroup_SetItemPropertyDescription(This,bstrKey,bstrDesc)	\
    (This)->lpVtbl -> SetItemPropertyDescription(This,bstrKey,bstrDesc)

#define IEventGroup_GetItemPropertyDescription(This,bstrKey,pbstrDesc)	\
    (This)->lpVtbl -> GetItemPropertyDescription(This,bstrKey,pbstrDesc)

#define IEventGroup_Init(This,pEventGroup)	\
    (This)->lpVtbl -> Init(This,pEventGroup)

#define IEventGroup_Reset(This)	\
    (This)->lpVtbl -> Reset(This)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring] */ HRESULT STDMETHODCALLTYPE IEventGroup_SetID_Proxy( 
    IEventGroup * This,
    /* [in] */ BSTR bstrID);


void __RPC_STUB IEventGroup_SetID_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IEventGroup_GetID_Proxy( 
    IEventGroup * This,
    /* [retval][out] */ BSTR *pbstrID);


void __RPC_STUB IEventGroup_GetID_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IEventGroup_SetName_Proxy( 
    IEventGroup * This,
    /* [in] */ BSTR bstrName);


void __RPC_STUB IEventGroup_SetName_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IEventGroup_GetName_Proxy( 
    IEventGroup * This,
    /* [retval][out] */ BSTR *pbstrName);


void __RPC_STUB IEventGroup_GetName_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IEventGroup_SetDescription_Proxy( 
    IEventGroup * This,
    /* [in] */ BSTR bstrDesc);


void __RPC_STUB IEventGroup_SetDescription_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IEventGroup_GetDescription_Proxy( 
    IEventGroup * This,
    /* [retval][out] */ BSTR *pbstrDesc);


void __RPC_STUB IEventGroup_GetDescription_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IEventGroup_SetType_Proxy( 
    IEventGroup * This,
    /* [in] */ EGroupType eType);


void __RPC_STUB IEventGroup_SetType_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IEventGroup_GetType_Proxy( 
    IEventGroup * This,
    /* [retval][out] */ EGroupType *peType);


void __RPC_STUB IEventGroup_GetType_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IEventGroup_SetExtent_Proxy( 
    IEventGroup * This,
    /* [in] */ EGroupExtent eExtent);


void __RPC_STUB IEventGroup_SetExtent_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IEventGroup_GetExtent_Proxy( 
    IEventGroup * This,
    /* [retval][out] */ EGroupExtent *peExtent);


void __RPC_STUB IEventGroup_GetExtent_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IEventGroup_SetAccess_Proxy( 
    IEventGroup * This,
    /* [in] */ EGroupAccess eAccess);


void __RPC_STUB IEventGroup_SetAccess_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IEventGroup_GetAccess_Proxy( 
    IEventGroup * This,
    /* [retval][out] */ EGroupAccess *peAccess);


void __RPC_STUB IEventGroup_GetAccess_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IEventGroup_SetColor_Proxy( 
    IEventGroup * This,
    /* [in] */ OLE_COLOR oclrColor);


void __RPC_STUB IEventGroup_SetColor_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IEventGroup_GetColor_Proxy( 
    IEventGroup * This,
    /* [retval][out] */ OLE_COLOR *poclrColor);


void __RPC_STUB IEventGroup_GetColor_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IEventGroup_SetChannelType_Proxy( 
    IEventGroup * This,
    /* [in] */ EGroupChannelType eGroupChannelType);


void __RPC_STUB IEventGroup_SetChannelType_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IEventGroup_GetChannelType_Proxy( 
    IEventGroup * This,
    /* [retval][out] */ EGroupChannelType *peGroupChannelType);


void __RPC_STUB IEventGroup_GetChannelType_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IEventGroup_GetMarkingTraceTypesCount_Proxy( 
    IEventGroup * This,
    /* [retval][out] */ INT *piCount);


void __RPC_STUB IEventGroup_GetMarkingTraceTypesCount_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IEventGroup_GetMarkingTraceType_Proxy( 
    IEventGroup * This,
    /* [in] */ INT iTraceTypeIndex,
    /* [retval][out] */ EChannelType *peType);


void __RPC_STUB IEventGroup_GetMarkingTraceType_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IEventGroup_AddMarkingTraceType_Proxy( 
    IEventGroup * This,
    /* [in] */ EChannelType eType);


void __RPC_STUB IEventGroup_AddMarkingTraceType_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IEventGroup_DeleteMarkingTraceType_Proxy( 
    IEventGroup * This,
    /* [in] */ INT iTraceTypeIndex);


void __RPC_STUB IEventGroup_DeleteMarkingTraceType_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IEventGroup_GetMarkingChannelLabelsCount_Proxy( 
    IEventGroup * This,
    /* [in] */ INT iTraceTypeIndex,
    /* [retval][out] */ INT *piCount);


void __RPC_STUB IEventGroup_GetMarkingChannelLabelsCount_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IEventGroup_GetMarkingChannelLabel_Proxy( 
    IEventGroup * This,
    /* [in] */ INT iTraceTypeIndex,
    /* [in] */ INT iLabelIndex,
    /* [retval][out] */ BSTR *pbstrLabel);


void __RPC_STUB IEventGroup_GetMarkingChannelLabel_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IEventGroup_AddMarkingChannelLabel_Proxy( 
    IEventGroup * This,
    /* [in] */ INT iTraceTypeIndex,
    /* [in] */ BSTR bstrLabel);


void __RPC_STUB IEventGroup_AddMarkingChannelLabel_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IEventGroup_DeleteMarkingChannelLabel_Proxy( 
    IEventGroup * This,
    /* [in] */ INT iTraceTypeIndex,
    /* [in] */ INT iLabelIndex);


void __RPC_STUB IEventGroup_DeleteMarkingChannelLabel_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IEventGroup_SetVisibility_Proxy( 
    IEventGroup * This,
    /* [in] */ EVisibilityStatus eVisibility);


void __RPC_STUB IEventGroup_SetVisibility_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IEventGroup_GetVisibility_Proxy( 
    IEventGroup * This,
    /* [retval][out] */ EVisibilityStatus *peVisibility);


void __RPC_STUB IEventGroup_GetVisibility_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IEventGroup_SetChangeStatus_Proxy( 
    IEventGroup * This,
    /* [in] */ EChangeStatus eChangeStatus);


void __RPC_STUB IEventGroup_SetChangeStatus_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IEventGroup_GetChangeStatus_Proxy( 
    IEventGroup * This,
    /* [retval][out] */ EChangeStatus *peChangeStatus);


void __RPC_STUB IEventGroup_GetChangeStatus_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IEventGroup_GetOrdinal_Proxy( 
    IEventGroup * This,
    /* [retval][out] */ LONG *plOrdinal);


void __RPC_STUB IEventGroup_GetOrdinal_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IEventGroup_SetItemNameType_Proxy( 
    IEventGroup * This,
    /* [in] */ EItemNameType eItemNameType);


void __RPC_STUB IEventGroup_SetItemNameType_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IEventGroup_GetItemNameType_Proxy( 
    IEventGroup * This,
    /* [retval][out] */ EItemNameType *eItemNameType);


void __RPC_STUB IEventGroup_GetItemNameType_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IEventGroup_GetDefaultItemNamesCount_Proxy( 
    IEventGroup * This,
    /* [retval][out] */ INT *piCount);


void __RPC_STUB IEventGroup_GetDefaultItemNamesCount_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IEventGroup_GetDefaultItemName_Proxy( 
    IEventGroup * This,
    /* [in] */ INT iIndex,
    /* [retval][out] */ BSTR *pbstrName);


void __RPC_STUB IEventGroup_GetDefaultItemName_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IEventGroup_GetDefaultItemColor_Proxy( 
    IEventGroup * This,
    /* [in] */ INT iIndex,
    /* [retval][out] */ OLE_COLOR *poclrColor);


void __RPC_STUB IEventGroup_GetDefaultItemColor_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IEventGroup_SetDefaultItem_Proxy( 
    IEventGroup * This,
    /* [in] */ INT iIndex,
    /* [in] */ BSTR bstrName,
    /* [in] */ OLE_COLOR oclrColor);


void __RPC_STUB IEventGroup_SetDefaultItem_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IEventGroup_InsertDefaultItem_Proxy( 
    IEventGroup * This,
    /* [in] */ INT iIndex,
    /* [in] */ BSTR bstrName,
    /* [in] */ OLE_COLOR oclrColor);


void __RPC_STUB IEventGroup_InsertDefaultItem_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IEventGroup_AddDefaultItem_Proxy( 
    IEventGroup * This,
    /* [in] */ BSTR bstrName,
    /* [in] */ OLE_COLOR oclrColor);


void __RPC_STUB IEventGroup_AddDefaultItem_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IEventGroup_DeleteDefaultItem_Proxy( 
    IEventGroup * This,
    /* [in] */ INT iIndex);


void __RPC_STUB IEventGroup_DeleteDefaultItem_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IEventGroup_SetItemDuration_Proxy( 
    IEventGroup * This,
    /* [in] */ DOUBLE dDefault,
    /* [in] */ DOUBLE dMinimum,
    /* [in] */ DOUBLE dMaximum);


void __RPC_STUB IEventGroup_SetItemDuration_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IEventGroup_GetDefaultItemDuration_Proxy( 
    IEventGroup * This,
    /* [retval][out] */ DOUBLE *pdDuration);


void __RPC_STUB IEventGroup_GetDefaultItemDuration_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IEventGroup_GetMinimumItemDuration_Proxy( 
    IEventGroup * This,
    /* [retval][out] */ DOUBLE *pdDuration);


void __RPC_STUB IEventGroup_GetMinimumItemDuration_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IEventGroup_GetMaximumItemDuration_Proxy( 
    IEventGroup * This,
    /* [retval][out] */ DOUBLE *pdDuration);


void __RPC_STUB IEventGroup_GetMaximumItemDuration_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IEventGroup_AddGroupProperty_Proxy( 
    IEventGroup * This,
    /* [in] */ BSTR bstrKey,
    /* [in] */ BSTR bstrValue,
    /* [in] */ BSTR bstrDesc);


void __RPC_STUB IEventGroup_AddGroupProperty_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IEventGroup_DeleteGroupProperty_Proxy( 
    IEventGroup * This,
    /* [in] */ BSTR bstrKey);


void __RPC_STUB IEventGroup_DeleteGroupProperty_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IEventGroup_GetGroupPropertyCount_Proxy( 
    IEventGroup * This,
    /* [retval][out] */ INT *piCount);


void __RPC_STUB IEventGroup_GetGroupPropertyCount_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IEventGroup_GetGroupPropertyIndex_Proxy( 
    IEventGroup * This,
    /* [in] */ BSTR bstrKey,
    /* [retval][out] */ INT *piIndex);


void __RPC_STUB IEventGroup_GetGroupPropertyIndex_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IEventGroup_GetGroupPropertyKey_Proxy( 
    IEventGroup * This,
    /* [in] */ INT iIndex,
    /* [retval][out] */ BSTR *pbstrKey);


void __RPC_STUB IEventGroup_GetGroupPropertyKey_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IEventGroup_SetGroupPropertyValue_Proxy( 
    IEventGroup * This,
    /* [in] */ BSTR bstrKey,
    /* [in] */ BSTR bstrValue);


void __RPC_STUB IEventGroup_SetGroupPropertyValue_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IEventGroup_GetGroupPropertyValue_Proxy( 
    IEventGroup * This,
    /* [in] */ BSTR bstrKey,
    /* [retval][out] */ BSTR *pbstrValue);


void __RPC_STUB IEventGroup_GetGroupPropertyValue_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IEventGroup_SetGroupPropertyDescription_Proxy( 
    IEventGroup * This,
    /* [in] */ BSTR bstrKey,
    /* [in] */ BSTR bstrDesc);


void __RPC_STUB IEventGroup_SetGroupPropertyDescription_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IEventGroup_GetGroupPropertyDescription_Proxy( 
    IEventGroup * This,
    /* [in] */ BSTR bstrKey,
    /* [retval][out] */ BSTR *pbstrDesc);


void __RPC_STUB IEventGroup_GetGroupPropertyDescription_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IEventGroup_AddItemProperty_Proxy( 
    IEventGroup * This,
    /* [in] */ BSTR bstrKey,
    /* [in] */ BSTR bstrDesc);


void __RPC_STUB IEventGroup_AddItemProperty_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IEventGroup_DeleteItemProperty_Proxy( 
    IEventGroup * This,
    /* [in] */ BSTR bstrKey);


void __RPC_STUB IEventGroup_DeleteItemProperty_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IEventGroup_GetItemPropertyCount_Proxy( 
    IEventGroup * This,
    /* [retval][out] */ INT *piCount);


void __RPC_STUB IEventGroup_GetItemPropertyCount_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IEventGroup_GetItemPropertyIndex_Proxy( 
    IEventGroup * This,
    /* [in] */ BSTR bstrKey,
    /* [retval][out] */ INT *piIndex);


void __RPC_STUB IEventGroup_GetItemPropertyIndex_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IEventGroup_GetItemPropertyKey_Proxy( 
    IEventGroup * This,
    /* [in] */ INT iIndex,
    /* [retval][out] */ BSTR *pbstrKey);


void __RPC_STUB IEventGroup_GetItemPropertyKey_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IEventGroup_SetItemPropertyDescription_Proxy( 
    IEventGroup * This,
    /* [in] */ BSTR bstrKey,
    /* [in] */ BSTR bstrDesc);


void __RPC_STUB IEventGroup_SetItemPropertyDescription_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IEventGroup_GetItemPropertyDescription_Proxy( 
    IEventGroup * This,
    /* [in] */ BSTR bstrKey,
    /* [retval][out] */ BSTR *pbstrDesc);


void __RPC_STUB IEventGroup_GetItemPropertyDescription_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IEventGroup_Init_Proxy( 
    IEventGroup * This,
    /* [in] */ IEventGroup *pEventGroup);


void __RPC_STUB IEventGroup_Init_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IEventGroup_Reset_Proxy( 
    IEventGroup * This);


void __RPC_STUB IEventGroup_Reset_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IEventGroup_INTERFACE_DEFINED__ */


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


