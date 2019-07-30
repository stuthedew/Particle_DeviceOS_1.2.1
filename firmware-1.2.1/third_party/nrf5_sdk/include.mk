TARGET_NRF5_SDK_PATH = $(NRF5_SDK_MODULE_PATH)
TARGET_NRF5_SDK_NRFX_PATH = $(TARGET_NRF5_SDK_PATH)/nrf5_sdk/modules/nrfx
TARGET_NRF5_SDK_INTEGRATION_NRFX_PATH = $(TARGET_NRF5_SDK_PATH)/nrf5_sdk/integration/nrfx
TARGET_NRF5_SDK_COMPONENTS_PATH = $(TARGET_NRF5_SDK_PATH)/nrf5_sdk/components
TARGET_NRF5_SDK_LIBRARIES_PATH = $(TARGET_NRF5_SDK_COMPONENTS_PATH)/libraries
TARGET_NRF5_SDK_LIBRARIES_UTIL_PATH = $(TARGET_NRF5_SDK_LIBRARIES_PATH)/util
TARGET_NRF5_SDK_DRIVERS_NRF_PATH = $(TARGET_NRF5_SDK_COMPONENTS_PATH)/drivers_nrf
TARGET_NRF5_SDK_CMSIS_PATH = $(TARGET_NRF5_SDK_COMPONENTS_PATH)/toolchain/cmsis/include
TARGET_NRF5_SDK_SOFTDEVICE_PATH = $(TARGET_NRF5_SDK_COMPONENTS_PATH)/softdevice
TARGET_NRF5_SDK_BLE_PATH = $(TARGET_NRF5_SDK_COMPONENTS_PATH)/ble
TARGET_NRF5_SDK_EXTERNAL_PATH = $(TARGET_NRF5_SDK_PATH)/nrf5_sdk/external

INCLUDE_DIRS += $(TARGET_NRF5_SDK_PATH)

INCLUDE_DIRS += $(TARGET_NRF5_SDK_CMSIS_PATH)
INCLUDE_DIRS += $(TARGET_NRF5_SDK_NRFX_PATH)
INCLUDE_DIRS += $(TARGET_NRF5_SDK_NRFX_PATH)/drivers
INCLUDE_DIRS += $(TARGET_NRF5_SDK_NRFX_PATH)/drivers/include
INCLUDE_DIRS += $(TARGET_NRF5_SDK_NRFX_PATH)/hal
INCLUDE_DIRS += $(TARGET_NRF5_SDK_NRFX_PATH)/mdk
INCLUDE_DIRS += $(TARGET_NRF5_SDK_NRFX_PATH)/hal
INCLUDE_DIRS += $(TARGET_NRF5_SDK_NRFX_PATH)/drivers/src/prs
INCLUDE_DIRS += $(TARGET_NRF5_SDK_LIBRARIES_UTIL_PATH)

ifeq ($(SOFTDEVICE_PRESENT),y)
INCLUDE_DIRS += $(TARGET_NRF5_SDK_SOFTDEVICE_PATH)/$(SOFTDEVICE_VARIANT)/headers
INCLUDE_DIRS += $(TARGET_NRF5_SDK_SOFTDEVICE_PATH)/$(SOFTDEVICE_VARIANT)/headers/nrf52
INCLUDE_DIRS += $(TARGET_NRF5_SDK_SOFTDEVICE_PATH)/common
else
INCLUDE_DIRS += $(TARGET_NRF5_SDK_DRIVERS_NRF_PATH)/nrf_soc_nosd
endif

INCLUDE_DIRS += $(TARGET_NRF5_SDK_LIBRARIES_PATH)/fstorage
INCLUDE_DIRS += $(TARGET_NRF5_SDK_LIBRARIES_PATH)/experimental_section_vars
INCLUDE_DIRS += $(TARGET_NRF5_SDK_LIBRARIES_PATH)/atomic
INCLUDE_DIRS += $(TARGET_NRF5_SDK_LIBRARIES_PATH)/crc32

INCLUDE_DIRS += $(TARGET_NRF5_SDK_INTEGRATION_NRFX_PATH)/legacy

INCLUDE_DIRS += $(TARGET_NRF5_SDK_LIBRARIES_PATH)/delay

# Libraries
INCLUDE_DIRS += \
	$(TARGET_NRF5_SDK_LIBRARIES_PATH)/log \
	$(TARGET_NRF5_SDK_LIBRARIES_PATH)/log \
	$(TARGET_NRF5_SDK_LIBRARIES_PATH)/log/src \
	$(TARGET_NRF5_SDK_LIBRARIES_PATH)/experimental_section_vars \
	$(TARGET_NRF5_SDK_LIBRARIES_PATH)/atomic \
	$(TARGET_NRF5_SDK_LIBRARIES_PATH)/delay \
	$(TARGET_NRF5_SDK_LIBRARIES_PATH)/queue

ifeq ($(SOFTDEVICE_PRESENT),y)
INCLUDE_DIRS += $(TARGET_NRF5_SDK_SOFTDEVICE_PATH)/common
INCLUDE_DIRS += $(TARGET_NRF5_SDK_SOFTDEVICE_PATH)/mbr/nrf52840/headers
INCLUDE_DIRS += $(TARGET_NRF5_SDK_SOFTDEVICE_PATH)/s140
INCLUDE_DIRS += $(TARGET_NRF5_SDK_SOFTDEVICE_PATH)/s140/headers
INCLUDE_DIRS += $(TARGET_NRF5_SDK_SOFTDEVICE_PATH)/s140/headers/nrf52
else
INCLUDE_DIRS += $(TARGET_NRF5_SDK_DRIVERS_NRF_PATH)/nrf_soc_nosd
endif

ifeq ("$(SOFTDEVICE_PRESENT)","y")
# Libraries
INCLUDE_DIRS += \
	$(TARGET_NRF5_SDK_LIBRARIES_PATH)/fifo \
	$(TARGET_NRF5_SDK_LIBRARIES_PATH)/atomic_fifo \
	$(TARGET_NRF5_SDK_LIBRARIES_PATH)/strerror \
	$(TARGET_NRF5_SDK_LIBRARIES_PATH)/fstorage \
	$(TARGET_NRF5_SDK_LIBRARIES_PATH)/atomic_flags \
	$(TARGET_NRF5_SDK_LIBRARIES_PATH)/usbd \
	$(TARGET_NRF5_SDK_LIBRARIES_PATH)/usbd/class/cdc \
	$(TARGET_NRF5_SDK_LIBRARIES_PATH)/usbd/class/cdc/acm

# BLE
INCLUDE_DIRS += \
	$(TARGET_NRF5_SDK_BLE_PATH)/common \
	$(TARGET_NRF5_SDK_BLE_PATH)/nrf_ble_gatt \
	$(TARGET_NRF5_SDK_BLE_PATH)/ble_advertising

# FIXME
INCLUDE_DIRS += $(TARGET_NRF5_SDK_EXTERNAL_PATH)/nrf_cc310/include

INCLUDE_DIRS += $(TARGET_NRF5_SDK_EXTERNAL_PATH)/utf_converter

# Hack of the century!
ifneq (,$(findstring crypto,$(MAKE_DEPENDENCIES)))
LIBS_EXT_END += $(TARGET_NRF5_SDK_EXTERNAL_PATH)/nrf_cc310/lib/cortex-m4/hard-float/libnrf_cc310_0.9.12.a
endif

#ifeq ($(DEBUG_BUILD),y)
#INCLUDE_DIRS += \
#	$(TARGET_NRF5_SDK_EXTERNAL_PATH)/segger_rtt
#endif
endif