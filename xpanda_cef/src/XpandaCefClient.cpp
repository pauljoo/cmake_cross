#include "XpandaCefClient.h"

XpandaCefClient::XpandaCefClient() {}
XpandaCefClient::~XpandaCefClient() {}
void XpandaCefClient::OnAfterCreated(CefRefPtr<CefBrowser> browser)
{
	m_cefBrowser = browser;
}