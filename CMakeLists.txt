# cmake_minimum_required(VERSION <specify CMake version here>)
cmake_minimum_required(VERSION 3.16)

project(cmake_cross)

set(CMAKE_CXX_STANDARD 14)

add_subdirectory(xl_demo)

add_executable(cmake_cross main.cpp)

target_link_libraries(cmake_cross xl_demo)

IF(WIN32)
    MESSAGE(STATUS “This is Windows.”)
ELSEIF(UNIX)
    MESSAGE(STATUS “This is Linux.”)
ELSEIF(APPLE)
    MESSAGE(STATUS “This is APPLE.”)
ENDIF(WIN32)