#pragma once

#include "keymap_common.h"

#define __APPNAV_BROWSER_R0__    KC_TRNS,            KC_TRNS,           KC_TRNS,                   KC_TRNS,           KC_TRNS,          KC_TRNS
#define __APPNAV_BROWSER_R1__    KC_TRNS,            KC_TRNS,           KC_TRNS,                   KC_TRNS,           KC_TRNS,          KC_TRNS
#define __APPNAV_BROWSER_R2__    KC_TRNS,            BR_TAB_LEFT,       BR_TAB_RIGHT,              KC_TRNS,           KC_TRNS,          BR_BACK
#define __APPNAV_BROWSER_R3__    KC_TRNS,            BR_TAB_FIRST,      BR_TAB_LAST,               KC_TRNS,           KC_TRNS,          KC_TRNS
#define __APPNAV_BROWSER_R4_3__  BR_TAB_CLOSE,       BR_TAB_NEW,        KC_TRNS
#define __APPNAV_BROWSER_R4_2__  BR_TAB_CLOSE,       BR_TAB_NEW

#define __APPNAV_SHELL_R0__      KC_TRNS,            KC_TRNS,           KC_TRNS,                   KC_TRNS,           KC_TRNS,          KC_TRNS
#define __APPNAV_SHELL_R1__      KC_TRNS,            KC_TRNS,           KC_TRNS,                   KC_TRNS,           KC_TRNS,          KC_TRNS
#define __APPNAV_SHELL_R2__      KC_TRNS,            SCREEN_TAB_LEFT,   SCREEN_TAB_RIGHT,          SCREEN_NUMBER,     SCREEN_RENAME,    SH_DEL_WORD
#define __APPNAV_SHELL_R3__      SH_DEL_TO_START,    SH_RECALL,         SH_SEARCH,                 SH_PASTE,          SH_DEL_TO_END,    SH_STOP
#define __APPNAV_SHELL_R4_3__    SCREEN_KILL,        SCREEN_NEW_TAB,    KC_TRNS
#define __APPNAV_SHELL_R4_2__    SCREEN_KILL,        SCREEN_NEW_TAB

#define __APPNAV_VSCODE_R0__     KC_TRNS,            KC_TRNS,           KC_TRNS,                   KC_TRNS,           KC_TRNS,          KC_TRNS
#define __APPNAV_VSCODE_R1__     KC_TRNS,            KC_TRNS,           KC_TRNS,                   KC_TRNS,           KC_TRNS,          KC_TRNS
#define __APPNAV_VSCODE_R2__     KC_TRNS,            VS_TABLEFT,        VS_TABRIGHT,               KC_TRNS,           KC_TRNS,          KC_TRNS
#define __APPNAV_VSCODE_R3__     KC_TRNS,            KC_TRNS,           KC_TRNS,                   KC_TRNS,           KC_TRNS,          KC_TRNS
#define __APPNAV_VSCODE_R4_3__   VS_CLOSETAB,        VS_BM_LIST,        VS_COMMANDS
#define __APPNAV_VSCODE_R4_2__   VS_CLOSETAB,        VS_COMMANDS