#pragma once

#include "keymap_common.h"


// base layer - browser
// ====================

#define __BASE_BROWSER_L0__  KC_TRNS,               KC_TRNS,      KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS
#define __BASE_BROWSER_L1__  OSL(DESKNAV_DEFAULT),  KC_QUOTE,     KC_COMMA, KC_DOT,  KC_P,    KC_Y
#define __BASE_BROWSER_L2__  OSL(APPNAV_BROWSER),   KC_A,         KC_O,     KC_E,    KC_U,    KC_I
#define __BASE_BROWSER_L3__  OSM(MOD_LSFT),         KC_SEMICOLON, KC_Q,     KC_J,    KC_K,    KC_X

#define __BASE_BROWSER_R0__  KC_TRNS,               KC_TRNS,      KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS
#define __BASE_BROWSER_R1__  KC_F,                  KC_G,         KC_C,     KC_R,    KC_L,    KC_TAB
#define __BASE_BROWSER_R2__  KC_D,                  KC_H,         KC_T,     KC_N,    KC_S,    DEL_WORD
#define __BASE_BROWSER_R3__  KC_B,                  KC_M,         KC_W,     KC_V,    KC_Z,    OSM(MOD_RSFT)

#define __BASE_BROWSER_L_2THUMB__  MO(SYMBOLS),   MO(KEYNAV_DEFAULT)
#define __BASE_BROWSER_R_2THUMB__  KC_ENTER,       KC_SPACE
#define __BASE_BROWSER_L_3THUMB__  OSM(MOD_LALT),  MO(SYMBOLS),        MO(KEYNAV_DEFAULT)
#define __BASE_BROWSER_R_3THUMB__  KC_ENTER,       KC_SPACE,            OSM(MOD_LCTL)

// base layer - vscode
// ===================

#define __BASE_VSCODE_L0__  KC_TRNS,               KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS
#define __BASE_VSCODE_L1__  KC_TRNS,               KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS
#define __BASE_VSCODE_L2__  OSL(APPNAV_VSCODE),    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS
#define __BASE_VSCODE_L3__  KC_TRNS,               KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS

#define __BASE_VSCODE_R0__  KC_TRNS,               KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS
#define __BASE_VSCODE_R1__  KC_TRNS,               KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS
#define __BASE_VSCODE_R2__  KC_TRNS,               KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS
#define __BASE_VSCODE_R3__  KC_TRNS,               KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS

#define __BASE_VSCODE_L_2THUMB__ KC_TRNS, MO(KEYNAV_DEFAULT)
#define __BASE_VSCODE_R_2THUMB__ KC_TRNS, KC_TRNS
#define __BASE_VSCODE_L_3THUMB__ KC_TRNS, KC_TRNS, MO(KEYNAV_DEFAULT)
#define __BASE_VSCODE_R_3THUMB__ KC_TRNS, KC_TRNS, KC_TRNS

// base layer - shell
// ==================

#define __BASE_SHELL_L0__  KC_TRNS,              KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS
#define __BASE_SHELL_L1__  OSL(DESKNAV_DEFAULT), KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS
#define __BASE_SHELL_L2__  OSL(APPNAV_SHELL),    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS
#define __BASE_SHELL_L3__  KC_TRNS,              KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS

#define __BASE_SHELL_R0__  KC_TRNS,              KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS
#define __BASE_SHELL_R1__  KC_TRNS,              KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS
#define __BASE_SHELL_R2__  KC_TRNS,              KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, SH_DEL_WORD
#define __BASE_SHELL_R3__  KC_TRNS,              KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS

#define __BASE_SHELL_L_2THUMB__ KC_TRNS, MO(KEYNAV_SHELL)
#define __BASE_SHELL_R_2THUMB__ KC_TRNS, KC_TRNS
#define __BASE_SHELL_L_3THUMB__ KC_TRNS, KC_TRNS, MO(KEYNAV_SHELL)
#define __BASE_SHELL_R_3THUMB__ KC_TRNS, KC_TRNS, KC_TRNS


