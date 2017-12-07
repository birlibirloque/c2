project(chapterFirstExample)
cmake_minimum_required(VERSION 2.6)

include(${CMAKE_BINARY_DIR}/conanbuildinfo.cmake)
conan_basic_setup()

add_definitions(-std=c++0x)

set(sources 
   main.cpp 
   SoundexTest.cpp)
add_executable(test ${sources})
target_link_libraries(test pthread ${CONAN_LIBS})

