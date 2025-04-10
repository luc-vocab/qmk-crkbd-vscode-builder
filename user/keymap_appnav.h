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
#define __BROWSER_R3__  KC_TRNS, BR_TAB_FIRST,     BR_TAB_LAST,        BR_URL_BAR,         KC_TRNS,            KC_TRNS

#define __BROWSER_L_2THUMB__  KC_TRNS,      KC_TRNS
#define __BROWSER_R_2THUMB__  BR_TAB_CLOSE, BR_TAB_NEW
#define __BROWSER_L_3THUMB__  KC_TRNS,      KC_TRNS,    KC_TRNS
#define __BROWSER_R_3THUMB__  BR_TAB_CLOSE, BR_TAB_NEW, KC_TRNS

#define __BROWSER_L1_EXT__ __BROWSER_L1__, KC_TRNS
#define __BROWSER_L2_EXT__ __BROWSER_L2__, KC_TRNS
#define __BROWSER_R1_EXT__ KC_TRNS, __BROWSER_R1__
#define __BROWSER_R2_EXT__ KC_TRNS, __BROWSER_R2__


// SHELL
// ============

#define __SHELL_L0__  KC_TRNS,            KC_TRNS,          KC_TRNS,           KC_TRNS,          KC_TRNS,          KC_TRNS
#define __SHELL_L1__  TERMINAL_CLOSE_TAB, KC_TRNS,          SHELL_PGREP,       SHELL_PLESS,      SHELL_LESS,       SH_EXIT
#define __SHELL_L2__  TERMINAL_NEW_TAB,   TERMINAL_PASTE,   SHELL_CDPRE,       SHELL_LSLTR,      SHELL_LS,         SHELL_LSLA
#define __SHELL_L3__  KC_TRNS,            TO(BASE),         MO(TMUX),          SHELL_GIT_STATUS, SHELL_TAILF,      KC_TRNS

#define __SHELL_R0__  KC_TRNS,            KC_TRNS,          KC_TRNS,           KC_TRNS,          KC_TRNS,          KC_TRNS
#define __SHELL_R1__  SH_LAST_TEST,       TMUX_WIN_1,       TMUX_WIN_2,        TMUX_WIN_3,       TMUX_WIN_4,       SH_DEL_PATH
#define __SHELL_R2__  SH_WORD_LEFT,       TMUX_TAB_LEFT,    TMUX_TAB_RIGHT,    SH_TEST_LIST,     SH_WORD_RIGHT,    SH_DEL_WORD
#define __SHELL_R3__  SH_DEL_TO_START,    SH_RECALL,        SH_SEARCH,         SH_PROJCMD,       SH_DEL_TO_END,    SH_STOP

#define __SHELL_L_2THUMB__  KC_TRNS, KC_TRNS
#define __SHELL_R_2THUMB__  KC_TRNS, KC_TRNS
#define __SHELL_L_3THUMB__  KC_TRNS,            __SHELL_L_2THUMB__
#define __SHELL_R_3THUMB__  __SHELL_R_2THUMB__, KC_TRNS

#define __SHELL_L1_EXT__ __SHELL_L1__, KC_TRNS
#define __SHELL_L2_EXT__ __SHELL_L2__, KC_TRNS
#define __SHELL_R1_EXT__ KC_TRNS, __SHELL_R1__
#define __SHELL_R2_EXT__ KC_TRNS, __SHELL_R2__

// TMUX
// ====

#define __TMUX_L0__  KC_TRNS,          KC_TRNS,            KC_TRNS,             KC_TRNS,            KC_TRNS,             KC_TRNS
#define __TMUX_L1__  KC_TRNS,          KC_TRNS,            KC_TRNS,             KC_TRNS,            KC_TRNS,             KC_TRNS
#define __TMUX_L2__  KC_TRNS,          KC_TRNS,            KC_TRNS,             TMUX_COPY_SEL,      TMUX_START_SEL,      KC_TRNS
#define __TMUX_L3__  KC_TRNS,          KC_TRNS,            KC_TRNS,             TMUX_COPY_LAST,     TMUX_PASTE,          KC_TRNS

