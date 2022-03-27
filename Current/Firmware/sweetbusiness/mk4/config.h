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
#define PRODUCT_ID      0xD04F
#define DEVICE_VER      0x0001
#define MANUFACTURER    Everywhere Defense Industries
#define PRODUCT         Sweet Business

/* key matrix size */
#define MATRIX_ROWS 7
#define MATRIX_COLS 23

#define MATRIX_COL_PINS { B4, B10, A13, A8, C9, C8, C7, C6, B15, B14, B13, B12, B1, B0, C5, C4, A7, A6, A5, A4, A3, A2, A1 }
#define MATRIX_ROW_PINS { C2, C3, C1, C0, C15, C14, C13 }
#define DIODE_DIRECTION COL2ROW

//#define LED_NUM_LOCK_PIN C10
//#define LED_CAPS_LOCK_PIN A14
//#define LED_SCROLL_LOCK_PIN A15


/* define if matrix has ghost */
//#define MATRIX_HAS_GHOST

/* Set 0 if debouncing isn't needed */
#define DEBOUNCE 5

/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
#define LOCKING_SUPPORT_ENABLE
/* Locking resynchronize hack */
#define LOCKING_RESYNC_ENABLE

/* RGB Underglow */
#define RGB_DI_PIN A0
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

/* Joystick Control system for macro keys */
#define JOYSTICK_BUTTON_COUNT 23
#define JOYSTICK_AXES_COUNT 0

/* Encoders */
#define ENCODERS_PAD_A { C11,D2 }
#define ENCODERS_PAD_B { C12,B3 }
#define ENCODER_RESOLUTION 4