/*
 * @Author: error: git config user.name && git config user.email & please set dead value or install git
 * @Date: 2023-01-13 10:18:12
 * @LastEditors: error: git config user.name && git config user.email & please set dead value or install git
 * @LastEditTime: 2023-01-15 19:27:04
 * @FilePath: /usb-hid-bler/main/boards/board_hid_bler.h
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#pragma once

#include "board_common.h"

#define BOARD_HAS_LED
#define BOARD_PIN_LED   (27)   

// #define BOARD_HAS_FINGERPRINT_MODULE
// #define BOARD_FINGERPRINT_PIN_EN    (10)
// #define BOARD_FINGERPRINT_PIN_TX    (0)
// #define BOARD_FINGERPRINT_PIN_RX    (1)
// #define BOARD_FINGERPRINT_PIN_IRQ   (18)

// #define BOARD_HAS_BATTARY
// #define BOARD_PIN_BATTARY   (2)
// #define BOARD_BATTARY_VOLTAGE_SCALE (2)

#define BOARD_USB1_PIN_DP   (32)
#define BOARD_USB1_PIN_DM   (33)
#define BOARD_USB2_PIN_DP   (26)
#define BOARD_USB2_PIN_DM   (25)
