cmake_minimum_required(VERSION 3.4.1)
project(Minesweeper)

set (CMAKE_VERBOSE_MAKEFILE ON)
set (CMAKE_CXX_STANDARD 20)

add_library(minesweeper            SHARED
            ../cpp/minesweeper.cpp
            #cpp-adapter.cpp
)



# fmt
add_library(fmt STATIC ${CMAKE_CURRENT_LIST_DIR}/../../../../ios/Pods/fmt/src/format.cc)
target_include_directories(fmt PUBLIC ${CMAKE_CURRENT_LIST_DIR}/../../../ios/Pods/fmt/include)


# Specifies a path to native header files.
include_directories(
   ../cpp
   build/generated/source/codegen/jni/react/renderer/components
   "${CMAKE_CURRENT_LIST_DIR}/../../prism/include"
   "${CMAKE_CURRENT_LIST_DIR}/../../prism-rn/include"
   "${CMAKE_CURRENT_LIST_DIR}/../../prism_container/include"
)

target_link_libraries(
  minesweeper
  fmt
  fbjni
  jsi
  reactnative
  react_codegen_RNMinesweeperSpec
)

target_compile_options(
  minesweeper
  PRIVATE
  -DLOG_TAG=\"ReactNative\"
  -fexceptions
  -frtti
  -std=c++20
  -Wall
)