#define __TMUX_R0__  KC_TRNS,          KC_TRNS,            KC_TRNS,             KC_TRNS,            KC_TRNS,             KC_TRNS
#define __TMUX_R1__  KC_TRNS,          TMUX_MOVE_WIN_LEFT, TMUX_MOVE_WIN_RIGHT, KC_TRNS,            KC_TRNS,             TMUX_DETACH_CLIENT
#define __TMUX_R2__  KC_TRNS,          TMUX_TAB_LEFT,      TMUX_TAB_RIGHT,      TMUX_LIST_WIN,      TMUX_RENAME_WIN,     TMUX_KILL_WIN
#define __TMUX_R3__  KC_TRNS,          TMUX_PREV_SESSION,  TMUX_NEXT_SESSION,   TMUX_LIST_SESSIONS, TMUX_RENAME_SESSION, TMUX_KILL_SESSION

#define __TMUX_L_2THUMB__  TMUX_COPY_MODE,    TMUX_NEW_SESSION
#define __TMUX_R_2THUMB__  KC_TRNS,           TMUX_NEW_WIN
#define __TMUX_L_3THUMB__  KC_TRNS,           __TMUX_L_2THUMB__
#define __TMUX_R_3THUMB__  __TMUX_R_2THUMB__, TMUX_COMMANDS

#define __TMUX_L1_EXT__ __TMUX_L1__, KC_TRNS
#define __TMUX_L2_EXT__ __TMUX_L2__, KC_TRNS
#define __TMUX_R1_EXT__ KC_TRNS, __TMUX_R1__
#define __TMUX_R2_EXT__ KC_TRNS, __TMUX_R2__

// VSCODE
// ============

#define __VSCODE_L0__  KC_TRNS,           KC_TRNS,         KC_TRNS,            KC_TRNS,              KC_TRNS,              KC_TRNS
#define __VSCODE_L1__  TO(BASE),          VS_GO_TO_TOP,    VS_FIND_FILES,      VS_CMT_BLOCK,         VS_CMT_LINE,          VS_RECENT
#define __VSCODE_L2__  VS_FREE_1,         VS_COPILOT,      VS_FREE_3,          VS_FOCUS_EXPLORER,    VS_FOCUS_BREADCRUMBS, VS_FREE_5
#define __VSCODE_L3__  VS_FREE_2,         VS_GO_TO_BOTTOM, VS_FREE_4,          VS_COLLAPSE_EXPLORER, VS_OPEN_FILE,         VS_FREE_6

#define __VSCODE_R0__  KC_TRNS,           KC_TRNS,         KC_TRNS,            KC_TRNS,              KC_TRNS,              KC_TRNS
#define __VSCODE_R1__  VS_EXPAND_SEL,     VS_REFERENCES,   VS_DEFINITION,      VS_IMPLEMENTATION,    VS_LINE,              VS_BRACKET
#define __VSCODE_R2__  VS_BM_TOGGLE,      VS_TABLEFT,      VS_TABRIGHT,        VS_SYMBOLEDITOR,      VS_FILE,              VS_BACK
#define __VSCODE_R3__  VS_BM_CLEARALL,    VS_BM_PREV,      VS_BM_NEXT,         VS_GROUP_1,           VS_GROUP_2,           VS_FREE_7

#define __VSCODE_L_2THUMB__  VS_COPYLINEDOWN, VS_DEL_LINE
#define __VSCODE_R_2THUMB__  VS_CLOSETAB,     VS_COMMANDS
#define __VSCODE_L_3THUMB__  KC_TRNS,         __VSCODE_L_2THUMB__
#define __VSCODE_R_3THUMB__  VS_CLOSETAB,     VS_BM_LIST,  VS_COMMANDS

#define __VSCODE_L1_EXT__ __VSCODE_L1__, KC_TRNS
#define __VSCODE_L2_EXT__ __VSCODE_L2__, KC_TRNS
#define __VSCODE_R1_EXT__ KC_TRNS, __VSCODE_R1__
#define __VSCODE_R2_EXT__ KC_TRNS, __VSCODE_R2__

