
/*
 * This file is auto-generated from a NativeModule spec file in js.
 *
 * This is a C++ Spec class that should be used with MakeTurboModuleProvider to register native modules
 * in a way that also verifies at compile time that the native module matches the interface required
 * by the TurboModule JS spec.
 */
#pragma once
// clang-format off

#include <string>
#include <optional>
#include <functional>
#include <vector>

namespace MinesweeperCodegen {

struct MinesweeperSpec_Mine {
    std::string uuid;
    double value;
    double visual_value;
    bool isPressed;
    bool isLastPressed;
};

struct MinesweeperSpec_Mines {
    std::string uuid;
    double length;
    std::vector<MinesweeperSpec_Mine> list;
};

struct MinesweeperSpec_MineVM {
    std::string uuid;
    double mode;
    double row_num;
    double col_num;
    double mine_num;
    MinesweeperSpec_Mines mines;
    double eTime_ms;
    double flag_num;
    double status;
    double cellPixcelSize;
    double difficulties;
    double tmp_difficulties;
    double tmp_row_num;
    double tmp_col_num;
    double tmp_mine_num;
};

} // namespace MinesweeperCodegen
