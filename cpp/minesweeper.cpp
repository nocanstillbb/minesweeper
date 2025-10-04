#include "minesweeper.h"

namespace minesweeper 
{
MinesweeperModule::MinesweeperModule(std::shared_ptr<facebook::react::CallInvoker> jsInvoker) : facebook::react::NativeMinesweeperCxxSpec<MinesweeperModule>(jsInvoker)
{
}
double MinesweeperModule::multiply2(facebook::jsi::Runtime &rt, double a, double b)
{
    return 11;
}
double MinesweeperModule::multiply(facebook::jsi::Runtime &rt, double a, double b)
{
    return 22;
}
} // namespace minesweeper
