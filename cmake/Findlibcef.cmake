MESSAGE(STATUS "Using bundled Findlibcef.cmake...")

include_directories(/home/jianghuiyao/data/environment/cef_binary_79.1.36+g90301bd+chromium-79.0.3945.130_linux64)

FIND_LIBRARY(
        LIBCEF_CXX_LIBRARIES
        NAMES libcef
        PATHS /home/jianghuiyao/data/environment/cef_binary_79.1.36+g90301bd+chromium-79.0.3945.130_linux64/Release
)