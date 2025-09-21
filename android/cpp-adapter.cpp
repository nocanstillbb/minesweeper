#include <jni.h>
#include "minesweeper.h"

extern "C"
JNIEXPORT jdouble JNICALL
Java_com_minesweeper_MinesweeperModule_nativeMultiply(JNIEnv *env, jclass type, jdouble a, jdouble b) {
    return minesweeper::multiply(a, b);
}
