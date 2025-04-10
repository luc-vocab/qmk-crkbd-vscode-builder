#pragma once


// base layer - browser
// ====================

#define __BASE_L0__  BR_TAB_CLOSE,  BR_BACK,         BR_RELOAD,       BR_TAB_LEFT,     BR_TAB_RIGHT,    BR_TAB_NEW
#define __BASE_L1__  OSL(VSCODE),   KC_QUOTE,        KC_COMMA,        KC_DOT,          KC_P,            KC_Y
#define __BASE_L2__  OSM(MOD_LCTL), KC_A,            KC_O,            KC_E,            KC_U,            KC_I
#define __BASE_L3__  OSM(MOD_LSFT), OSL(SHELL),      KC_Q,            KC_J,            KC_K,            KC_X

#define __BASE_R0__  WS_LEFT,       MEH(KC_F1),      MEH(KC_F2),      MEH(KC_F3),      MEH(KC_F4),      WS_RIGHT
#define __BASE_R1__  KC_F,          KC_G,            KC_C,            KC_R,            KC_L,            KC_TAB
#define __BASE_R2__  KC_D,          KC_H,            KC_T,            KC_N,            KC_S,            DEL_WORD
#define __BASE_R3__  KC_B,          KC_M,            KC_W,            KC_V,            KC_Z,            OSM(MOD_RSFT)

#define __BASE_L1_EXT__ __BASE_L1__, OSM(MOD_LALT)
#define __BASE_L2_EXT__ __BASE_L2__, KC_LGUI
#define __BASE_R1_EXT__ KC_PGUP, __BASE_R1__
#define __BASE_R2_EXT__ KC_PGDN, __BASE_R2__

#define __BASE_L_2THUMB__  MO(SYMBOLS),       MO(KEYNAV)
#define __BASE_R_2THUMB__  KC_ENTER,          KC_SPACE
#define __BASE_L_3THUMB__  MO(BROWSER),       __BASE_L_2THUMB__
#define __BASE_R_3THUMB__  __BASE_R_2THUMB__, MO(DESKNAV)

