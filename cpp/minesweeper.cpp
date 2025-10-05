#include "minesweeper.h"
#include <prism/prism.hpp>

struct aaaa
{
  int b = 3;
  int d = 4;
};
PRISM_FIELDS(aaaa,b,d)




namespace minesweeper
{
MinesweeperModule::MinesweeperModule(std::shared_ptr<facebook::react::CallInvoker> jsInvoker) : facebook::react::NativeMinesweeperCxxSpec<MinesweeperModule>(jsInvoker)
{
}
double MinesweeperModule::multiply2(facebook::jsi::Runtime &rt, double a, double b)
{
  double result = -1;
  aaaa bb;
  prism::reflection::for_each_fields(bb, [&](const char* fn, auto&& value){
    result += value;
  });
    return result;
}
double MinesweeperModule::multiply(facebook::jsi::Runtime &rt, double a, double b)
{
    return 22;
}
} // namespace minesweeper
