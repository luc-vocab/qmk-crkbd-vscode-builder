#pragma once

#include QMK_KEYBOARD_H
// #include "keycodes.h"

#define __BASE_L1__ OSL(VSCODE), KC_QUOTE, KC_COMMA, KC_DOT,  KC_P,   KC_Y
#define __BASE_L2__ OSL(SHELL_NAV), KC_A,     KC_O,     KC_E,    KC_U,   KC_I
#define __BASE_L3__ OSM(MOD_LSFT),KC_SEMICOLON, KC_Q,  KC_J,    KC_K,   KC_X

#define __BASE_R1__ KC_F,   KC_G,   KC_C,     KC_R,  KC_L,    KC_TAB
#define __BASE_R2__ KC_D,   KC_H,   KC_T,     KC_N,  KC_S,   LCTL(KC_BSPC)
#define __BASE_R3__ KC_B,   KC_M,   KC_W,     KC_V,  KC_Z,   OSM(MOD_RSFT)

#define __BASE_L_2THUMB__ MO(COMBINED),MO(KEYNAV)
#define __BASE_R_2THUMB__ KC_ENTER, KC_SPACE