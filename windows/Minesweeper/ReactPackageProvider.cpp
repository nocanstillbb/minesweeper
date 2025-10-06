#include "pch.h"

#include "ReactPackageProvider.h"
#if __has_include("ReactPackageProvider.g.cpp")
#include "ReactPackageProvider.g.cpp"
#endif

#include "../../cpp/minesweeper.h"
#include <TurboModuleProvider.h>

using namespace winrt::Microsoft::ReactNative;

namespace winrt::Minesweeper::implementation
{

void ReactPackageProvider::CreatePackage(IReactPackageBuilder const &packageBuilder) noexcept
{
  //AddAttributedModules(packageBuilder, true);
  winrt::Microsoft::ReactNative::AddTurboModuleProvider<minesweeper::MinesweeperModule>(packageBuilder, L"Minesweeper");
}

} // namespace winrt::Minesweeper::implementation
