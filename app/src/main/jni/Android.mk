
LOCAL_PATH := $(call my-dir)
include $(CLEAR_VARS)
LOCAL_MODULE := encoder
LOCAL_SRC_FILES := com_phuket_tour_studio_Mp3Encoder.cpp

LOCAL_LDLIBS += -llog
include $(BUILD_SHARED_LIBRARY)