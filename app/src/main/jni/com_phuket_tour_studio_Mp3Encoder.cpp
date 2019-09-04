//
// Created by 吴正华 on 2019-09-04.
//

#include "com_phuket_tour_studio_Mp3Encoder.h"
#include <android/log.h>

#define LOG_TAG "LAMI"
#define LOGD(format, ...) __android_log_print(ANDROID_LOG_DEBUG, LOG_TAG, __FILE__":%d|" #format, __LINE__, ##__VA_ARGS__)
#define LOGI(format, ...) __android_log_print( ANDROID_LOG_INFO, LOG_TAG, __FILE__":%d|" #format, __LINE__, ##__VA_ARGS__)

extern "C" JNIEXPORT void JNICALL Java_com_phuket_tour_studio_Mp3Encoder_encode
  (JNIEnv *env, jclass clz) {
    LOGI("now it is the begin point.");
}