//
// Created by jianghuiyao on 2020/2/23.
//

#ifndef CMAKE_CROSS_XPANDACEFCLIENT_H
#define CMAKE_CROSS_XPANDACEFCLIENT_H

#endif //CMAKE_CROSS_XPANDACEFCLIENT_H

// 定义的结构体与平台相关

CefWindowInfo info;
// On Windows for example...
info.SetAsChild(parent_hwnd, client_rect);

// Customize this structure to control browser behavior.
CefBrowserSettings settings;

// CefClient implementation.
CefRefPtr<MyClient> client(new MyClient);

// Create the browser asynchronously. Initially loads the Google URL.
CefBrowserHost::CreateBrowser(info, client.get(), “http://www.google.com”, settings);

The CefLifeSpanHandler class provides the callbacks necessary for managing browser life span. Below is an extract of the relevant methods and members.

CefLifeSpanHandler 类提供管理 Browser生命周期必需的回调。以下为相关方法和成员。

class XpandaCefClient : public CefClient,
                 public CefLifeSpanHandler,
... {
// CefClient methods.
virtual CefRefPtr<CefLifeSpanHandler> GetLifeSpanHandler() OVERRIDE {
return this;
}

// CefLifeSpanHandler methods.
void OnAfterCreated(CefRefPtr<CefBrowser> browser) OVERRIDE;
bool DoClose(CefRefPtr<CefBrowser> browser) OVERRIDE;
void OnBeforeClose(CefRefPtr<CefBrowser> browser) OVERRIDE;

// Member accessors.
CefRefPtr<CefBrowser> GetBrower() { return m_Browser; }
bool IsClosing() { return m_bIsClosing; }

private:
CefRefPtr<CefBrowser> m_Browser;
int m_BrowserId;
int m_BrowserCount;
bool m_bIsClosing;

IMPLEMENT_REFCOUNTING(MyHandler);
IMPLEMENT_LOCKING(MyHandler);
};