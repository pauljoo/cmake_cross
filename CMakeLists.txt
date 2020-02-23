# cmake_minimum_required(VERSION <specify CMake version here>)
cmake_minimum_required(VERSION 3.16)

project(cmake_cross)

set(CMAKE_CXX_STANDARD 14)

# Use the package PkgConfig to detect GTK+ headers/library files
find_package(PkgConfig REQUIRED)
pkg_check_modules(GTK3 REQUIRED gtk+-3.0)
include_directories(${GTK3_INCLUDE_DIRS})
message(status " GTK3_INCLUDE_DIRS = ${GTK3_INCLUDE_DIRS}")
link_directories(${GTK3_LIBRARY_DIRS})
message(status " GTK3_LIBRARY_DIRS = ${GTK3_LIBRARY_DIRS}")
add_definitions(${GTK3_CFLAGS_OTHER})
message(status " GTK3_CFLAGS_OTHER = ${GTK3_CFLAGS_OTHER}")

add_subdirectory(xl_demo)

add_executable(cmake_cross main.cpp)

add_executable(cmake_cross_gtk main_gtk.cpp)

target_link_libraries(cmake_cross xl_demo)
target_link_libraries (cmake_cross_gtk ${GTK3_LIBRARIES})
IF(WIN32)
    MESSAGE(STATUS “This is Windows.”)
ELSEIF(UNIX)
    MESSAGE(STATUS “This is Linux.”)
ELSEIF(APPLE)
    MESSAGE(STATUS “This is APPLE.”)
ENDIF(WIN32)