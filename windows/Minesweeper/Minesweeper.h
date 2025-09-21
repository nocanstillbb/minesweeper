#pragma once

#include "pch.h"
#include "resource.h"

#if __has_include("codegen/NativeMinesweeperDataTypes.g.h")
  #include "codegen/NativeMinesweeperDataTypes.g.h"
#endif
#include "codegen/NativeMinesweeperSpec.g.h"

#include "NativeModules.h"

namespace winrt::Minesweeper
{

// See https://microsoft.github.io/react-native-windows/docs/native-platform for help writing native modules

REACT_MODULE(Minesweeper)
struct Minesweeper
{
  using ModuleSpec = MinesweeperCodegen::MinesweeperSpec;

  REACT_INIT(Initialize)
  void Initialize(React::ReactContext const &reactContext) noexcept;

  REACT_SYNC_METHOD(multiply)
  double multiply(double a, double b) noexcept;

private:
  React::ReactContext m_context;
};

} // namespace winrt::Minesweeper