#pragma once

// �H Microsoft Visual C++ �إߡA�ѹq�����ͪ� IDispatch �]�˨禡���O

// �`�N: �Фŭק�o���ɮת����e�C�p�G�o�����O�O��
//  Microsoft Visual C++ ���ͪ��A�z���ק�N�|�Q�мg�C

/////////////////////////////////////////////////////////////////////////////
// CWebBrowser2 �]�˨禡���O
#include "stdafx.h"

class CWebBrowser2 : public CWnd
{
protected:
	DECLARE_DYNCREATE(CWebBrowser2)
public:
	CLSID const& GetClsid()
	{
		static CLSID const clsid
			= { 0x8856F961, 0x340A, 0x11D0, { 0xA9, 0x6B, 0x0, 0xC0, 0x4F, 0xD7, 0x5, 0xA2 } };
		return clsid;
	}
	virtual BOOL Create(LPCTSTR lpszClassName, LPCTSTR lpszWindowName, DWORD dwStyle,
						const RECT& rect, CWnd* pParentWnd, UINT nID, 
						CCreateContext* pContext = NULL)
	{ 
		return CreateControl(GetClsid(), lpszWindowName, dwStyle, rect, pParentWnd, nID); 
	}

    BOOL Create(LPCTSTR lpszWindowName, DWORD dwStyle, const RECT& rect, CWnd* pParentWnd, 
				UINT nID, CFile* pPersist = NULL, BOOL bStorage = FALSE,
				BSTR bstrLicKey = NULL)
	{ 
		return CreateControl(GetClsid(), lpszWindowName, dwStyle, rect, pParentWnd, nID,
		pPersist, bStorage, bstrLicKey); 
	}

// �ݩ�
public:
enum
{
    CSC_UPDATECOMMANDS = -1,
    CSC_NAVIGATEFORWARD = 1,
    CSC_NAVIGATEBACK = 2
}CommandStateChangeConstants;
enum
{
    OLECMDID_OPEN = 1,
    OLECMDID_NEW = 2,
    OLECMDID_SAVE = 3,
    OLECMDID_SAVEAS = 4,
    OLECMDID_SAVECOPYAS = 5,
    OLECMDID_PRINT = 6,
    OLECMDID_PRINTPREVIEW = 7,
    OLECMDID_PAGESETUP = 8,
    OLECMDID_SPELL = 9,
    OLECMDID_PROPERTIES = 10,
    OLECMDID_CUT = 11,
    OLECMDID_COPY = 12,
    OLECMDID_PASTE = 13,
    OLECMDID_PASTESPECIAL = 14,
    OLECMDID_UNDO = 15,
    OLECMDID_REDO = 16,
    OLECMDID_SELECTALL = 17,
    OLECMDID_CLEARSELECTION = 18,
    OLECMDID_ZOOM = 19,
    OLECMDID_GETZOOMRANGE = 20,
    OLECMDID_UPDATECOMMANDS = 21,
    OLECMDID_REFRESH = 22,
    OLECMDID_STOP = 23,
    OLECMDID_HIDETOOLBARS = 24,
    OLECMDID_SETPROGRESSMAX = 25,
    OLECMDID_SETPROGRESSPOS = 26,
    OLECMDID_SETPROGRESSTEXT = 27,
    OLECMDID_SETTITLE = 28,
    OLECMDID_SETDOWNLOADSTATE = 29,
    OLECMDID_STOPDOWNLOAD = 30,
    OLECMDID_ONTOOLBARACTIVATED = 31,
    OLECMDID_FIND = 32,
    OLECMDID_DELETE = 33,
    OLECMDID_HTTPEQUIV = 34,
    OLECMDID_HTTPEQUIV_DONE = 35,
    OLECMDID_ENABLE_INTERACTION = 36,
    OLECMDID_ONUNLOAD = 37,
    OLECMDID_PROPERTYBAG2 = 38,
    OLECMDID_PREREFRESH = 39,
    OLECMDID_SHOWSCRIPTERROR = 40,
    OLECMDID_SHOWMESSAGE = 41,
    OLECMDID_SHOWFIND = 42,
    OLECMDID_SHOWPAGESETUP = 43,
    OLECMDID_SHOWPRINT = 44,
    OLECMDID_CLOSE = 45,
    OLECMDID_ALLOWUILESSSAVEAS = 46,
    OLECMDID_DONTDOWNLOADCSS = 47,
    OLECMDID_UPDATEPAGESTATUS = 48,
    OLECMDID_PRINT2 = 49,
    OLECMDID_PRINTPREVIEW2 = 50,
    OLECMDID_SETPRINTTEMPLATE = 51,
    OLECMDID_GETPRINTTEMPLATE = 52
}OLECMDID;
enum
{
    OLECMDF_SUPPORTED = 1,
    OLECMDF_ENABLED = 2,
    OLECMDF_LATCHED = 4,
    OLECMDF_NINCHED = 8,
    OLECMDF_INVISIBLE = 16,
    OLECMDF_DEFHIDEONCTXTMENU = 32
}OLECMDF;
enum
{
    OLECMDEXECOPT_DODEFAULT = 0,
    OLECMDEXECOPT_PROMPTUSER = 1,
    OLECMDEXECOPT_DONTPROMPTUSER = 2,
    OLECMDEXECOPT_SHOWHELP = 3
}OLECMDEXECOPT;
enum
{
    READYSTATE_UNINITIALIZED = 0,
    READYSTATE_LOADING = 1,
    READYSTATE_LOADED = 2,
    READYSTATE_INTERACTIVE = 3,
    READYSTATE_COMPLETE = 4
}tagREADYSTATE;
enum
{
    secureLockIconUnsecure = 0,
    secureLockIconMixed = 1,
    secureLockIconSecureUnknownBits = 2,
    secureLockIconSecure40Bit = 3,
    secureLockIconSecure56Bit = 4,
    secureLockIconSecureFortezza = 5,
    secureLockIconSecure128Bit = 6
}SecureLockIconConstants;
enum
{
    SWC_EXPLORER = 0,
    SWC_BROWSER = 1,
    SWC_3RDPARTY = 2,
    SWC_CALLBACK = 4
}ShellWindowTypeConstants;
enum
{
    SWFO_NEEDDISPATCH = 1,
    SWFO_INCLUDEPENDING = 2,
    SWFO_COOKIEPASSED = 4
}ShellWindowFindWindowOptions;


// �@�~
public:

// IWebBrowser2

// Functions
//

