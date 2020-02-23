MESSAGE(STATUS "Using bundled Findlibcef.cmake...")

FIND_PATH(
        LIBDB_CXX_INCLUDE_DIR
        /home/jianghuiyao/data/environment/cef_binary_79.1.36+g90301bd+chromium-79.0.3945.130_linux64/include
   )

FIND_LIBRARY(
  LIBDB_CXX_LIBRARIES NAMES  ibcef
   PATHS /usr/lib/ /usr/local/lib/
   )