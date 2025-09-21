#include "pch.h"

#include "Minesweeper.h"

namespace winrt::Minesweeper
{

// See https://microsoft.github.io/react-native-windows/docs/native-platform for help writing native modules

void Minesweeper::Initialize(React::ReactContext const &reactContext) noexcept {
  m_context = reactContext;
}

double Minesweeper::multiply(double a, double b) noexcept {
  return a * b;
}

} // namespace winrt::Minesweeper