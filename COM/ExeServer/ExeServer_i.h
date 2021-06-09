

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 8.01.0622 */
/* at Tue Jan 19 08:44:07 2038
 */
/* Compiler settings for ExeServer.idl:
    Oicf, W1, Zp8, env=Win32 (32b run), target_arch=X86 8.01.0622 
    protocol : dce , ms_ext, c_ext, robust
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
/* @@MIDL_FILE_HEADING(  ) */



/* verify that the <rpcndr.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 500
#endif

#include "rpc.h"
#include "rpcndr.h"

#ifndef __RPCNDR_H_VERSION__
#error this stub requires an updated version of <rpcndr.h>
#endif /* __RPCNDR_H_VERSION__ */

#ifndef COM_NO_WINDOWS_H
#include "windows.h"
#include "ole2.h"
#endif /*COM_NO_WINDOWS_H*/

#ifndef __ExeServer_i_h__
#define __ExeServer_i_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __IExeCuber_FWD_DEFINED__
#define __IExeCuber_FWD_DEFINED__
typedef interface IExeCuber IExeCuber;

#endif 	/* __IExeCuber_FWD_DEFINED__ */


#ifndef __ExeCuber_FWD_DEFINED__
#define __ExeCuber_FWD_DEFINED__

#ifdef __cplusplus
typedef class ExeCuber ExeCuber;
#else
typedef struct ExeCuber ExeCuber;
#endif /* __cplusplus */

#endif 	/* __ExeCuber_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"
#include "shobjidl.h"

#ifdef __cplusplus
extern "C"{
#endif 


#ifndef __IExeCuber_INTERFACE_DEFINED__
#define __IExeCuber_INTERFACE_DEFINED__

/* interface IExeCuber */
/* [unique][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_IExeCuber;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("b093ad50-0a32-4a7b-9856-03fefd33fe02")
    IExeCuber : public IDispatch
    {
    public:
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE CubeMe( 
            /* [in] */ DOUBLE num,
            /* [out] */ DOUBLE *numOut) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IExeCuberVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IExeCuber * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IExeCuber * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IExeCuber * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IExeCuber * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IExeCuber * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IExeCuber * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IExeCuber * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *CubeMe )( 
            IExeCuber * This,
            /* [in] */ DOUBLE num,
            /* [out] */ DOUBLE *numOut);
        
        END_INTERFACE
    } IExeCuberVtbl;

    interface IExeCuber
    {
        CONST_VTBL struct IExeCuberVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IExeCuber_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IExeCuber_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IExeCuber_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IExeCuber_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IExeCuber_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IExeCuber_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IExeCuber_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IExeCuber_CubeMe(This,num,numOut)	\
    ( (This)->lpVtbl -> CubeMe(This,num,numOut) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IExeCuber_INTERFACE_DEFINED__ */



#ifndef __ExeServerLib_LIBRARY_DEFINED__
#define __ExeServerLib_LIBRARY_DEFINED__

/* library ExeServerLib */
/* [version][uuid] */ 


EXTERN_C const IID LIBID_ExeServerLib;

EXTERN_C const CLSID CLSID_ExeCuber;

#ifdef __cplusplus

class DECLSPEC_UUID("ba0f9392-516e-46dc-b8b0-b21a4648ed30")
ExeCuber;
#endif
#endif /* __ExeServerLib_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