	void GoBack()
	{
		InvokeHelper(0x64, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
	}
	void GoForward()
	{
		InvokeHelper(0x65, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
	}
	void GoHome()
	{
		InvokeHelper(0x66, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
	}
	void GoSearch()
	{
		InvokeHelper(0x67, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
	}
	void Navigate(LPCTSTR URL, VARIANT * Flags, VARIANT * TargetFrameName, VARIANT * PostData, VARIANT * Headers)
	{
		static BYTE parms[] = VTS_BSTR VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT ;
		InvokeHelper(0x68, DISPATCH_METHOD, VT_EMPTY, NULL, parms, URL, Flags, TargetFrameName, PostData, Headers);
	}
	void Refresh()
	{
		InvokeHelper(DISPID_REFRESH, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
	}
	void Refresh2(VARIANT * Level)
	{
		static BYTE parms[] = VTS_PVARIANT ;
		InvokeHelper(0x69, DISPATCH_METHOD, VT_EMPTY, NULL, parms, Level);
	}
	void Stop()
	{
		InvokeHelper(0x6a, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
	}
	LPDISPATCH get_Application()
	{
		LPDISPATCH result;
		InvokeHelper(0xc8, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
		return result;
	}
	LPDISPATCH get_Container()
	{
		LPDISPATCH result;
		InvokeHelper(0xca, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
		return result;
	}
	LPDISPATCH get_Document()
	{
		LPDISPATCH result;
		InvokeHelper(0xcb, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
		return result;
	}
	BOOL get_TopLevelContainer()
	{
		BOOL result;
		InvokeHelper(0xcc, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	CString get_Type()
	{
		CString result;
		InvokeHelper(0xcd, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	CString get_LocationName()
	{
		CString result;
		InvokeHelper(0xd2, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	CString get_LocationURL()
	{
		CString result;
		InvokeHelper(0xd3, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	BOOL get_Busy()
	{
		BOOL result;
		InvokeHelper(0xd4, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	void Quit()
	{
		InvokeHelper(0x12c, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
	}
	void ClientToWindow(long * pcx, long * pcy)
	{
		static BYTE parms[] = VTS_PI4 VTS_PI4 ;
		InvokeHelper(0x12d, DISPATCH_METHOD, VT_EMPTY, NULL, parms, pcx, pcy);
	}
	void PutProperty(LPCTSTR Property, VARIANT vtValue)
	{
		static BYTE parms[] = VTS_BSTR VTS_VARIANT ;
		InvokeHelper(0x12e, DISPATCH_METHOD, VT_EMPTY, NULL, parms, Property, &vtValue);
	}
	VARIANT GetProperty(LPCTSTR Property)
	{
		VARIANT result;
		static BYTE parms[] = VTS_BSTR ;
		InvokeHelper(0x12f, DISPATCH_METHOD, VT_VARIANT, (void*)&result, parms, Property);
		return result;
	}
	long get_HWND()
	{
		long result;
		InvokeHelper(DISPID_HWND, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	CString get_FullName()
	{
		CString result;
		InvokeHelper(0x190, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	CString get_Path()
	{
		CString result;
		InvokeHelper(0x191, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	BOOL get_StatusBar()
	{
		BOOL result;
		InvokeHelper(0x193, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	void put_StatusBar(BOOL newValue)
	{
		static BYTE parms[] = VTS_BOOL ;
		InvokeHelper(0x193, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	CString get_StatusText()
	{
		CString result;
		InvokeHelper(0x194, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	void put_StatusText(LPCTSTR newValue)
	{
		static BYTE parms[] = VTS_BSTR ;
		InvokeHelper(0x194, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	long get_ToolBar()
	{
		long result;
		InvokeHelper(0x195, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	void put_ToolBar(long newValue)
	{
		static BYTE parms[] = VTS_I4 ;
		InvokeHelper(0x195, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	BOOL get_MenuBar()
	{
		BOOL result;
		InvokeHelper(0x196, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	void put_MenuBar(BOOL newValue)
	{
		static BYTE parms[] = VTS_BOOL ;
		InvokeHelper(0x196, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	BOOL get_FullScreen()
	{
		BOOL result;
		InvokeHelper(0x197, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	void put_FullScreen(BOOL newValue)
	{
		static BYTE parms[] = VTS_BOOL ;
		InvokeHelper(0x197, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	void Navigate2(VARIANT * URL, VARIANT * Flags, VARIANT * TargetFrameName, VARIANT * PostData, VARIANT * Headers)
	{
		static BYTE parms[] = VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT ;
		InvokeHelper(0x1f4, DISPATCH_METHOD, VT_EMPTY, NULL, parms, URL, Flags, TargetFrameName, PostData, Headers);
	}
	long QueryStatusWB(long cmdID)
	{
		long result;
		static BYTE parms[] = VTS_I4 ;
		InvokeHelper(0x1f5, DISPATCH_METHOD, VT_I4, (void*)&result, parms, cmdID);
		return result;
	}
	void ExecWB(long cmdID, long cmdexecopt, VARIANT * pvaIn, VARIANT * pvaOut)
	{
		static BYTE parms[] = VTS_I4 VTS_I4 VTS_PVARIANT VTS_PVARIANT ;
		InvokeHelper(0x1f6, DISPATCH_METHOD, VT_EMPTY, NULL, parms, cmdID, cmdexecopt, pvaIn, pvaOut);
	}
	void ShowBrowserBar(VARIANT * pvaClsid, VARIANT * pvarShow, VARIANT * pvarSize)
	{
		static BYTE parms[] = VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT ;
		InvokeHelper(0x1f7, DISPATCH_METHOD, VT_EMPTY, NULL, parms, pvaClsid, pvarShow, pvarSize);
	}
	long get_ReadyState()
	{
		long result;
		InvokeHelper(DISPID_READYSTATE, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	BOOL get_Offline()
	{
		BOOL result;
		InvokeHelper(0x226, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	void put_Offline(BOOL newValue)
	{
		static BYTE parms[] = VTS_BOOL ;
		InvokeHelper(0x226, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	BOOL get_Silent()
	{
		BOOL result;
		InvokeHelper(0x227, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	void put_Silent(BOOL newValue)
	{
		static BYTE parms[] = VTS_BOOL ;
		InvokeHelper(0x227, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	BOOL get_RegisterAsBrowser()
	{
		BOOL result;
		InvokeHelper(0x228, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	void put_RegisterAsBrowser(BOOL newValue)
	{
		static BYTE parms[] = VTS_BOOL ;
		InvokeHelper(0x228, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	BOOL get_RegisterAsDropTarget()
	{
		BOOL result;
		InvokeHelper(0x229, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	void put_RegisterAsDropTarget(BOOL newValue)
	{
		static BYTE parms[] = VTS_BOOL ;
		InvokeHelper(0x229, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	BOOL get_TheaterMode()
	{
		BOOL result;
		InvokeHelper(0x22a, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	void put_TheaterMode(BOOL newValue)
	{
		static BYTE parms[] = VTS_BOOL ;
		InvokeHelper(0x22a, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	BOOL get_AddressBar()
	{
		BOOL result;
		InvokeHelper(0x22b, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	void put_AddressBar(BOOL newValue)
	{
		static BYTE parms[] = VTS_BOOL ;
		InvokeHelper(0x22b, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	BOOL get_Resizable()
	{
		BOOL result;
		InvokeHelper(0x22c, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	void put_Resizable(BOOL newValue)
	{
		static BYTE parms[] = VTS_BOOL ;
		InvokeHelper(0x22c, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	void put_Cancel(BOOL newValue)
	{
		static BYTE parms[] = VTS_BOOL ;
		InvokeHelper(0x80010038, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	BOOL get_Cancel()
	{
		BOOL result;
		InvokeHelper(0x80010038, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	void put_ControlSource(LPCTSTR newValue)
	{
		static BYTE parms[] = VTS_BSTR ;
		InvokeHelper(0x80018001, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	CString get_ControlSource()
	{
		CString result;
		InvokeHelper(0x80018001, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	void put_ControlTipText(LPCTSTR newValue)
	{
		static BYTE parms[] = VTS_BSTR ;
		InvokeHelper(0x80010045, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	CString get_ControlTipText()
	{
		CString result;
		InvokeHelper(0x80010045, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	void put_Default(BOOL newValue)
	{
		static BYTE parms[] = VTS_BOOL ;
		InvokeHelper(0x80010037, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	BOOL get_Default()
	{
		BOOL result;
		InvokeHelper(0x80010037, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	void _SetHeight(long Height)
	{
		static BYTE parms[] = VTS_I4 ;
		InvokeHelper(0x60020008, DISPATCH_METHOD, VT_EMPTY, NULL, parms, Height);
	}
	void _GetHeight(long * Height)
	{
		static BYTE parms[] = VTS_PI4 ;
		InvokeHelper(0x60020009, DISPATCH_METHOD, VT_EMPTY, NULL, parms, Height);
	}
	void put_Height(float newValue)
	{
		static BYTE parms[] = VTS_R4 ;
		InvokeHelper(0x80010006, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	float get_Height()
	{
		float result;
		InvokeHelper(0x80010006, DISPATCH_PROPERTYGET, VT_R4, (void*)&result, NULL);
		return result;
	}
	void put_HelpContextID(long newValue)
	{
		static BYTE parms[] = VTS_I4 ;
		InvokeHelper(0x80010032, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	long get_HelpContextID()
	{
		long result;
		InvokeHelper(0x80010032, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	void put_InSelection(BOOL newValue)
	{
		static BYTE parms[] = VTS_BOOL ;
		InvokeHelper(0x80018003, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	BOOL get_InSelection()
	{
		BOOL result;
		InvokeHelper(0x80018003, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	long get_LayoutEffect()
	{
		long result;
		InvokeHelper(0x80018004, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	void _SetLeft(long Left)
	{
		static BYTE parms[] = VTS_I4 ;
		InvokeHelper(0x60020011, DISPATCH_METHOD, VT_EMPTY, NULL, parms, Left);
	}
	void _GetLeft(long * Left)
	{
		static BYTE parms[] = VTS_PI4 ;
		InvokeHelper(0x60020012, DISPATCH_METHOD, VT_EMPTY, NULL, parms, Left);
	}
	void put_Left(float newValue)
	{
		static BYTE parms[] = VTS_R4 ;
		InvokeHelper(0x80010003, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	float get_Left()
	{
		float result;
		InvokeHelper(0x80010003, DISPATCH_PROPERTYGET, VT_R4, (void*)&result, NULL);
		return result;
	}
	void put_Name(LPCTSTR newValue)
	{
		static BYTE parms[] = VTS_BSTR ;
		InvokeHelper(0x80010000, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	CString get_Name()
	{
		CString result;
		InvokeHelper(0x80010000, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	void _GetOldHeight(long * OldHeight)
	{
		static BYTE parms[] = VTS_PI4 ;
		InvokeHelper(0x60020017, DISPATCH_METHOD, VT_EMPTY, NULL, parms, OldHeight);
	}
	float get_OldHeight()
	{
		float result;
		InvokeHelper(0x80018005, DISPATCH_PROPERTYGET, VT_R4, (void*)&result, NULL);
		return result;
	}
	void _GetOldLeft(long * OldLeft)
	{
		static BYTE parms[] = VTS_PI4 ;
		InvokeHelper(0x60020019, DISPATCH_METHOD, VT_EMPTY, NULL, parms, OldLeft);
	}
	float get_OldLeft()
	{
		float result;
		InvokeHelper(0x80018006, DISPATCH_PROPERTYGET, VT_R4, (void*)&result, NULL);
		return result;
	}
	void _GetOldTop(long * OldTop)
	{
		static BYTE parms[] = VTS_PI4 ;
		InvokeHelper(0x6002001b, DISPATCH_METHOD, VT_EMPTY, NULL, parms, OldTop);
	}
	float get_OldTop()
	{
		float result;
		InvokeHelper(0x80018007, DISPATCH_PROPERTYGET, VT_R4, (void*)&result, NULL);
		return result;
	}
	void _GetOldWidth(long * OldWidth)
	{
		static BYTE parms[] = VTS_PI4 ;
		InvokeHelper(0x6002001d, DISPATCH_METHOD, VT_EMPTY, NULL, parms, OldWidth);
	}
	float get_OldWidth()
	{
		float result;
		InvokeHelper(0x80018008, DISPATCH_PROPERTYGET, VT_R4, (void*)&result, NULL);
		return result;
	}
	LPDISPATCH get_Object()
	{
		LPDISPATCH result;
		InvokeHelper(DISPID_Object, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
		return result;
	}
	LPDISPATCH get_Parent()
	{
		LPDISPATCH result;
		InvokeHelper(0x80010008, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
		return result;
	}
	void put_RowSource(LPCTSTR newValue)
	{
		static BYTE parms[] = VTS_BSTR ;
		InvokeHelper(0x8001800e, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	CString get_RowSource()
	{
		CString result;
		InvokeHelper(0x8001800e, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	void put_RowSourceType(short newValue)
	{
		static BYTE parms[] = VTS_I2 ;
		InvokeHelper(0x8001800f, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	short get_RowSourceType()
	{
		short result;
		InvokeHelper(0x8001800f, DISPATCH_PROPERTYGET, VT_I2, (void*)&result, NULL);
		return result;
	}
	void put_TabIndex(short newValue)
	{
		static BYTE parms[] = VTS_I2 ;
		InvokeHelper(0x8001000f, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	short get_TabIndex()
	{
		short result;
		InvokeHelper(0x8001000f, DISPATCH_PROPERTYGET, VT_I2, (void*)&result, NULL);
		return result;
	}
	void put_TabStop(BOOL newValue)
	{
		static BYTE parms[] = VTS_BOOL ;
		InvokeHelper(0x8001000e, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	BOOL get_TabStop()
	{
		BOOL result;
		InvokeHelper(0x8001000e, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	void put_Tag(LPCTSTR newValue)
	{
		static BYTE parms[] = VTS_BSTR ;
		InvokeHelper(0x8001000b, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	CString get_Tag()
	{
		CString result;
		InvokeHelper(0x8001000b, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	void _SetTop(long Top)
	{
		static BYTE parms[] = VTS_I4 ;
		InvokeHelper(0x6002002b, DISPATCH_METHOD, VT_EMPTY, NULL, parms, Top);
	}
	void _GetTop(long * Top)
	{
		static BYTE parms[] = VTS_PI4 ;
		InvokeHelper(0x6002002c, DISPATCH_METHOD, VT_EMPTY, NULL, parms, Top);
	}
	void put_Top(float newValue)
	{
		static BYTE parms[] = VTS_R4 ;
		InvokeHelper(0x80010004, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	float get_Top()
	{
		float result;
		InvokeHelper(0x80010004, DISPATCH_PROPERTYGET, VT_R4, (void*)&result, NULL);
		return result;
	}
	void put_BoundValue(VARIANT * newValue)
	{
		static BYTE parms[] = VTS_PVARIANT ;
		InvokeHelper(0x80018010, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	VARIANT get_BoundValue()
	{
		VARIANT result;
		InvokeHelper(0x80018010, DISPATCH_PROPERTYGET, VT_VARIANT, (void*)&result, NULL);
		return result;
	}
	void put_Visible(BOOL newValue)
	{
		static BYTE parms[] = VTS_BOOL ;
		InvokeHelper(0x80010007, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	BOOL get_Visible()
	{
		BOOL result;
		InvokeHelper(0x80010007, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	void _SetWidth(long Width)
	{
		static BYTE parms[] = VTS_I4 ;
		InvokeHelper(0x60020033, DISPATCH_METHOD, VT_EMPTY, NULL, parms, Width);
	}
	void _GetWidth(long * Width)
	{
		static BYTE parms[] = VTS_PI4 ;
		InvokeHelper(0x60020034, DISPATCH_METHOD, VT_EMPTY, NULL, parms, Width);
	}
	void put_Width(float newValue)
	{
		static BYTE parms[] = VTS_R4 ;
		InvokeHelper(0x80010005, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	float get_Width()
	{
		float result;
		InvokeHelper(0x80010005, DISPATCH_PROPERTYGET, VT_R4, (void*)&result, NULL);
		return result;
	}
	void Move(VARIANT Left, VARIANT Top, VARIANT Width, VARIANT Height, VARIANT Layout)
	{
		static BYTE parms[] = VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT ;
		InvokeHelper(0x80018100, DISPATCH_METHOD, VT_EMPTY, NULL, parms, &Left, &Top, &Width, &Height, &Layout);
	}
	void ZOrder(VARIANT zPosition)
	{
		static BYTE parms[] = VTS_VARIANT ;
		InvokeHelper(0x80018105, DISPATCH_METHOD, VT_EMPTY, NULL, parms, &zPosition);
	}
	void Select(BOOL SelectInGroup)
	{
		static BYTE parms[] = VTS_BOOL ;
		InvokeHelper(0x80018102, DISPATCH_METHOD, VT_EMPTY, NULL, parms, SelectInGroup);
	}
	void SetFocus()
	{
		InvokeHelper(0x80018103, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
	}
	long _GethWnd()
	{
		long result;
		InvokeHelper(0x6002003b, DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
		return result;
	}
	long _GetID()
	{
		long result;
		InvokeHelper(0x6002003c, DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
		return result;
	}
	void _Move(long Left, long Top, long Width, long Height)
	{
		static BYTE parms[] = VTS_I4 VTS_I4 VTS_I4 VTS_I4 ;
		InvokeHelper(0x6002003d, DISPATCH_METHOD, VT_EMPTY, NULL, parms, Left, Top, Width, Height);
	}
	void _ZOrder(long zPosition)
	{
		static BYTE parms[] = VTS_I4 ;
		InvokeHelper(0x6002003e, DISPATCH_METHOD, VT_EMPTY, NULL, parms, zPosition);
	}

// Properties
//



};
