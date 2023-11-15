#pragma once

#include "keymap_common.h"

#define __KEYNAV_BASE_L0__  __EMPTY_6__
#define __KEYNAV_BASE_L1__  KC_ESC,                   KC_TRNS,        KC_TRNS,       KC_TRNS,          KC_TRNS,                    KC_TRNS
#define __KEYNAV_BASE_L2__  KC_TRNS,                  MO(KEYSEL),     KC_TRNS,       RSFT(KC_TAB),     KC_TAB,                     RCTL(KC_F)         
#define __KEYNAV_BASE_L3__  KC_TRNS,                  OBS_CMD,        OBS_QUICKSW,   OBS_CHECKBOX,     RCTL(KC_B),                 KC_TRNS

#define __KEYNAV_BASE_R0__  __EMPTY_6__
#define __KEYNAV_BASE_R1__  KC_TRNS,                  KC_HOME,        KC_UP,         KC_END,           KC_PGUP,                    KC_DELETE
#define __KEYNAV_BASE_R2__  LCTL(KC_LEFT),            KC_LEFT,        KC_DOWN,       KC_RIGHT,         LCTL(KC_RIGHT),             KC_BSPC
#define __KEYNAV_BASE_R3__  KC_TRNS,                  RCTL(KC_C),     RCTL(KC_X),    RCTL(KC_V),       KC_PGDN,                    RCTL(KC_DELETE)

#define __KEYNAV_SHELL_R0__ __EMPTY_6__
#define __KEYNAV_SHELL_R1__ KC_TRNS,                  KC_TRNS,        KC_TRNS,       KC_TRNS,          KC_TRNS,                    KC_TRNS
#define __KEYNAV_SHELL_R2__ SH_WORD_LEFT,             KC_TRNS,        KC_TRNS,       KC_TRNS,          SH_WORD_RIGHT,              KC_TRNS
#define __KEYNAV_SHELL_R3__ KC_TRNS,                  KC_TRNS,        KC_TRNS,       KC_TRNS,          KC_TRNS,                    KC_TRNS

#define __KEYSEL_L0__       __EMPTY_6__
#define __KEYSEL_L1__       __EMPTY_6__
#define __KEYSEL_L2__       __EMPTY_6__
#define __KEYSEL_L3__       __EMPTY_6__

#define __KEYSEL_R0__       __EMPTY_6__
#define __KEYSEL_R1__       KC_TRNS,                  RSFT(KC_HOME),  RSFT(KC_UP),   RSFT(KC_END),     RSFT(KC_PGUP),              KC_TRNS
#define __KEYSEL_R2__       RSFT(RCTL(KC_LEFT)),      RSFT(KC_LEFT),  RSFT(KC_DOWN), RSFT(KC_RIGHT),   RSFT(RCTL(KC_RIGHT)),       KC_TRNS
#define __KEYSEL_R3__       KC_TRNS,                  RCTL(KC_C),     RCTL(KC_X),    RCTL(KC_V),       RSFT(KC_PGDN),              KC_TRNS