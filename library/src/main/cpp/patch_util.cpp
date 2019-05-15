//
// Created by sky on 2019-05-15.
//
#include <jni.h>
#include "patch_util.h"

JNIEXPORT jboolean JNICALL Java_com_sky_android_incremental_update_PatchUtil_patch
        (JNIEnv *env, jclass type, jstring oldFilePath, jstring newFilePath, jstring patchFilePath)
{
    char *argv[4];

    argv[0] = const_cast<char *>("bspatch");
    argv[1] = const_cast<char *>(env->GetStringUTFChars(oldFilePath, 0));
    argv[2] = const_cast<char *>(env->GetStringUTFChars(newFilePath, 0));
    argv[3] = const_cast<char *>(env->GetStringUTFChars(patchFilePath, 0));

    // 开始进行合并
    int result = bspatch_main(4, argv);

    env->ReleaseStringUTFChars(oldFilePath, argv[1]);
    env->ReleaseStringUTFChars(newFilePath, argv[2]);
    env->ReleaseStringUTFChars(patchFilePath, argv[3]);

    return static_cast<jboolean>(!result);
}