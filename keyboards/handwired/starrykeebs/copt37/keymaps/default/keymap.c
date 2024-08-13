// Copyright 2023 Starry Knight (@astarryknight)
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT_3x10_7(
        KC_Q,         KC_W,   KC_E,    KC_R,    KC_T,           KC_Y, KC_U,          KC_I,          KC_O,   KC_P,
        KC_A,         KC_S,   KC_D,    KC_F,    KC_G,           KC_H, KC_J,          KC_K,          KC_L,   KC_BSPC,
        KC_Z, KC_X,   KC_C,    KC_V,    KC_B,           KC_N, KC_M,          KC_COMMA,      KC_DOT, KC_ENT,
                      MO(1), KC_LCTL, KC_QUOT, KC_SPC,       KC_LBRC, KC_RBRC, KC_SCLN),
    [1] = LAYOUT_3x10_7(
        KC_1,         KC_2, KC_3, KC_4,  KC_5, KC_6,   KC_7, KC_8, KC_9, KC_0,
        QK_BOOT,         KC_LPRN, KC_RPRN, KC_RCBR, KC_PIPE, KC_ESC,   KC_TRNS, KC_TRNS,   KC_TRNS, KC_DEL,
        LSFT_T(KC_LBRC), KC_QUOT, KC_DQUO, KC_RBRC, KC_SCLN, KC_TILDE, KC_TRNS, KC_UP, KC_TRNS, KC_TRNS,
                         KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,           KC_LEFT, KC_DOWN, KC_RIGHT
    )
};
