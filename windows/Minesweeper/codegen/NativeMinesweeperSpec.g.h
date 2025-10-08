
/*
 * This file is auto-generated from a NativeModule spec file in js.
 *
 * This is a C++ Spec class that should be used with MakeTurboModuleProvider to register native modules
 * in a way that also verifies at compile time that the native module matches the interface required
 * by the TurboModule JS spec.
 */
#pragma once
// clang-format off

// #include "NativeMinesweeperDataTypes.g.h" before this file to use the generated type definition
#include <NativeModules.h>
#include <tuple>

namespace MinesweeperCodegen {

inline winrt::Microsoft::ReactNative::FieldMap GetStructInfo(MinesweeperSpec_Mine*) noexcept {
    winrt::Microsoft::ReactNative::FieldMap fieldMap {
        {L"uuid", &MinesweeperSpec_Mine::uuid},
        {L"value", &MinesweeperSpec_Mine::value},
        {L"visual_value", &MinesweeperSpec_Mine::visual_value},
        {L"isPressed", &MinesweeperSpec_Mine::isPressed},
        {L"isLastPressed", &MinesweeperSpec_Mine::isLastPressed},
    };
    return fieldMap;
}

inline winrt::Microsoft::ReactNative::FieldMap GetStructInfo(MinesweeperSpec_Mines*) noexcept {
    winrt::Microsoft::ReactNative::FieldMap fieldMap {
        {L"uuid", &MinesweeperSpec_Mines::uuid},
        {L"length", &MinesweeperSpec_Mines::length},
        {L"list", &MinesweeperSpec_Mines::list},
    };
    return fieldMap;
}

inline winrt::Microsoft::ReactNative::FieldMap GetStructInfo(MinesweeperSpec_MineVM*) noexcept {
    winrt::Microsoft::ReactNative::FieldMap fieldMap {
        {L"uuid", &MinesweeperSpec_MineVM::uuid},
        {L"mode", &MinesweeperSpec_MineVM::mode},
        {L"row_num", &MinesweeperSpec_MineVM::row_num},
        {L"col_num", &MinesweeperSpec_MineVM::col_num},
        {L"mine_num", &MinesweeperSpec_MineVM::mine_num},
        {L"mines", &MinesweeperSpec_MineVM::mines},
        {L"eTime_ms", &MinesweeperSpec_MineVM::eTime_ms},
        {L"flag_num", &MinesweeperSpec_MineVM::flag_num},
        {L"status", &MinesweeperSpec_MineVM::status},
        {L"cellPixcelSize", &MinesweeperSpec_MineVM::cellPixcelSize},
        {L"difficulties", &MinesweeperSpec_MineVM::difficulties},
        {L"tmp_difficulties", &MinesweeperSpec_MineVM::tmp_difficulties},
        {L"tmp_row_num", &MinesweeperSpec_MineVM::tmp_row_num},
        {L"tmp_col_num", &MinesweeperSpec_MineVM::tmp_col_num},
        {L"tmp_mine_num", &MinesweeperSpec_MineVM::tmp_mine_num},
    };
    return fieldMap;
}

struct MinesweeperSpec : winrt::Microsoft::ReactNative::TurboModuleSpec {
  static constexpr auto methods = std::tuple{
      SyncMethod<MinesweeperSpec_MineVM() noexcept>{0, L"getMinesVm"},
      Method<void() noexcept>{1, L"initCells"},
      Method<void() noexcept>{2, L"regen"},
      Method<void(double) noexcept>{3, L"open"},
      EventEmitter<void(double)>{4, L"onValueChanged"},
  };

  template <class TModule>
  static constexpr void ValidateModule() noexcept {
    constexpr auto methodCheckResults = CheckMethods<TModule, MinesweeperSpec>();

    REACT_SHOW_METHOD_SPEC_ERRORS(
          0,
          "getMinesVm",
          "    REACT_SYNC_METHOD(getMinesVm) MinesweeperSpec_MineVM getMinesVm() noexcept { /* implementation */ }\n"
          "    REACT_SYNC_METHOD(getMinesVm) static MinesweeperSpec_MineVM getMinesVm() noexcept { /* implementation */ }\n");
    REACT_SHOW_METHOD_SPEC_ERRORS(
          1,
          "initCells",
          "    REACT_METHOD(initCells) void initCells() noexcept { /* implementation */ }\n"
          "    REACT_METHOD(initCells) static void initCells() noexcept { /* implementation */ }\n");
    REACT_SHOW_METHOD_SPEC_ERRORS(
          2,
          "regen",
          "    REACT_METHOD(regen) void regen() noexcept { /* implementation */ }\n"
          "    REACT_METHOD(regen) static void regen() noexcept { /* implementation */ }\n");
    REACT_SHOW_METHOD_SPEC_ERRORS(
          3,
          "open",
          "    REACT_METHOD(open) void open(double i) noexcept { /* implementation */ }\n"
          "    REACT_METHOD(open) static void open(double i) noexcept { /* implementation */ }\n");
    REACT_SHOW_EVENTEMITTER_SPEC_ERRORS(
          4,
          "onValueChanged",
          "    REACT_EVENT(onValueChanged) std::function<void(double)> onValueChanged;\n");
  }
};

} // namespace MinesweeperCodegen
