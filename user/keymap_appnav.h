#pragma once

// BROWSER
// ============

#define __BROWSER_L0__  KC_TRNS, KC_TRNS,          KC_TRNS,            KC_TRNS,            KC_TRNS,            KC_TRNS
#define __BROWSER_L1__  KC_TRNS, KC_TRNS,          KC_TRNS,            KC_TRNS,            KC_TRNS,            KC_TRNS
#define __BROWSER_L2__  KC_TRNS, KC_TRNS,          KC_TRNS,            KC_TRNS,            KC_TRNS,            KC_TRNS
#define __BROWSER_L3__  KC_TRNS, KC_TRNS,          KC_TRNS,            KC_TRNS,            KC_TRNS,            KC_TRNS

#define __BROWSER_R0__  KC_TRNS, KC_TRNS,          KC_TRNS,            KC_TRNS,            KC_TRNS,            KC_TRNS
#define __BROWSER_R1__  KC_TRNS, BR_TAB_MOVE_LEFT, BR_TAB_MOVE_RIGHT,  BR_TAB_LEFT_ALT,    BR_TAB_RIGHT_ALT,   KC_TRNS
#define __BROWSER_R2__  KC_TRNS, BR_TAB_LEFT,      BR_TAB_RIGHT,       BR_SEARCH,          BR_RELOAD,          BR_BACK
#define __BROWSER_R3__  KC_TRNS, BR_TAB_FIRST,     BR_TAB_LAST,       BR_URL_BAR,         KC_TRNS,            KC_TRNS

#define __BROWSER_L_2THUMB__  KC_TRNS,      KC_TRNS
#define __BROWSER_R_2THUMB__  BR_TAB_CLOSE, BR_TAB_NEW
#define __BROWSER_L_3THUMB__  KC_TRNS,      KC_TRNS,    KC_TRNS
#define __BROWSER_R_3THUMB__  BR_TAB_CLOSE, BR_TAB_NEW, KC_TRNS

// SHELL
// ============

#define __SHELL_L0__  KC_TRNS,            KC_TRNS,          KC_TRNS,           KC_TRNS,          KC_TRNS,          KC_TRNS
#define __SHELL_L1__  SCREEN_DETACH,      SCREEN_PASTE,     SHELL_PGREP,       SHELL_PLESS,      SHELL_LESS,       SH_EXIT
#define __SHELL_L2__  SHELL_SCREENRD,     SCREEN_COPY_MODE, SHELL_CDPRE,       SHELL_LSLTR,      SHELL_LS,         SHELL_LSLA
#define __SHELL_L3__  SHELL_SCREEN_LIST,  TO(BASE),         SHELL_GIT_DIFF,    SHELL_GIT_STATUS, SHELL_TAILF,      SHELL_SCREEN_NEW

#define __SHELL_R0__  KC_TRNS,            KC_TRNS,          KC_TRNS,           KC_TRNS,          KC_TRNS,          KC_TRNS
#define __SHELL_R1__  SCREEN_KILL,        SCREEN_NUMBER,    SCREEN_RENAME,     KC_TRNS,          SH_CLEARSCR,      SH_DEL_PATH
#define __SHELL_R2__  SH_WORD_LEFT,       SCREEN_TAB_LEFT,  SCREEN_TAB_RIGHT,  SCREEN_WINDOWS,   SH_WORD_RIGHT,    SH_DEL_WORD
#define __SHELL_R3__  SH_DEL_TO_START,    SH_RECALL,        SH_SEARCH,         SH_PASTE,         SH_DEL_TO_END,    SH_STOP

#define __SHELL_L_2THUMB__  KC_TRNS,            KC_TRNS
#define __SHELL_R_2THUMB__  KC_TRNS,            SCREEN_NEW_TAB
#define __SHELL_L_3THUMB__  KC_TRNS,            KC_TRNS,            KC_TRNS
#define __SHELL_R_3THUMB__  KC_TRNS,            SCREEN_NEW_TAB,     KC_TRNS


