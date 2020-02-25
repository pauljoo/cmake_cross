// Copyright (c) 2013 The Chromium Embedded Framework Authors. All rights
// reserved. Use of this source code is governed by a BSD-style license that
// can be found in the LICENSE file.
#include "XpandaCefApp.h"

#include <string>

#include "XpandaCefHandler.h"
#include "include/cef_browser.h"
#include "include/cef_command_line.h"
#include "include/views/cef_browser_view.h"
#include "include/views/cef_window.h"
#include "include/wrapper/cef_helpers.h"


XpandaCefApp::XpandaCefApp() {

}

void XpandaCefApp::OnContextInitialized() {
	/*CEF_REQUIRE_UI_THREAD();

	// SimpleHandler implements browser-level callbacks.
	// ������ص� ���������
	CefRefPtr<SimpleHandler> handler(new SimpleHandler());

	// Specify CEF browser settings here.
	CefBrowserSettings browser_settings;

	std::string url = "http://www.baidu.com";

	RECT rect;
	GetClientRect(m_pParentWindow, &rect);
	RECT rectnew = rect;
	rectnew.top = rect.top + 50;
	rectnew.bottom = rect.bottom;
	rectnew.left = rect.left;
	rectnew.right = rect.right;

	CefWindowInfo window_info;
	window_info.SetAsChild(m_pParentWindow, rectnew);

	// Create the first browser window.
	CefBrowserHost::CreateBrowser(window_info, handler.get(), url, browser_settings,
		NULL);*/

}
