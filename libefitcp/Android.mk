LOCAL_PATH := $(call my-dir)

include $(CLEAR_VARS)

LOCAL_MODULE := libefitcp-$(TARGET_BUILD_VARIANT)
LOCAL_CFLAGS := $(KERNELFLINGER_CFLAGS)
LOCAL_STATIC_LIBRARIES := \
	$(KERNELFLINGER_STATIC_LIBRARIES) \
	libkernelflinger-$(TARGET_BUILD_VARIANT) \
	libtransport-$(TARGET_BUILD_VARIANT)

LOCAL_EXPORT_C_INCLUDE_DIRS := $(LOCAL_PATH)/../include/libefitcp
LOCAL_C_INCLUDES := $(LOCAL_PATH)/../include/libefitcp
LOCAL_SRC_FILES := \
	tcp.c

include $(BUILD_EFI_STATIC_LIBRARY)