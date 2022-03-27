/*
©2021 Everywhere Defense Industries / Fate Everywhere <fate@7storm.org>
 
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

#include QMK_KEYBOARD_H

enum layers {
    _MAIN,
    _RAISE,
    _LOWER,
    _SET,
};

// Readability keycodes
#define LOWER   MO(_LOWER)
#define RAISE   MO(_RAISE)
#define SET     MO(_SET)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {


/* MAIN
 * .-----------------------------------------------------------------------------------------------------------------------------------------------.
 * | ESC    | Q      | W      | E      | R      | T      | Y      | U      | I      | O      | P      | Backsp |   7    |   8    |   9    |   /    |
 * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------|
 * | TAB    | A      | S      | D      | F      | G      | H      | J      | K      | L      | ;      | '      |   4    |   5    |   6    |   *    |
 * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------|
 * | SHIFT  | ,      | Z      | X      | C      | V      | B      | N      | M      | .      | up     | ENTER  |   1    |   2    |   3    |   -    |
 * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------|
 * | LCTRL  |  WIN   | ALT    | -      | Raise  | Space  |  Space | Lower  | /      | left   | down   | Right  |   +    |   0    |   .    | ENTER  |
 * '-----------------------------------------------------------------------------------------------------------------------------------------------'
 */

  [_MAIN] = LAYOUT_ortho_4x16(
  KC_ESC,  KC_Q,    KC_W,    KC_E,     KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,      KC_O,    KC_P,    KC_BSPC, KC_KP_7, KC_KP_8,   KC_KP_9, KC_KP_SLASH,
  KC_TAB,  KC_A,    KC_S,    KC_D,     KC_F,    KC_G,    KC_H,    KC_J,    KC_K,      KC_L,    KC_SCLN, KC_QUOT, KC_KP_4, KC_KP_5,   KC_KP_6, KC_KP_ASTERISK,
  KC_LSFT, KC_COMM, KC_Z,    KC_X,     KC_C,    KC_V,    KC_B,    KC_N,    KC_M,      KC_DOT,  KC_UP,   KC_ENT,  KC_KP_1, KC_KP_2,   KC_KP_3, KC_KP_MINUS,
  KC_LCTL, KC_LGUI, KC_LALT, KC_MINUS, RAISE,   KC_SPC,  KC_SPC,  LOWER,   KC_SLASH, KC_LEFT, KC_DOWN, KC_RGHT,  KC_PLUS, KC_KP_0, KC_KP_DOT, KC_PENT
  ),

/* RAISE
 * .-----------------------------------------------------------------------------------------------------------------------------------------------.
 * |    `   |  1     |  2     |  3     |  4     |  5     |  6     |  7     |  8     |  9     |  0     |        |        |        |        |        |
 * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------|
 * |        |        |        |        |        |        | =      | [      | ]      |   \    |        |        |        |        |        |        |
 * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------|
 * |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |
 * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------|
 * |        |        |        |        |        |                 |        |        |        |        |        |        |        |        | NUM LK |
 * '-----------------------------------------------------------------------------------------------------------------------------------------------'
 */

  [_RAISE] = LAYOUT_ortho_4x16(
  KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    _______, _______, _______, _______, _______,
  _______, _______, _______, _______, _______, _______, KC_EQL,  KC_LBRC, KC_RBRC, KC_BSLS, _______, _______, _______, _______, _______, _______,
  _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
  _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, KC_LNUM
  ),

/* LOWER
 * .-----------------------------------------------------------------------------------------------------------------------------------------------.
 * |    ~   |    !   |    @   |    #   |    $   |    %   |    ^   |    &   |    *   |    (   |    )   |   DEL  |        |        |        | Reset  |
 * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------|
 * |        |   F1   |   F2   |   F3   |   F4   |   F5   |   F6   |    {   |    }   |   |    |        |        |        |        |        |        |
 * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------|
 * |        |   F7   |   F8   |   F9   |  F10   |  F11   |  F12   |        |        |        |        |        |        |        |        |        |
 * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------|
 * |        |        |        |        |        |                 |        |        |        |        |        |        |        |        |        |
 * '-----------------------------------------------------------------------------------------------------------------------------------------------'
 */

  [_LOWER] = LAYOUT_ortho_4x16(
  KC_TILD, KC_EXLM, KC_AT,   KC_HASH, KC_DLR,  KC_PERC, KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, KC_DEL,  _______, _______, _______, RESET,
  _______,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,  KC_LCBR, KC_RCBR, KC_PIPE,   _______, _______, _______, _______, _______, _______,
  _______, KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,_______,_______, _______, _______, _______, _______, _______, _______, _______,
  _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______
  ),

 /* SETTINGS
 * .-----------------------------------------------------------------------------------------------------------------------------------------------.
 * |        | CapLok | ScrLok | NumLok | VK I/O |        |        | RGB IO | Mode+  | Mode-  | Plain  |        |        |        |        |        |
 * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------|
 * |        |        |        |        |        |        |        |  Hue+  |  Sat+  |  Val+  | Larsen |        |        |        |        |        |
 * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------|
 * |        |        |        |        |        |        |        |  Hue-  |  Sat-  |  Val-  | Rswirl |        | Reset  |        |        |        |
 * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------|
 * |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |
 * '-----------------------------------------------------------------------------------------------------------------------------------------------'
 */

  [_SET] = LAYOUT_ortho_4x16(
  _______, KC_CAPS, KC_SLCK, KC_NLCK, VLK_TOG, _______, _______, RGB_TOG, RGB_MOD, RGB_RMOD,RGB_M_P, _______, _______, _______, _______, _______,
  _______, _______, _______, _______, _______, _______, _______, RGB_HUI, RGB_SAI, RGB_VAI, RGB_M_SW,_______, _______, _______, _______, _______,
  _______, _______, _______, _______, _______, _______, _______, RGB_HUD, RGB_SAD, RGB_VAD, RGB_M_K, _______, RESET,   _______, _______, _______, 
  _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______
  ),

};

layer_state_t layer_state_set_user(layer_state_t state) {
  return update_tri_layer_state(state, _LOWER, _RAISE, _SET);
}