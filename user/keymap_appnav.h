#pragma once

// APPNAV_BROWSER
// ============

#define __APPNAV_BROWSER_L0__  KC_TRNS,            KC_TRNS,          KC_TRNS,           KC_TRNS,    KC_TRNS,   KC_TRNS
#define __APPNAV_BROWSER_L1__  KC_TRNS,            KC_TRNS,          KC_TRNS,           KC_TRNS,    KC_TRNS,   KC_TRNS
#define __APPNAV_BROWSER_L2__  KC_TRNS,   KC_TRNS,          KC_TRNS,           KC_TRNS,    KC_TRNS,   KC_TRNS
#define __APPNAV_BROWSER_L3__  KC_TRNS,            KC_TRNS,          KC_TRNS,           KC_TRNS,    KC_TRNS,   KC_TRNS

#define __APPNAV_BROWSER_R0__  KC_TRNS,            KC_TRNS,          KC_TRNS,           KC_TRNS,    KC_TRNS,   KC_TRNS
#define __APPNAV_BROWSER_R1__  KC_TRNS,            BR_TAB_MOVE_LEFT, BR_TAB_MOVE_RIGHT, KC_TRNS,    KC_TRNS,   KC_TRNS
#define __APPNAV_BROWSER_R2__  KC_TRNS,            BR_TAB_LEFT,      BR_TAB_RIGHT,      BR_SEARCH,  BR_RELOAD, BR_BACK
#define __APPNAV_BROWSER_R3__  KC_TRNS,            BR_TAB_FIRST,     BR_TAB_LAST,       BR_URL_BAR, KC_TRNS,   KC_TRNS

#define __APPNAV_BROWSER_L_2THUMB__  KC_TRNS,      KC_TRNS
#define __APPNAV_BROWSER_R_2THUMB__  BR_TAB_CLOSE, BR_TAB_NEW
#define __APPNAV_BROWSER_L_3THUMB__  KC_TRNS,      KC_TRNS,    KC_TRNS
#define __APPNAV_BROWSER_R_3THUMB__  BR_TAB_CLOSE, BR_TAB_NEW, KC_TRNS

// APPNAV_SHELL
// ============

#define __APPNAV_SHELL_L0__  KC_TRNS,            KC_TRNS,            KC_TRNS,           KC_TRNS,                 KC_TRNS,          KC_TRNS
#define __APPNAV_SHELL_L1__  SCREEN_PASTE,       KC_TRNS,            SHELL_PGREP,       SHELL_PLESS,             SHELL_LESS,       SH_EXIT
#define __APPNAV_SHELL_L2__  SCREEN_COPY_MODE,   OSL(APPNAV_SCREEN), SHELL_CDPRE,       SHELL_LSLTR,             SHELL_LS,         SHELL_LSLA
#define __APPNAV_SHELL_L3__  TO(BASE),           SHELL_SCREEN_LIST,  SHELL_SCREENRD,    SHELL_SCREEN_NEW,        SHELL_TAILF,      SH_CLOSE

#define __APPNAV_SHELL_R0__  KC_TRNS,            KC_TRNS,            KC_TRNS,           KC_TRNS,                 KC_TRNS,          KC_TRNS
#define __APPNAV_SHELL_R1__  KC_TRNS,            SCREEN_MOVE_LEFT,   SCREEN_MOVE_RIGHT, SCREEN_RENAME,           SH_CLEARSCR,      SH_DEL_PATH
#define __APPNAV_SHELL_R2__  SH_WORD_LEFT,       SCREEN_TAB_LEFT,    SCREEN_TAB_RIGHT,  SCREEN_NUMBER,           SH_WORD_RIGHT,    SH_DEL_WORD
#define __APPNAV_SHELL_R3__  SH_DEL_TO_START,    SH_RECALL,          SH_SEARCH,         SH_PASTE,                SH_DEL_TO_END,    SH_STOP

#define __APPNAV_SHELL_L_2THUMB__  SHELL_GIT_DIFF,     SHELL_GIT_STATUS
#define __APPNAV_SHELL_R_2THUMB__  SCREEN_KILL,        SCREEN_NEW_TAB
#define __APPNAV_SHELL_L_3THUMB__  KC_TRNS,            SHELL_GIT_DIFF,     SHELL_GIT_STATUS
#define __APPNAV_SHELL_R_3THUMB__  SCREEN_KILL,        SCREEN_NEW_TAB,     KC_TRNS


// APPNAV_SCREEN
// =============
#define __APPNAV_SCREEN_L0__  KC_TRNS,          KC_TRNS,    KC_TRNS,   KC_TRNS,   KC_TRNS,          KC_TRNS
#define __APPNAV_SCREEN_L1__  KC_TRNS,          KC_TRNS,    KC_TRNS,   KC_TRNS,   KC_TRNS,          KC_TRNS
#define __APPNAV_SCREEN_L2__  KC_TRNS,   KC_TRNS,    KC_TRNS,   KC_TRNS,   KC_TRNS,          KC_TRNS
#define __APPNAV_SCREEN_L3__  KC_TRNS,          KC_TRNS,    KC_TRNS,   KC_TRNS,   KC_TRNS,          KC_TRNS

