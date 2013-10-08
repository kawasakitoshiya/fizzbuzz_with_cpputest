project(CppUTestTest)
cmake_minimum_required(VERSION 2.8)
set(SRC_DIR "src")

if(APPLE)
    ADD_DEFINITIONS(-Wdeprecated-declarations)   
else()
    ADD_DEFINITIONS(-std=c++0x)    
    ADD_DEFINITIONS(-fPIC)
endif()
ADD_DEFINITIONS(-mssse3)
set(CMAKE_CXX_FLAGS ${CMAKE_CXX_FLAGS} )

set(LIBRARY_OUTPUT_PATH "${PROJECT_BINARY_DIR}/lib" CACHE PATH
    "Output directory for library" )
set(EXECUTABLE_OUTPUT_PATH "${PROJECT_BINARY_DIR}/bin" CACHE PATH
     "Output directory for executables" )

include_directories("src")
enable_testing()
add_subdirectory("test")
