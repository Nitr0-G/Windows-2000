// NscOc.h : Declaration of the CShellFavoritesNameSpace

#ifndef __NSCOC_H_
#define __NSCOC_H_

#include "resource.h"       // main symbols
#include "nsc.h"

#define SHELLFAVORITESNAMESPACE_WINDOWCLASS          TEXT("NamespaceOC Window")

//CProxy_ShellFavoritesNameSpaceEvents was generated by vc5 atl proxy generator

//////////////////////////////////////////////////////////////////////////////
// CProxy_ShellFavoritesNameSpaceEvents
template <class T>
class CProxy_ShellFavoritesNameSpaceEvents : public IConnectionPointImpl<T, &DIID__ShellFavoritesNameSpaceEvents, CComDynamicUnkArray>
{
public:
//methods:
//_ShellFavoritesNameSpaceEvents : IDispatch
public:
    void Fire_FavoritesSelectionChange(
        long cItems,
        long hItem,
        BSTR strName,
        BSTR strUrl,
        long cVisits,
        BSTR strDate,
        long fAvailableOffline)
    {
        VARIANTARG* pvars = new VARIANTARG[7];
        if (pvars == NULL)
        {
            return;
        }
        for (int i = 0; i < 7; i++)
            VariantInit(&pvars[i]);
        T* pT = (T*)this;
        pT->Lock();
        IUnknown** pp = m_vec.begin();
        while (pp < m_vec.end())
        {
            if (*pp != NULL)
            {
                pvars[6].vt = VT_I4;
                pvars[6].lVal= cItems;
                pvars[5].vt = VT_I4;
                pvars[5].lVal= hItem;
                pvars[4].vt = VT_BSTR;
                pvars[4].bstrVal= strName;
                pvars[3].vt = VT_BSTR;
                pvars[3].bstrVal= strUrl;
                pvars[2].vt = VT_I4;
                pvars[2].lVal= cVisits;
                pvars[1].vt = VT_BSTR;
                pvars[1].bstrVal= strDate;
                pvars[0].vt = VT_I4;
                pvars[0].lVal= fAvailableOffline;
                DISPPARAMS disp = { pvars, NULL, 7, 0 };
                IDispatch* pDispatch = reinterpret_cast<IDispatch*>(*pp);
                pDispatch->Invoke(0x1, IID_NULL, LOCALE_USER_DEFAULT, DISPATCH_METHOD, &disp, NULL, NULL, NULL);
            }
            pp++;
        }
        pT->Unlock();
        delete[] pvars;
    }

};
/////////////////////////////////////////////////////////////////////////////


/////////////////////////////////////////////////////////////////////////////
// CShellFavoritesNameSpace
class ATL_NO_VTABLE CShellFavoritesNameSpace : 
    public CComObjectRootEx<CComSingleThreadModel>,
    public CComCoClass<CShellFavoritesNameSpace, &CLSID_ShellFavoritesNameSpace>,
    public CComControl<CShellFavoritesNameSpace>,
    public IDispatchImpl<IShellFavoritesNameSpace, &IID_IShellFavoritesNameSpace, &LIBID_SHDocVw, 1, 0, CComTypeInfoHolder>,
    public IProvideClassInfo2Impl<&CLSID_ShellFavoritesNameSpace, &DIID__ShellFavoritesNameSpaceEvents, &LIBID_SHDocVw, 1, 0, CComTypeInfoHolder>,
    public IPersistStreamInitImpl<CShellFavoritesNameSpace>,
    public IPersistStorageImpl<CShellFavoritesNameSpace>,
    public IQuickActivateImpl<CShellFavoritesNameSpace>,
    public IOleControlImpl<CShellFavoritesNameSpace>,
    public IOleObjectImpl<CShellFavoritesNameSpace>,
    public IOleInPlaceActiveObjectImpl<CShellFavoritesNameSpace>,
    public IViewObjectExImpl<CShellFavoritesNameSpace>,
    public IOleInPlaceObjectWindowlessImpl<CShellFavoritesNameSpace>,
    public IDataObjectImpl<CShellFavoritesNameSpace>,
    public ISpecifyPropertyPagesImpl<CShellFavoritesNameSpace>,
    public CProxy_ShellFavoritesNameSpaceEvents<CShellFavoritesNameSpace>,
    public IConnectionPointContainerImpl<CShellFavoritesNameSpace>
