/*
©2022 Everywhere Defense Industries / Fate Everywhere <fate@7storm.org>
 
This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#pragma once

/* USB Device descriptor parameter */
#define VENDOR_ID       0xF7E0
#define PRODUCT_ID      0x2408
#define DEVICE_VER      0x0070
#define MANUFACTURER    Everywhere Defense Industries
#define PRODUCT         Hard Light Mk 3

/* Configuring the micro to use 8MHz clock */
#define STM32_HSECLK 8000000

/* Kilohertz polling, because it kill-o hurts not to have it. */
#define USB_POLLING_INTERVAL_MS 1
#define QMK_KEYS_PER_SCAN 12

/* key matrix size */
#define MATRIX_ROWS 4
#define MATRIX_COLS 16

#define MATRIX_COL_PINS { B10, B13, B9, B8, B7, B6, B5, B4, B3, A15, A14, A6, A7, B0, B1, B12 }
#define MATRIX_ROW_PINS { A3, A4, A2, A1 }
#define DIODE_DIRECTION COL2ROW

/* define if matrix has ghost */
//#define MATRIX_HAS_GHOST

/* Set 0 if debouncing isn't needed */
#define DEBOUNCE 5

/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
#define LOCKING_SUPPORT_ENABLE
/* Locking resynchronize hack */
#define LOCKING_RESYNC_ENABLE

/* RGB Underglow */
#define RGB_DI_PIN A5
#define RGBLED_NUM 32
#define RGBLIGHT_ANIMATIONS
#define RGBLIGHT_EFFECT_KNIGHT_LENGTH 5

/* PWM RGB Underglow Defines */
#define WS2812_PWM_DRIVER PWMD2
#define WS2812_PWM_CHANNEL 1
#define WS2812_PWM_PAL_MODE 1
#define WS2812_DMA_STREAM STM32_DMA1_STREAM7
#define WS2812_DMA_CHANNEL 3
#define WS2812_EXTERNAL_PULLUP

/* I2C driver overrides
#define I2C1_SCL 7
#define I2C1_SDA 8
*/

/*
 * Feature disable options
 *  These options are also useful to firmware size reduction.
 */

/* disable debug print */
//#define NO_DEBUG

/* disable print */
//#define NO_PRINT

/* disable action features */
//#define NO_ACTION_LAYER
//#define NO_ACTION_TAPPING
//#define NO_ACTION_ONESHOT
//#define NO_ACTION_MACRO
//#define NO_ACTION_FUNCTION
