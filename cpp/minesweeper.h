#ifndef MINESWEEPER_H
#define MINESWEEPER_H



#include <iostream>
#include <memory>
#include <string>
#include <ReactCommon/CxxTurboModuleUtils.h>

#include "RNMinesweeperSpecJSI.h"



namespace minesweeper {

static const char *const Name = "Minesweeper";

class JSI_EXPORT MinesweeperModule :public facebook::react::NativeMinesweeperCxxSpec<MinesweeperModule>
{
public:
  MinesweeperModule();
  MinesweeperModule(std::shared_ptr<facebook::react::CallInvoker> jsInvoker);
  double multiply(facebook::jsi::Runtime &rt, double a, double b);
  double multiply2(facebook::jsi::Runtime &rt, double a, double b);
};

struct RegisterMinesweeperModule
{
  
  RegisterMinesweeperModule()
  {
    facebook::react::registerCxxModuleToGlobalModuleMap(Name, [](std::shared_ptr<facebook::react::CallInvoker> jsInvoker) { return std::make_shared<MinesweeperModule>(jsInvoker); });
  }
};

static inline RegisterMinesweeperModule _RegisterMinesweeperModule ;


}

#endif /* MINESWEEPER_H */
