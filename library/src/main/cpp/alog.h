//
// Created by sky on 2019/4/26.
//

#ifndef ANDROID_NDK_DEMO_ALOG_H
#define ANDROID_NDK_DEMO_ALOG_H

#include <android/log.h>

#define ALOG_TAG "Alog"

#define LOG_TD(tag, ...) \
    ((void)__android_log_print(ANDROID_LOG_DEBUG, tag, __VA_ARGS__))

#define LOG_TI(tag, ...) \
    ((void)__android_log_print(ANDROID_LOG_INFO, tag, __VA_ARGS__))

#define LOG_TW(tag, ...) \
    ((void)__android_log_print(ANDROID_LOG_WARN, tag, __VA_ARGS__))

#define LOG_TE(tag, ...) \
    ((void)__android_log_print(ANDROID_LOG_ERROR, tag, __VA_ARGS__))

#define LOG_D(...) \
    LOG_TD(ALOG_TAG, __VA_ARGS__)

#define LOG_I(...) \
    LOG_TI(ALOG_TAG, __VA_ARGS__)

#define LOG_W(...) \
    LOG_TW(ALOG_TAG, __VA_ARGS__)

#define LOG_E(...) \
    LOG_TE(ALOG_TAG, __VA_ARGS__)

#endif //ANDROID_NDK_DEMO_ALOG_H
