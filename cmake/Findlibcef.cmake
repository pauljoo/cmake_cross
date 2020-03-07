MESSAGE(STATUS "Using bundled Findlibcef.cmake...")

include_directories(/home/jianghuiyao/data/environment/cef_binary_79.1.36+g90301bd+chromium-79.0.3945.130_linux64)

FIND_LIBRARY(
        LIBCEF_LIBRARY
        NAMES libcef.so
        PATHS
        /home/jianghuiyao/data/environment/cef_binary_79.1.36+g90301bd+chromium-79.0.3945.130_linux64/Release/
)

FIND_LIBRARY(
        LIBCEF_DLL_LIBRARY
        NAMES libcef_dll_wrapper.a
        PATHS /home/jianghuiyao/data/environment/cef_binary_79.1.36+g90301bd+chromium-79.0.3945.130_linux64/libcef_dll_wrapper/
)