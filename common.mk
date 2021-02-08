#
# Copyright (C) 2024 The LineageOS Project
#
# SPDX-License-Identifier: Apache-2.0
#

# Soong namespaces
PRODUCT_SOONG_NAMESPACES += \
    $(LOCAL_PATH)

# Inherit proprietary blobs
$(call inherit-product, vendor/samsung/sm8250-common/sm8250-common-vendor.mk)
