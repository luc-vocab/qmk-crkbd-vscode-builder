#pragma once

#include QMK_KEYBOARD_H
 
// useful macros
#define __EMPTY_2__ KC_TRNS, KC_TRNS
#define __EMPTY_3__ KC_TRNS, KC_TRNS, KC_TRNS
#define __EMPTY_6__ KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS

// BASE layer
// ==========

#define __BASE_L1__ OSL(VSCODE), KC_QUOTE, KC_COMMA, KC_DOT,  KC_P,   KC_Y
#define __BASE_L2__ OSL(SHELL_NAV), KC_A,     KC_O,     KC_E,    KC_U,   KC_I
#define __BASE_L3__ OSM(MOD_LSFT),KC_SEMICOLON, KC_Q,  KC_J,    KC_K,   KC_X

#define __BASE_R1__ KC_F,   KC_G,   KC_C,     KC_R,  KC_L,    KC_TAB
#define __BASE_R2__ KC_D,   KC_H,   KC_T,     KC_N,  KC_S,   LCTL(KC_BSPC)
#define __BASE_R3__ KC_B,   KC_M,   KC_W,     KC_V,  KC_Z,   OSM(MOD_RSFT)

#define __BASE_L_2THUMB__ MO(COMBINED),MO(KEYNAV)
#define __BASE_R_2THUMB__ KC_ENTER, KC_SPACE

// KEYNAV layer
// ============

#define __KEYNAV_L1__ KC_ESC, RCTL(KC_ENTER), RCTL(KC_K), RCTL(KC_Z), RCTL(KC_S), RCTL(KC_N)          
#define __KEYNAV_L2__ KC_TRNS, MO(KEYSEL), OBS_READMODE, RSFT(KC_TAB), KC_TAB, RCTL(KC_F)         
#define __KEYNAV_L3__ KC_TRNS, OBS_CMD, OBS_QUICKSW, OBS_CHECKBOX, RCTL(KC_B), KC_TRNS

#define __KEYNAV_R1__ KC_TRNS, KC_HOME, KC_UP, KC_END, KC_PGUP, KC_DELETE
#define __KEYNAV_R2__ LCTL(KC_LEFT), KC_LEFT, KC_DOWN, KC_RIGHT, LCTL(KC_RIGHT), KC_BSPC
#define __KEYNAV_R3__ KC_TRNS, RCTL(KC_C), RCTL(KC_X), RCTL(KC_V), KC_PGDN, RCTL(KC_DELETE)

// KEYSEL layer
// ============


#define __KEYSEL_L1__ __EMPTY_6__
#define __KEYSEL_L2__ __EMPTY_6__
#define __KEYSEL_L3__ __EMPTY_6__

#define __KEYSEL_R1__ KC_TRNS, RSFT(KC_HOME), RSFT(KC_UP), RSFT(KC_END), RSFT(KC_PGUP), KC_TRNS
#define __KEYSEL_R2__ RSFT(RCTL(KC_LEFT)), RSFT(KC_LEFT), RSFT(KC_DOWN), RSFT(KC_RIGHT), RSFT(RCTL(KC_RIGHT)), KC_TRNS
#define __KEYSEL_R3__ KC_TRNS, RCTL(KC_C), RCTL(KC_X), RCTL(KC_V), RSFT(KC_PGDN), KC_TRNS