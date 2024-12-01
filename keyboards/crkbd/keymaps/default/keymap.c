/*
Copyright 2019 @foostan
Copyright 2020 Drashna Jaelre <@drashna>

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {[0] = LAYOUT_split_3x6_3(KC_ESC, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_BSPC, KC_TAB, KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOT, KC_LSFT, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_RCTL, MO(2), MO(1), KC_SPC, KC_ENT, KC_LGUI, KC_RALT),

                                                              [1] = LAYOUT_split_3x6_3(KC_GRV, KC_EXLM, KC_AT, KC_HASH, KC_DLR, KC_PERC, KC_CIRC, KC_AMPR, KC_ASTR, KC_MINS, KC_UNDS, KC_DEL, KC_TAB, MO(3), LGUI(KC_S), KC_NO, KC_CAPS, KC_NO, KC_LPRN, KC_RPRN, KC_LCBR, KC_RCBR, KC_BSLS, KC_DQUO, KC_LSFT, LGUI(KC_Z), KC_NO, LGUI(KC_C), LGUI(KC_V), KC_NO, KC_LBRC, KC_RBRC, KC_LT, KC_GT, KC_COLN, KC_QUES, KC_NO, KC_NO, KC_SPC, KC_ENT, KC_LEFT, KC_RGHT),

                                                              [2] = LAYOUT_split_3x6_3(KC_ESC, KC_NO, KC_NO, KC_UP, KC_NO, KC_HOME, KC_NO, KC_P7, KC_P8, KC_P9, KC_ASTR, KC_BSPC, KC_TAB, KC_NO, KC_LEFT, KC_DOWN, KC_RGHT, KC_END, KC_NO, KC_P4, KC_P5, KC_P6, KC_PMNS, KC_EQL, KC_LSFT, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_P1, KC_P2, KC_P3, KC_COMM, KC_PSLS, KC_NO, KC_NO, KC_SPC, KC_ENT, KC_PDOT, KC_P0),

                                                              [3] = LAYOUT_split_3x6_3(KC_NO, KC_NO, KC_VOLD, KC_VOLU, KC_MUTE, KC_NO, KC_NO, KC_F9, KC_F10, KC_F11, KC_F12, KC_NO, KC_NO, KC_NO, KC_MPRV, KC_MNXT, KC_MPLY, KC_NO, KC_NO, KC_F5, KC_F6, KC_F7, KC_F8, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_F1, KC_F2, KC_F3, KC_F4, KC_NO, KC_NO, KC_NO, KC_SPC, KC_ENT, KC_NO, KC_NO)};

#ifdef ENCODER_MAP_ENABLE
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {
    [0] =
        {
            ENCODER_CCW_CW(KC_VOLD, KC_VOLU),
            ENCODER_CCW_CW(KC_MPRV, KC_MNXT),
            ENCODER_CCW_CW(RM_VALD, RM_VALU),
            ENCODER_CCW_CW(KC_RGHT, KC_LEFT),
        },
    [1] =
        {
            ENCODER_CCW_CW(KC_VOLD, KC_VOLU),
            ENCODER_CCW_CW(KC_MPRV, KC_MNXT),
            ENCODER_CCW_CW(RM_VALD, RM_VALU),
            ENCODER_CCW_CW(KC_RGHT, KC_LEFT),
        },
    [2] =
        {
            ENCODER_CCW_CW(KC_VOLD, KC_VOLU),
            ENCODER_CCW_CW(KC_MPRV, KC_MNXT),
            ENCODER_CCW_CW(RM_VALD, RM_VALU),
            ENCODER_CCW_CW(KC_RGHT, KC_LEFT),
        },
    [3] =
        {
            ENCODER_CCW_CW(KC_VOLD, KC_VOLU),
            ENCODER_CCW_CW(KC_MPRV, KC_MNXT),
            ENCODER_CCW_CW(RM_VALD, RM_VALU),
            ENCODER_CCW_CW(KC_RGHT, KC_LEFT),
        },
};
#endif
