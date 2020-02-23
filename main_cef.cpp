//
// Created by jianghuiyao on 2020/2/23.
//

int main(int argc, char* argv[]) {
    // Structure for passing command-line arguments.
    // The definition of this structure is platform-specific.
    CefMainArgs main_args(argc, argv);

    // Optional implementation of the CefApp interface.
    CefRefPtr<XpandaCefApp> app(new XpandaCefApp);

    // Execute the sub-process logic, if any. This will either return immediately for the browser
    // process or block until the sub-process should exit.
    int exit_code = CefExecuteProcess(main_args, app.get());
    if (exit_code >= 0) {
        // The sub-process terminated, exit now.
        return exit_code;
    }

    // Populate this structure to customize CEF behavior.
    CefSettings settings;

    // Initialize CEF in the main process.
    CefInitialize(main_args, settings, app.get());

    // Run the CEF message loop. This will block until CefQuitMessageLoop() is called.
    CefRunMessageLoop();

    // Shut down CEF.
    CefShutdown();

    return 0;
}