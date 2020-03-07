# cmake_minimum_required(VERSION <specify CMake version here>)
cmake_minimum_required(VERSION 3.16)

project(cmake_cross)

set(CMAKE_CXX_STANDARD 14)
SET(CMAKE_MODULE_PATH cmake)
# 利用pkg-config寻找包
# pkg-config --cflags gtk+-3.0
# pkg-config --libs gtk+-3.0
find_package(PkgConfig REQUIRED)
pkg_check_modules(GTK3 REQUIRED gtk+-3.0)

# gtk+-3.0
include_directories(${GTK3_INCLUDE_DIRS})
link_directories(${GTK3_LIBRARY_DIRS})
add_definitions(${GTK3_CFLAGS_OTHER})

find_package(libcef REQUIRED)

add_subdirectory(xpanda_demo)

add_executable(cmake_cross main.cpp)

add_executable(cmake_cross_gtk main_gtk.cpp)

add_executable(cmake_cross_cef main_cef.cpp src/XpandaCefApp.cpp)

target_link_libraries(cmake_cross xpanda_demo)
target_link_libraries (cmake_cross_gtk ${GTK3_LIBRARIES})
target_link_libraries (cmake_cross_cef ${GTK3_LIBRARIES} ${LIBCEF_LIBRARY} ${LIBCEF_DLL_LIBRARY})

IF(WIN32)
    MESSAGE(STATUS “This is Windows.”)
ELSEIF(UNIX)
    MESSAGE(STATUS “This is Linux.”)
ELSEIF(APPLE)
    MESSAGE(STATUS “This is APPLE.”)
ENDIF(WIN32)