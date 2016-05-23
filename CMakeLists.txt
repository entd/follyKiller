cmake_minimum_required(VERSION 2.8)

project(ImageWebService)
set(CMAKE_MODULE_PATH "${CMAKE_MODULE_PATH};${CMAKE_CURRENT_SOURCE_DIR}/cmake")
find_package(Folly)
include_directories(${FOLLY_INCLUDE_DIR})
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++14 -Wall -Wextra -Wno-unused-parameter")

add_executable(ImageWebService main.cpp)
target_link_libraries(ImageWebService ${FOLLY_LIBRARIES})