cmake_minimum_required(VERSION 3.4.1)
project(Minesweeper)

set (CMAKE_VERBOSE_MAKEFILE ON)
set (CMAKE_CXX_STANDARD 20)

add_library(minesweeper            SHARED
            ../cpp/minesweeper.cpp
            #cpp-adapter.cpp
)

# Specifies a path to native header files.
include_directories(
   ../cpp
   build/generated/source/codegen/jni/react/renderer/components
   "${CMAKE_CURRENT_LIST_DIR}/../../prism/include"
)

target_link_libraries(
  minesweeper
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
