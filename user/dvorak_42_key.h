// Copyright 2022 LucW (@luc-languagetools)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

#include "quantum.h"

#define TMUX_SHORTCUT(KEYCODE, SHORTCUT) \
case KEYCODE:\
    SEND_STRING(SS_LCTL("a") SHORTCUT);\
    break

extern bool wsWindowSwitchingMode;

// LAYERS
// ======

enum layer_names {
    // base layers, will jump to the appropriate app layers
    BASE,
    // keynav layers
    KEYNAV,
    // keysel layers
    KEYSEL,
    // desknav layers (moving workspaces, etc)
    DESKNAV,
    // appnav layers (app specific shortcuts)
    BROWSER,
    SHELL,
    TMUX,
    VSCODE,
    MOUSE,
    // other
    SYMBOLS,        // combined numbers and symbols layer
    GAME,           // game layer
    GAME_NUMPAD
};


enum custom_keycodes {
  PLACEHOLDER = SAFE_RANGE, // can always be here
  
  // shell nav macros
  SHELL_LS,
  SHELL_LSLTR,
  SHELL_LSLA,
  SHELL_CDPRE,
  SHELL_LESS,
  SHELL_PLESS,
  SHELL_PGREP,
  SHELL_TAILF,

  SHELL_SCREENRD,    // deprecate
  SHELL_SCREEN_NEW,  // deprecate
  SHELL_SCREEN_LIST, // deprecate

  SHELL_GIT_STATUS,
  SHELL_GIT_DIFF,
  SHELL_GIT_COMMIT,

  // tmux shortcuts
  // sessions
  TMUX_PREV_SESSION,
  TMUX_NEXT_SESSION,
  TMUX_LIST_SESSIONS,
  TMUX_RENAME_SESSION,
  TMUX_NEW_SESSION,
  // windows
  TMUX_TAB_LEFT,
  TMUX_TAB_RIGHT,
  TMUX_LIST_WIN,
  TMUX_NEW_WIN,
  TMUX_RENAME_WIN,
  TMUX_KILL_WIN,
  TMUX_MOVE_WIN_LEFT,
  TMUX_MOVE_WIN_RIGHT,
  TMUX_WIN_1,
  TMUX_WIN_2,
  TMUX_WIN_3,
  TMUX_WIN_4,
  TMUX_WIN_5,
  TMUX_COMMANDS,

  // Alt+Escape / Switch windows directly in Gnome
  WS_WIN_SWITCH,
  // alt-tab / Switch apps
  WS_APP_SWITCH,

  
};

// OS shortcuts
// ============

// win10
#define WS_LEFT LCTL(LGUI(KC_LEFT))
#define WS_RIGHT LCTL(LGUI(KC_RIGHT))
#define WS_SHOW LGUI(KC_TAB)

// gnome terminal
#define TERMINAL_NEW_TAB LSFT(LCTL(KC_T))
#define TERMINAL_TITLE LSFT(LCTL(KC_S)) // this is not a default shortcut, needs to be configured
#define TERMINAL_CLOSE_TAB LSFT(LCTL(KC_W))
#define TERMINAL_PASTE LSFT(LCTL(KC_V))


// generic shortcuts
// =================
#define DEL_WORD LCTL(KC_BSPC)
#define SAVE LCTL(KC_S)
#define UNDO LCTL(KC_Z)

// browser shortcuts
// =================

#define BR_TAB_LEFT RCTL(KC_PGUP)
#define BR_TAB_RIGHT RCTL(KC_PGDN)
#define BR_TAB_CLOSE RCTL(KC_W)
#define BR_TAB_NEW RCTL(KC_T)
#define BR_BACK LALT(KC_LEFT)
#define BR_RELOAD RCTL(KC_R)
#define BR_SEARCH RCTL(KC_E)
#define BR_URL_BAR RCTL(KC_L)
#define BR_TAB_FIRST RCTL(KC_1)
#define BR_TAB_LAST RCTL(KC_9)
#define BR_TAB_MOVE_LEFT RCTL(LSFT(KC_PGUP))
#define BR_TAB_MOVE_RIGHT RCTL(LSFT(KC_PGDN))

#define BR_TAB_LEFT_ALT RCTL(LSFT(KC_TAB))
#define BR_TAB_RIGHT_ALT RCTL(KC_TAB)


// shell shortcuts
// ===============

#define SH_DEL_WORD RCTL(KC_W)
#define SH_DEL_PATH LALT(KC_BSPC)
#define SH_WORD_LEFT LALT(KC_B)
#define SH_WORD_RIGHT LALT(KC_F)

#define SH_DEL_TO_START RCTL(KC_U)
#define SH_DEL_TO_END RCTL(KC_K)

#define SH_RECALL LALT(KC_DOT)
#define SH_SEARCH RCTL(KC_R)
#define SH_PASTE KC_BTN2

#define SH_EXIT RCTL(KC_X)
#define SH_CLEARSCR RCTL(KC_L)
#define SH_STOP RCTL(KC_C)

#define SH_PROJCMD RCTL(KC_P)


// visual studio code shortcuts
// ============================

#include "vscode_macros.h"

