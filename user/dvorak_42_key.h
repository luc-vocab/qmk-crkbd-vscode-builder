// Copyright 2022 LucW (@luc-languagetools)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

#include "quantum.h"

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
    VSCODE,
    MOUSE,
    // other
    SYMBOLS,        // combined numbers and symbols layer
    GAME           // game layer
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

  SHELL_SCREENRD,
  SHELL_SCREEN_NEW,
  SHELL_SCREEN_LIST,

  SHELL_GIT_STATUS,
  SHELL_GIT_DIFF,
  SHELL_GIT_COMMIT,

  // linux screen macros
  SCREEN_TAB_LEFT,
  SCREEN_TAB_RIGHT,

  SCREEN_NEW_TAB,
  SCREEN_DETACH,
  SCREEN_RENAME,
  SCREEN_NUMBER,
  SCREEN_KILL,
  SCREEN_WINDOWS,

  SCREEN_MOVE_LEFT,
  SCREEN_MOVE_RIGHT,

  SCREEN_COPY_MODE,
  SCREEN_PASTE,

  WS_WIN_SWITCH,
  WS_APP_SWITCH,

  
};

// OS shortcuts
// ============

// win10
#define WS_LEFT LCTL(LGUI(KC_LEFT))
#define WS_RIGHT LCTL(LGUI(KC_RIGHT))
#define WS_SHOW LGUI(KC_TAB)

// chrome os
#define CROS_WS_LEFT LGUI(KC_LBRC)
#define CROS_WS_RIGHT LGUI(KC_RBRC)

#define CROS_WS_1 RGUI(LSFT(KC_1))
#define CROS_WS_2 RGUI(LSFT(KC_2))
#define CROS_WS_3 RGUI(LSFT(KC_3))
#define CROS_WS_4 RGUI(LSFT(KC_4))

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

// MS teams shortcuts
// =================

#define TM_TAB_UP LALT(KC_UP)
#define TM_TAB_DOWN LALT(KC_DOWN)
#define TM_FOCUS_CHAT LALT(LSFT(KC_C))

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


// visual studio code shortcuts
// ============================

#include "vscode_macros.h"

