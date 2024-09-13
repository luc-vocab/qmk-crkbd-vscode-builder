#pragma once


// KEYNAV
// ==========================

#define __KEYNAV_L0__  KC_TRNS,       KC_TRNS,        KC_TRNS,      KC_TRNS,       KC_TRNS,        KC_TRNS
#define __KEYNAV_L1__  KC_ESC,        KC_TRNS,        KC_TRNS,      KC_TRNS,       KC_TRNS,        TERMINAL_NEW_TAB
#define __KEYNAV_L2__  KC_TRNS,       MO(KEYSEL),     KC_TRNS,      KC_TRNS,       KC_TRNS,        TERMINAL_TITLE
#define __KEYNAV_L3__  KC_TRNS,       TERMINAL_PASTE, KC_LGUI,      WS_APP_SWITCH, WS_WIN_SWITCH,  TERMINAL_CLOSE_TAB

#define __KEYNAV_R0__  KC_TRNS,       KC_TRNS,        KC_TRNS,      KC_TRNS,       KC_TRNS,        KC_TRNS
#define __KEYNAV_R1__  KC_TRNS,       KC_HOME,        KC_UP,        KC_END,        KC_PGUP,        KC_DELETE
#define __KEYNAV_R2__  LCTL(KC_LEFT), KC_LEFT,        KC_DOWN,      KC_RIGHT,      LCTL(KC_RIGHT), KC_BSPC
#define __KEYNAV_R3__  KC_TRNS,       RCTL(KC_C),     RCTL(KC_X),   RCTL(KC_V),    KC_PGDN,        RCTL(KC_DELETE)

#define __KEYNAV_L1_EXT__ __KEYNAV_L1__, KC_TRNS
#define __KEYNAV_L2_EXT__ __KEYNAV_L2__, KC_TRNS
#define __KEYNAV_R1_EXT__ KC_TRNS,       __KEYNAV_R1__
#define __KEYNAV_R2_EXT__ KC_TRNS,       __KEYNAV_R2__

#define __KEYNAV_L_2THUMB__ KC_TRNS, KC_TRNS
#define __KEYNAV_R_2THUMB__ KC_TRNS, KC_TRNS
#define __KEYNAV_L_3THUMB__ KC_TRNS, KC_TRNS, KC_TRNS
#define __KEYNAV_R_3THUMB__ KC_TRNS, KC_TRNS, KC_TRNS

// KEYSEL
// ==============

#define __KEYSEL_L0__       KC_TRNS,                  KC_TRNS,        KC_TRNS,       KC_TRNS,          KC_TRNS,                    KC_TRNS
#define __KEYSEL_L1__       KC_TRNS,                  KC_TRNS,        KC_TRNS,       KC_TRNS,          KC_TRNS,                    KC_TRNS
#define __KEYSEL_L2__       KC_TRNS,                  KC_TRNS,        KC_TRNS,       KC_TRNS,          KC_TRNS,                    KC_TRNS
#define __KEYSEL_L3__       KC_TRNS,                  KC_TRNS,        KC_TRNS,       KC_TRNS,          KC_TRNS,                    KC_TRNS

#define __KEYSEL_R0__       KC_TRNS,                  KC_TRNS,        KC_TRNS,       KC_TRNS,          KC_TRNS,                    KC_TRNS
#define __KEYSEL_R1__       KC_TRNS,                  RSFT(KC_HOME),  RSFT(KC_UP),   RSFT(KC_END),     RSFT(KC_PGUP),              KC_TRNS
#define __KEYSEL_R2__       RSFT(RCTL(KC_LEFT)),      RSFT(KC_LEFT),  RSFT(KC_DOWN), RSFT(KC_RIGHT),   RSFT(RCTL(KC_RIGHT)),       KC_TRNS
#define __KEYSEL_R3__       KC_TRNS,                  RCTL(KC_C),     RCTL(KC_X),    RCTL(KC_V),       RSFT(KC_PGDN),              KC_TRNS

#define __KEYSEL_L_2THUMB__ KC_TRNS, KC_TRNS
#define __KEYSEL_R_2THUMB__ KC_TRNS, KC_TRNS
#define __KEYSEL_L_3THUMB__ KC_TRNS, KC_TRNS, KC_TRNS
#define __KEYSEL_R_3THUMB__ KC_TRNS, KC_TRNS, KC_TRNS

#define __KEYSEL_L1_EXT__ __KEYSEL_L1__, KC_TRNS
#define __KEYSEL_L2_EXT__ __KEYSEL_L2__, KC_TRNS
#define __KEYSEL_R1_EXT__ KC_TRNS,       __KEYSEL_R1__
#define __KEYSEL_R2_EXT__ KC_TRNS,       __KEYSEL_R2__