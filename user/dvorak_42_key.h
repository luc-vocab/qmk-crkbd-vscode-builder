// Copyright 2022 LucW (@luc-languagetools)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

#include "quantum.h"


// LAYERS
// ======

enum layer_names {
    BASE,            // base dvorak layer
    KEYNAV,          // arrow navigation (right hand)
    KEYSEL,          // arrow navigation + shift (allow text selection)
    SHELL_NAV,       // bash shortcuts
    SHELL_SCREEN,    // linux screen shortcuts
    COMBINED,        // combined numbers and symbols layer
    VSCODE,          // visual studio code specific layer
    BROWSER_CONTROL, // control browser and mouse
    SHORTCUTS,       // shortcuts to be intercepted by autohotkey
    FKEYS,           // function keys
    GAME,            // game layer
};


enum os_shortcut_mode {
    OS_MODE_WIN10 = 0,
    OS_MODE_LINUX,
    OS_MODE_CHROMEOS
};

// global variables
// ================

extern char current_os_shortcut_mode;

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

  SCREEN_0,
  SCREEN_1,
  SCREEN_2,
  SCREEN_3,
  SCREEN_4,
  SCREEN_5,
  SCREEN_6,
  SCREEN_7,
  SCREEN_8,
  SCREEN_9,

  SCREEN_COPY_MODE,
  SCREEN_PASTE,

  // generic OS shortcut macros
  KC_OS_MODE_WIN10,
  KC_OS_MODE_LINUX,
  KC_OS_MODE_CHROMEOS,

  OS_WS_LEFT,  // go to left workspace
  OS_WS_RIGHT, // go to right workspace
  OS_WS_SHOW,   // show workspaces
  OS_WS_1,     // workspace/app 1 
  OS_WS_2,
  OS_WS_3,
  OS_WS_4

};


// browser shortcuts
// =================

#define BR_TAB_LEFT RCTL(KC_PGUP)
#define BR_TAB_RIGHT RCTL(KC_PGDN)
#define BR_TAB_CLOSE RCTL(KC_W)
#define BR_TAB_NEW RCTL(KC_T)


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
#define SH_CLOSE RCTL(KC_D)
#define SH_CLEARSCR RCTL(KC_L)
#define SH_STOP RCTL(KC_C)

// Obsidian shortcuts
// ==================

#define OBS_READMODE RCTL(KC_E)
#define OBS_CMD RCTL(KC_P)
#define OBS_QUICKSW RCTL(KC_O)
#define OBS_CHECKBOX RCTL(KC_L)

// visual studio code shortcuts
// ============================

#include "vscode_macros.h"