// SCREEN
// =============
#define __SCREEN_L0__  KC_TRNS,          KC_TRNS,  KC_TRNS,            KC_TRNS,             KC_TRNS,             KC_TRNS
#define __SCREEN_L1__  KC_TRNS,          KC_TRNS,  KC_TRNS,            KC_TRNS,             KC_TRNS,             KC_TRNS
#define __SCREEN_L2__  KC_TRNS,          KC_TRNS,  KC_TRNS,            KC_TRNS,             KC_TRNS,             KC_TRNS
#define __SCREEN_L3__  KC_TRNS,          KC_TRNS,  KC_TRNS,            KC_TRNS,             KC_TRNS,             KC_TRNS

#define __SCREEN_R0__  KC_TRNS,          KC_TRNS,  KC_TRNS,            KC_TRNS,             KC_TRNS,             KC_TRNS
#define __SCREEN_R1__  KC_TRNS,          SCREEN_7, SCREEN_8,           SCREEN_9,            SCREEN_RENAME,       KC_TRNS
#define __SCREEN_R2__  SCREEN_TAB_LEFT,  SCREEN_4, SCREEN_5,           SCREEN_6,            SCREEN_TAB_RIGHT,    KC_TRNS
#define __SCREEN_R3__  KC_TRNS,          SCREEN_1, SCREEN_2,           SCREEN_3,            SCREEN_NUMBER,       KC_TRNS

#define __SCREEN_L_2THUMB__  KC_TRNS,       KC_TRNS
#define __SCREEN_L_3THUMB__  KC_TRNS,       KC_TRNS,   KC_TRNS
#define __SCREEN_R_2THUMB__  SCREEN_DETACH, SCREEN_0
#define __SCREEN_R_3THUMB__  SCREEN_DETACH, KC_TRNS,  SCREEN_0


// VSCODE
// ============

#define __VSCODE_L0__  KC_TRNS,           KC_TRNS,         KC_TRNS,       KC_TRNS,           KC_TRNS,     KC_TRNS
#define __VSCODE_L1__  TO(BASE),          VS_GO_TO_TOP,    VS_FIND_FILES, VS_CMT_BLOCK,      VS_CMT_LINE, VS_RECENT
#define __VSCODE_L2__  KC_TRNS,           KC_TRNS,         KC_TRNS,       KC_TRNS,           KC_TRNS,     VS_SEL_BRACKET
#define __VSCODE_L3__  KC_TRNS,           VS_GO_TO_BOTTOM, KC_TRNS,       KC_TRNS,           KC_TRNS,     KC_TRNS

#define __VSCODE_R0__  KC_TRNS,           KC_TRNS,         KC_TRNS,       KC_TRNS,           KC_TRNS,     KC_TRNS
#define __VSCODE_R1__  VS_COPYLINEDOWN,   VS_REFERENCES,   VS_DEFINITION, VS_IMPLEMENTATION, VS_LINE,     VS_BRACKET
#define __VSCODE_R2__  VS_DEL_LINE,       VS_TABLEFT,      VS_TABRIGHT,   VS_SYMBOLEDITOR,   VS_FILE,     VS_BACK
#define __VSCODE_R3__  VS_BM_CLEARALL,    VS_BM_PREV,      VS_BM_NEXT,    VS_GROUP_1,        VS_GROUP_2,  VS_BM_TOGGLE

#define __VSCODE_L_2THUMB__  KC_TRNS,     KC_TRNS
#define __VSCODE_R_2THUMB__  VS_CLOSETAB, VS_COMMANDS
#define __VSCODE_L_3THUMB__  KC_TRNS,     KC_TRNS,     KC_TRNS
#define __VSCODE_R_3THUMB__  VS_CLOSETAB, VS_BM_LIST,  VS_COMMANDS

