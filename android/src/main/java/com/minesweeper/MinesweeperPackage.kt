package com.minesweeper

import com.facebook.react.BaseReactPackage
import com.facebook.react.bridge.NativeModule
import com.facebook.react.bridge.ReactApplicationContext
import com.facebook.react.module.model.ReactModuleInfo
import com.facebook.react.module.model.ReactModuleInfoProvider
import java.util.HashMap

class MinesweeperPackage //: BaseReactPackage() 
{
  //override 
  fun getModule(name: String, reactContext: ReactApplicationContext): NativeModule? {
    //return if (name == MinesweeperModule.NAME) {
    //  MinesweeperModule(reactContext)
    //} else {
    //  null
    //}
    return  null
  }

  //override
 fun getReactModuleInfoProvider(): ReactModuleInfoProvider 
 {
    return ReactModuleInfoProvider {
      val moduleInfos: MutableMap<String, ReactModuleInfo> = HashMap()
      moduleInfos[MinesweeperModule.NAME] = ReactModuleInfo(
        MinesweeperModule.NAME,
        MinesweeperModule.NAME,
        false,  // canOverrideExistingModule
        false,  // needsEagerInit
        false,  // isCxxModule
        true // isTurboModule
      )
      moduleInfos
    }
  }
}