#define __APPNAV_SCREEN_R0__  KC_TRNS,          KC_TRNS,    KC_TRNS,   KC_TRNS,   KC_TRNS,          KC_TRNS
#define __APPNAV_SCREEN_R1__  KC_TRNS,          SCREEN_7,   SCREEN_8,  SCREEN_9,  SCREEN_RENAME,    KC_TRNS
#define __APPNAV_SCREEN_R2__  SCREEN_TAB_LEFT,  SCREEN_4,   SCREEN_5,  SCREEN_6,  SCREEN_TAB_RIGHT, SCREEN_COPY_MODE                              
#define __APPNAV_SCREEN_R3__  KC_TRNS,          SCREEN_1,   SCREEN_2,  SCREEN_3,  SCREEN_NUMBER,    SCREEN_PASTE

#define __APPNAV_SCREEN_L_2THUMB__  KC_TRNS,       KC_TRNS
#define __APPNAV_SCREEN_L_3THUMB__  KC_TRNS,       KC_TRNS,   KC_TRNS
#define __APPNAV_SCREEN_R_2THUMB__  SCREEN_DETACH, SCREEN_0
#define __APPNAV_SCREEN_R_3THUMB__  SCREEN_DETACH, KC_TRNS,  SCREEN_0


// APPNAV_VSCODE
// ============

#define __APPNAV_VSCODE_L0__  KC_TRNS,          KC_TRNS,         KC_TRNS,       KC_TRNS,           KC_TRNS,     KC_TRNS
#define __APPNAV_VSCODE_L1__  TO(BASE),          VS_GO_TO_TOP,    VS_FIND_FILES, VS_CMT_BLOCK,      VS_CMT_LINE, VS_RECENT
#define __APPNAV_VSCODE_L2__  KC_TRNS,  KC_TRNS,         KC_TRNS,       KC_TRNS,           KC_TRNS,     VS_SEL_BRACKET
#define __APPNAV_VSCODE_L3__  KC_TRNS,          VS_GO_TO_BOTTOM, KC_TRNS,       KC_TRNS,           KC_TRNS,     KC_TRNS

#define __APPNAV_VSCODE_R0__  KC_TRNS,          KC_TRNS,         KC_TRNS,       KC_TRNS,           KC_TRNS,     KC_TRNS
#define __APPNAV_VSCODE_R1__  VS_COPYLINEDOWN,  VS_REFERENCES,   VS_DEFINITION, VS_IMPLEMENTATION, VS_LINE,     VS_BRACKET
#define __APPNAV_VSCODE_R2__  VS_DEL_LINE,      VS_TABLEFT,      VS_TABRIGHT,   VS_SYMBOLEDITOR,   VS_FILE,     VS_BACK
#define __APPNAV_VSCODE_R3__  VS_BM_CLEARALL,   VS_BM_PREV,      VS_BM_NEXT,    VS_GROUP_1,        VS_GROUP_2,  VS_BM_TOGGLE

#define __APPNAV_VSCODE_L_2THUMB__  KC_TRNS,     KC_TRNS
#define __APPNAV_VSCODE_R_2THUMB__  VS_CLOSETAB, VS_COMMANDS
#define __APPNAV_VSCODE_L_3THUMB__  KC_TRNS,     KC_TRNS,     KC_TRNS
#define __APPNAV_VSCODE_R_3THUMB__  VS_CLOSETAB, VS_BM_LIST,  VS_COMMANDS


// APPNAV_MSTEAMS
// ==============

#define __APPNAV_MSTEAMS_L0__  KC_TRNS,            KC_TRNS,          KC_TRNS,           KC_TRNS,    KC_TRNS,         KC_TRNS
#define __APPNAV_MSTEAMS_L1__  KC_TRNS,            KC_TRNS,          KC_TRNS,           KC_TRNS,    KC_TRNS,         KC_TRNS
#define __APPNAV_MSTEAMS_L2__  KC_TRNS,   KC_TRNS,          KC_TRNS,           KC_TRNS,    KC_TRNS,         KC_TRNS
#define __APPNAV_MSTEAMS_L3__  KC_TRNS,            KC_TRNS,          KC_TRNS,           KC_TRNS,    KC_TRNS,         KC_TRNS

#define __APPNAV_MSTEAMS_R0__  KC_TRNS,            KC_TRNS,          KC_TRNS,           KC_TRNS,    KC_TRNS,         KC_TRNS
#define __APPNAV_MSTEAMS_R1__  KC_TRNS,            KC_TRNS,          KC_TRNS,           KC_TRNS,    KC_TRNS,         KC_TRNS
#define __APPNAV_MSTEAMS_R2__  KC_TRNS,            TM_TAB_UP,        TM_TAB_DOWN,       KC_TRNS,    TM_FOCUS_CHAT,   KC_TRNS
#define __APPNAV_MSTEAMS_R3__  KC_TRNS,            KC_TRNS,          KC_TRNS,           KC_TRNS,    KC_TRNS,         KC_TRNS

#define __APPNAV_MSTEAMS_L_2THUMB__  KC_TRNS,      KC_TRNS
#define __APPNAV_MSTEAMS_R_2THUMB__  KC_TRNS,      KC_TRNS
#define __APPNAV_MSTEAMS_L_3THUMB__  KC_TRNS,      KC_TRNS,    KC_TRNS
#define __APPNAV_MSTEAMS_R_3THUMB__  KC_TRNS,      KC_TRNS,    KC_TRNS