// Copyright 2023 Massdrop, Inc.
// SPDX-License-Identifier: GPL-2.0-or-later
#pragma once

#define ADC_BUFFER_DEPTH 4
#define ADC_SAMPLING_RATE ADC_SMPR_SMP_601P5
#define ADC_RESOLUTION ADC_CFGR_RES_12BITS

#define I2C_DRIVER I2CD2
#define I2C1_SCL_PIN A9
#define I2C1_SDA_PIN A10

#define EXTERNAL_EEPROM_I2C_BASE_ADDRESS 0b10101000
#define EXTERNAL_EEPROM_WP_PIN B5
#define EEPROM_I2C_24LC256

#define DRIVER_ADDR_1 IS31FL3733_I2C_ADDRESS_GND_VCC
#define DRIVER_ADDR_2 IS31FL3733_I2C_ADDRESS_VCC_VCC
#define IS31FL3733_DRIVER_COUNT 2
#define RGB_MATRIX_LED_COUNT 119
#define IS31FL3733_PWM_FREQUENCY IS31FL3733_PWM_FREQUENCY_26K7_HZ

#define RGB_DISABLE_WHEN_USB_SUSPENDED
#define RGB_MATRIX_DEFAULT_VAL 100
#define RGB_MATRIX_KEYPRESSES
#define RGB_MATRIX_FRAMEBUFFER_EFFECTS

#define RGB_MATRIX_CYCLE_ZONES_ENABLE
#define RGB_MATRIX_CAPS_LOCK_INDEX 50
