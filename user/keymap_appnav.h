#pragma once

// APPNAV_BROWSER
// ============

#define __APPNAV_BROWSER_L0__  KC_TRNS,            KC_TRNS,       KC_TRNS,      KC_TRNS, KC_TRNS, KC_TRNS
#define __APPNAV_BROWSER_L1__  KC_TRNS,            KC_TRNS,       KC_TRNS,      KC_TRNS, KC_TRNS, KC_TRNS
#define __APPNAV_BROWSER_L2__  TO(BASE_BROWSER),   KC_TRNS,       KC_TRNS,      KC_TRNS, KC_TRNS, KC_TRNS
#define __APPNAV_BROWSER_L3__  KC_TRNS,            KC_TRNS,       KC_TRNS,      KC_TRNS, KC_TRNS, KC_TRNS

#define __APPNAV_BROWSER_R0__  KC_TRNS,            KC_TRNS,       KC_TRNS,      KC_TRNS, KC_TRNS, KC_TRNS
#define __APPNAV_BROWSER_R1__  KC_TRNS,            KC_TRNS,       KC_TRNS,      KC_TRNS, KC_TRNS, KC_TRNS
#define __APPNAV_BROWSER_R2__  KC_TRNS,            BR_TAB_LEFT,   BR_TAB_RIGHT, KC_TRNS, KC_TRNS, BR_BACK
#define __APPNAV_BROWSER_R3__  KC_TRNS,            BR_TAB_FIRST,  BR_TAB_LAST,  KC_TRNS, KC_TRNS, KC_TRNS

#define __APPNAV_BROWSER_L_2THUMB__  KC_TRNS,      KC_TRNS
#define __APPNAV_BROWSER_R_2THUMB__  BR_TAB_CLOSE, BR_TAB_NEW
#define __APPNAV_BROWSER_L_3THUMB__  KC_TRNS,      KC_TRNS,    KC_TRNS
#define __APPNAV_BROWSER_R_3THUMB__  BR_TAB_CLOSE, BR_TAB_NEW, KC_TRNS

// APPNAV_SHELL
// ============

#define __APPNAV_SHELL_L0__  KC_TRNS,            KC_TRNS,           KC_TRNS,          KC_TRNS,           KC_TRNS,          KC_TRNS
#define __APPNAV_SHELL_L1__  KC_TRNS,            KC_TRNS,           KC_TRNS,          KC_TRNS,           KC_TRNS,          KC_TRNS
#define __APPNAV_SHELL_L2__  TO(BASE_SHELL),     KC_TRNS,           KC_TRNS,          KC_TRNS,           KC_TRNS,          KC_TRNS
#define __APPNAV_SHELL_L3__  KC_TRNS,            KC_TRNS,           KC_TRNS,          KC_TRNS,           KC_TRNS,          KC_TRNS

#define __APPNAV_SHELL_R0__  KC_TRNS,            KC_TRNS,           KC_TRNS,          KC_TRNS,           KC_TRNS,          KC_TRNS
#define __APPNAV_SHELL_R1__  KC_TRNS,            KC_TRNS,           KC_TRNS,          KC_TRNS,           KC_TRNS,          KC_TRNS
#define __APPNAV_SHELL_R2__  KC_TRNS,            SCREEN_TAB_LEFT,   SCREEN_TAB_RIGHT, SCREEN_NUMBER,     SCREEN_RENAME,    SH_DEL_WORD
#define __APPNAV_SHELL_R3__  SH_DEL_TO_START,    SH_RECALL,         SH_SEARCH,        SH_PASTE,          SH_DEL_TO_END,    SH_STOP

#define __APPNAV_SHELL_L_2THUMB__  KC_TRNS, KC_TRNS
#define __APPNAV_SHELL_R_2THUMB__  SCREEN_KILL,        SCREEN_NEW_TAB
#define __APPNAV_SHELL_L_3THUMB__  KC_TRNS, KC_TRNS, KC_TRNS
#define __APPNAV_SHELL_R_3THUMB__  SCREEN_KILL,        SCREEN_NEW_TAB,    KC_TRNS

// APPNAV_VSCODE
// ============

#define __APPNAV_VSCODE_L0__  KC_TRNS,          KC_TRNS,         KC_TRNS,       KC_TRNS,           KC_TRNS,     KC_TRNS
#define __APPNAV_VSCODE_L1__  KC_TRNS,          VS_GO_TO_TOP,    VS_FIND_FILES, VS_CMT_BLOCK,      VS_CMT_LINE, VS_RECENT
#define __APPNAV_VSCODE_L2__  TO(BASE_VSCODE),  KC_TRNS,         KC_TRNS,       KC_TRNS,           KC_TRNS,     VS_SEL_BRACKET
#define __APPNAV_VSCODE_L3__  KC_TRNS,          VS_GO_TO_BOTTOM, KC_TRNS,       KC_TRNS,           KC_TRNS,     KC_TRNS

#define __APPNAV_VSCODE_R0__  KC_TRNS,          KC_TRNS,         KC_TRNS,       KC_TRNS,           KC_TRNS,     KC_TRNS
#define __APPNAV_VSCODE_R1__  VS_COPYLINEDOWN,  VS_REFERENCES,   VS_DEFINITION, VS_IMPLEMENTATION, VS_LINE,     VS_BRACKET
#define __APPNAV_VSCODE_R2__  KC_TRNS,          VS_TABLEFT,      VS_TABRIGHT,   VS_SYMBOLEDITOR,   VS_FILE,     VS_BACK
#define __APPNAV_VSCODE_R3__  VS_BM_CLEARALL,   VS_BM_PREV,      VS_BM_NEXT,    VS_GROUP_1,        VS_GROUP_2,  VS_BM_TOGGLE

#define __APPNAV_VSCODE_L_2THUMB__  KC_TRNS,     KC_TRNS
#define __APPNAV_VSCODE_R_2THUMB__  VS_CLOSETAB, VS_COMMANDS
#define __APPNAV_VSCODE_L_3THUMB__  KC_TRNS,     KC_TRNS,     KC_TRNS
#define __APPNAV_VSCODE_R_3THUMB__  VS_CLOSETAB, VS_BM_LIST,  VS_COMMANDS



/* #define __APPNAV_BROWSER_R0__    KC_TRNS,            KC_TRNS,           KC_TRNS,                   KC_TRNS,           KC_TRNS,          KC_TRNS
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
#define __APPNAV_VSCODE_R4_2__   VS_CLOSETAB,        VS_COMMANDS */