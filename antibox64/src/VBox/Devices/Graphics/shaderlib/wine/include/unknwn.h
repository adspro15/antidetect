/*** Autogenerated by WIDL 1.1.36 from unknwn.idl - Do not edit ***/

#include <rpc.h>
#include <rpcndr.h>

#ifndef __WIDL_UNKNWN_H
#define __WIDL_UNKNWN_H

#ifdef __cplusplus
extern "C" {
#endif

/* Headers for imported files */

#include <wtypes.h>

/* Forward declarations */

#ifndef __IUnknown_FWD_DEFINED__
#define __IUnknown_FWD_DEFINED__
typedef interface IUnknown IUnknown;
#endif

#ifndef __IClassFactory_FWD_DEFINED__
#define __IClassFactory_FWD_DEFINED__
typedef interface IClassFactory IClassFactory;
#endif


/*****************************************************************************
 * IUnknown interface
 */
#ifndef __IUnknown_INTERFACE_DEFINED__
#define __IUnknown_INTERFACE_DEFINED__

typedef IUnknown *LPUNKNOWN;
DEFINE_GUID(IID_IUnknown, 0x00000000, 0x0000, 0x0000, 0xc0,0x00, 0x00,0x00,0x00,0x00,0x00,0x46);
#if defined(__cplusplus) && !defined(CINTERFACE)
interface IUnknown
{
    BEGIN_INTERFACE

    virtual HRESULT STDMETHODCALLTYPE QueryInterface(
        REFIID riid,
        void **ppvObject) = 0;

    virtual ULONG STDMETHODCALLTYPE AddRef(
        ) = 0;

    virtual ULONG STDMETHODCALLTYPE Release(
        ) = 0;

    END_INTERFACE
};
#else
typedef struct IUnknownVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IUnknown* This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IUnknown* This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IUnknown* This);

    END_INTERFACE
} IUnknownVtbl;
interface IUnknown {
    CONST_VTBL IUnknownVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IUnknown_QueryInterface(This,riid,ppvObject) (This)->lpVtbl->QueryInterface(This,riid,ppvObject)
#define IUnknown_AddRef(This) (This)->lpVtbl->AddRef(This)
#define IUnknown_Release(This) (This)->lpVtbl->Release(This)
#endif

#endif

HRESULT STDMETHODCALLTYPE IUnknown_QueryInterface_Proxy(
    IUnknown* This,
    REFIID riid,
    void **ppvObject);
void __RPC_STUB IUnknown_QueryInterface_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
ULONG STDMETHODCALLTYPE IUnknown_AddRef_Proxy(
    IUnknown* This);
void __RPC_STUB IUnknown_AddRef_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
ULONG STDMETHODCALLTYPE IUnknown_Release_Proxy(
    IUnknown* This);
void __RPC_STUB IUnknown_Release_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);

#endif  /* __IUnknown_INTERFACE_DEFINED__ */

/*****************************************************************************
 * IClassFactory interface
 */
#ifndef __IClassFactory_INTERFACE_DEFINED__
#define __IClassFactory_INTERFACE_DEFINED__

typedef IClassFactory *LPCLASSFACTORY;
DEFINE_GUID(IID_IClassFactory, 0x00000001, 0x0000, 0x0000, 0xc0,0x00, 0x00,0x00,0x00,0x00,0x00,0x46);
#if defined(__cplusplus) && !defined(CINTERFACE)
interface IClassFactory : public IUnknown
{
    virtual HRESULT STDMETHODCALLTYPE CreateInstance(
        IUnknown *pUnkOuter,
        REFIID riid,
        void **ppvObject) = 0;

    virtual HRESULT STDMETHODCALLTYPE LockServer(
        BOOL fLock) = 0;

};
#else
typedef struct IClassFactoryVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IClassFactory* This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IClassFactory* This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IClassFactory* This);

    /*** IClassFactory methods ***/
    HRESULT (STDMETHODCALLTYPE *CreateInstance)(
        IClassFactory* This,
        IUnknown *pUnkOuter,
        REFIID riid,
        void **ppvObject);

    HRESULT (STDMETHODCALLTYPE *LockServer)(
        IClassFactory* This,
        BOOL fLock);

    END_INTERFACE
} IClassFactoryVtbl;
interface IClassFactory {
    CONST_VTBL IClassFactoryVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IClassFactory_QueryInterface(This,riid,ppvObject) (This)->lpVtbl->QueryInterface(This,riid,ppvObject)
#define IClassFactory_AddRef(This) (This)->lpVtbl->AddRef(This)
#define IClassFactory_Release(This) (This)->lpVtbl->Release(This)
/*** IClassFactory methods ***/
#define IClassFactory_CreateInstance(This,pUnkOuter,riid,ppvObject) (This)->lpVtbl->CreateInstance(This,pUnkOuter,riid,ppvObject)
#define IClassFactory_LockServer(This,fLock) (This)->lpVtbl->LockServer(This,fLock)
#endif

#endif

HRESULT STDMETHODCALLTYPE IClassFactory_RemoteCreateInstance_Proxy(
    IClassFactory* This,
    REFIID riid,
    IUnknown **ppvObject);
void __RPC_STUB IClassFactory_RemoteCreateInstance_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT STDMETHODCALLTYPE IClassFactory_RemoteLockServer_Proxy(
    IClassFactory* This,
    BOOL fLock);
void __RPC_STUB IClassFactory_RemoteLockServer_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT CALLBACK IClassFactory_CreateInstance_Proxy(
    IClassFactory* This,
    IUnknown *pUnkOuter,
    REFIID riid,
    void **ppvObject);
HRESULT __RPC_STUB IClassFactory_CreateInstance_Stub(
    IClassFactory* This,
    REFIID riid,
    IUnknown **ppvObject);
HRESULT CALLBACK IClassFactory_LockServer_Proxy(
    IClassFactory* This,
    BOOL fLock);
HRESULT __RPC_STUB IClassFactory_LockServer_Stub(
    IClassFactory* This,
    BOOL fLock);

#endif  /* __IClassFactory_INTERFACE_DEFINED__ */

/* Begin additional prototypes for all interfaces */


/* End additional prototypes */

#ifdef __cplusplus
}
#endif

#endif /* __WIDL_UNKNWN_H */
