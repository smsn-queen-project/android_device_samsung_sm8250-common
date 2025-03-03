/*
 * Copyright (C) 2021-2024 The LineageOS Project
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#ifndef LIBINIT_VARIANT_H
#define LIBINIT_VARIANT_H

#include <string>
#include <vector>

typedef struct variant_info {
    std::string em_model_prop;

    std::string device;
    std::string model;
    std::string build_fingerprint;
    std::string build_desc;
} variant_info_t;

void search_variant(const std::vector<variant_info_t> variants);

void set_variant_props(const variant_info_t variant);

#endif // LIBINIT_VARIANT_H