#ifdef DEBUG
    ,public IObjectSafetyImpl<CShellFavoritesNameSpace>
#endif
{
public:
    CShellFavoritesNameSpace();
    ~CShellFavoritesNameSpace();

DECLARE_WND_CLASS(SHELLFAVORITESNAMESPACE_WINDOWCLASS)

BEGIN_COM_MAP(CShellFavoritesNameSpace)
    COM_INTERFACE_ENTRY(IShellFavoritesNameSpace)
    COM_INTERFACE_ENTRY(IDispatch)
    COM_INTERFACE_ENTRY_IMPL(IViewObjectEx)
    COM_INTERFACE_ENTRY_IMPL_IID(IID_IViewObject2, IViewObjectEx)
    COM_INTERFACE_ENTRY_IMPL_IID(IID_IViewObject, IViewObjectEx)
    COM_INTERFACE_ENTRY_IMPL(IOleInPlaceObjectWindowless)
    COM_INTERFACE_ENTRY_IMPL_IID(IID_IOleInPlaceObject, IOleInPlaceObjectWindowless)
    COM_INTERFACE_ENTRY_IMPL_IID(IID_IOleWindow, IOleInPlaceObjectWindowless)
    COM_INTERFACE_ENTRY_IMPL(IOleInPlaceActiveObject)
    COM_INTERFACE_ENTRY_IMPL(IOleControl)
    COM_INTERFACE_ENTRY_IMPL(IOleObject)
    COM_INTERFACE_ENTRY_IMPL(IQuickActivate)
    COM_INTERFACE_ENTRY_IMPL(IPersistStorage)
    COM_INTERFACE_ENTRY_IMPL(IPersistStreamInit)
    COM_INTERFACE_ENTRY_IMPL(ISpecifyPropertyPages)
    COM_INTERFACE_ENTRY_IMPL(IDataObject)
    COM_INTERFACE_ENTRY(IProvideClassInfo)
    COM_INTERFACE_ENTRY(IProvideClassInfo2)
    COM_INTERFACE_ENTRY_IMPL(IConnectionPointContainer)
#ifdef DEBUG
    COM_INTERFACE_ENTRY_IMPL(IObjectSafety)
#endif DEBUG
END_COM_MAP()

BEGIN_PROPERTY_MAP(CShellFavoritesNameSpace)
    // Example entries
    // PROP_ENTRY("Property Description", dispid, clsid)
END_PROPERTY_MAP()


BEGIN_MSG_MAP(CShellFavoritesNameSpace)
    MESSAGE_HANDLER(WM_NOTIFY, OnNotify)
//    MESSAGE_HANDLER(WM_NOTIFYFORMAT, OnNotifyFormat)
    MESSAGE_HANDLER(WM_SETFOCUS, OnSetFocus)
    MESSAGE_HANDLER(WM_KILLFOCUS, OnKillFocus)
    MESSAGE_HANDLER(WM_MOUSEACTIVATE, OnMouseActivate)
    MESSAGE_HANDLER(WM_DESTROY, OnDestroy)
    MESSAGE_HANDLER(CWM_GETISHELLBROWSER, OnGetIShellBrowser)
END_MSG_MAP()

BEGIN_CONNECTION_POINT_MAP(CShellFavoritesNameSpace)
    CONNECTION_POINT_ENTRY(DIID__ShellFavoritesNameSpaceEvents)
END_CONNECTION_POINT_MAP()

// IViewObjectEx
    STDMETHOD(GetViewStatus)(DWORD* pdwStatus)
    {
        ATLTRACE(_T("IViewObjectExImpl::GetViewStatus\n"));
        *pdwStatus = VIEWSTATUS_SOLIDBKGND | VIEWSTATUS_OPAQUE;
        return S_OK;
    }

    // **** IOleInPlaceActiveObjectImpl ***
    virtual STDMETHODIMP TranslateAccelerator(PMSG pMsg);

    // *** IOleWindow ***
    virtual STDMETHODIMP GetWindow(HWND * lphwnd);

public:
// IShellFavoritesNameSpace
    STDMETHOD(get_FOfflinePackInstalled)(/*[out, retval]*/ VARIANT_BOOL *pVal);
    STDMETHOD(Import)();
    STDMETHOD(Export)();
    STDMETHOD(Synchronize)();
    STDMETHOD(NewFolder)();
    STDMETHOD(ResetSort)();
    STDMETHOD(MoveSelectionDown)();
    STDMETHOD(MoveSelectionUp)();
    STDMETHOD(InvokeContextMenuCommand)(BSTR strCommand);
    STDMETHOD(MoveSelectionTo)();
    STDMETHOD(CreateSubscriptionForSelection)(/*[out, retval]*/ VARIANT_BOOL *pBool);    
    STDMETHOD(DeleteSubscriptionForSelection)(/*[out, retval]*/ VARIANT_BOOL *pBool);    
    STDMETHOD(SetRoot)(BSTR bstrFullPath);
    
//override ATL default handlers
    static HRESULT UpdateRegistry(BOOL bRegister);
    HRESULT OnDraw(ATL_DRAWINFO& di);
    LRESULT OnNotify(UINT uMsg, WPARAM wParam, LPARAM lParam, BOOL &bHandled);
//    LRESULT OnNotifyFormat(UINT uMsg, WPARAM wParam, LPARAM lParam, BOOL &bHandled);
    LRESULT OnSetFocus(UINT uMsg, WPARAM wParam, LPARAM lParam, BOOL &bHandled);
    LRESULT OnKillFocus(UINT uMsg, WPARAM wParam, LPARAM lParam, BOOL &bHandled);
    LRESULT OnMouseActivate(UINT uMsg, WPARAM wParam, LPARAM lParam, BOOL &bHandled);
    LRESULT OnDestroy(UINT uMsg, WPARAM wParam, LPARAM lParam, BOOL &bHandled);
    LRESULT OnGetIShellBrowser(UINT uMsg, WPARAM wParam, LPARAM lParam, BOOL &bHandled);
    HRESULT InPlaceActivate(LONG iVerb, const RECT* prcPosRect = NULL);
    HRESULT GetEventInfo(IShellFolder *psf, LPCITEMIDLIST pidl,
                         UINT *pcItems, LPWSTR pszUrl, DWORD cchUrl, 
                         UINT *pcVisits, LPWSTR pszLastVisited, BOOL *pfAvailableOffline);
    STDMETHODIMP SetObjectRects(LPCRECT prcPos, LPCRECT prcClip);
    
    HWND Create(HWND hWndParent, RECT& rcPos, LPCTSTR pszWindowName = NULL, 
                DWORD dwStyle = WS_CHILD | WS_VISIBLE | WS_CLIPSIBLINGS,
                DWORD dwExStyle = 0, UINT nID = 0);

    INSCTree *                  _pns;        // name space control data.
    IWinEventHandler *          _pweh;       // The OnWinEvent name space control handler
    IShellFavoritesNameSpace *  _psfns;      // _pns also has the IShellFavoritesNameSpace interface.

private:
    HWND            _hwndTv;                // CNscTree's hwnd
    LPITEMIDLIST    _pidlBase;
};

#endif //__NSCOC_H_

