#pragma once

#define __DESKNAV_L0__  KC_TRNS,       KC_TRNS,     KC_TRNS,     KC_TRNS,     KC_TRNS,     KC_TRNS
#define __DESKNAV_L1__  KC_TRNS,       KC_TRNS,     KC_TRNS,     KC_TRNS,     KC_TRNS,     KC_TRNS
#define __DESKNAV_L2__  KC_F1,         KC_F2,       KC_F3,       KC_F4,       KC_F5,       KC_F6
#define __DESKNAV_L3__  KC_F7,         KC_F8,       KC_F9,       KC_F10,      KC_F11,      KC_F12

#define __DESKNAV_R0__  KC_TRNS,       KC_TRNS,     KC_TRNS,     KC_TRNS,     KC_TRNS,     KC_TRNS
#define __DESKNAV_R1__  MEH(KC_F10),   MEH(KC_F11), MEH(KC_F12), MEH(KC_F13), MEH(KC_F14), MEH(KC_F15)
#define __DESKNAV_R2__  MEH(KC_F9),    MEH(KC_F1),  MEH(KC_F2),  MEH(KC_F3),  MEH(KC_F4),  MEH(KC_F5)
#define __DESKNAV_R3__  MEH(KC_F6),    WS_LEFT,     WS_RIGHT,    WS_SHOW,     MEH(KC_F7),  MEH(KC_F8)

#define __DESKNAV_L_2THUMB__  KC_TRNS,  KC_TRNS
#define __DESKNAV_R_2THUMB__  KC_TRNS,  KC_TRNS
#define __DESKNAV_L_3THUMB__  KC_TRNS,  KC_TRNS, KC_TRNS
#define __DESKNAV_R_3THUMB__  TO(GAME), KC_TRNS, KC_TRNS

#define __DESKNAV_L1_EXT__ __DESKNAV_L1__,  QK_BOOT
#define __DESKNAV_L2_EXT__ __DESKNAV_L2__,  KC_TRNS
#define __DESKNAV_R1_EXT__ CTRL_ALT_DEL,    __DESKNAV_R1__
#define __DESKNAV_R2_EXT__ KC_PRINT_SCREEN, __DESKNAV_R2__