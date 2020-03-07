#pragma once

#include "include/cef_client.h"

class XpandaCefClient : public CefClient, public CefLifeSpanHandler
{
public:
    XpandaCefClient();
	~XpandaCefClient();

	virtual CefRefPtr<CefLifeSpanHandler> GetLifeSpanHandler() OVERRIDE
	{
		return this;
	}

	// CefLifeSpanHandler methods:
	virtual void OnAfterCreated(CefRefPtr<CefBrowser> browser) OVERRIDE;

	CefRefPtr<CefBrowser> GetBrowser() { return m_cefBrowser; }

private:
	CefRefPtr<CefBrowser> m_cefBrowser;

	IMPLEMENT_REFCOUNTING(XpandaCefClient);
};