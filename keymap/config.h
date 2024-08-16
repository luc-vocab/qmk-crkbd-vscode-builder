/*
This is the c configuration file for the keymap

Copyright 2012 Jun Wako <wakojun@gmail.com>
Copyright 2015 Jack Humbert

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#pragma once

//#define USE_MATRIX_I2C

/* Select hand configuration */

// #define MASTER_LEFT
#define MASTER_RIGHT
// #define EE_HANDS

//#define TAPPING_FORCE_HOLD
//#define TAPPING_TERM 100

// MOUSE SETTINGS
// ==============

#define MOUSEKEY_TIME_TO_MAX 200

#define RGBLIGHT_LAYERS

#ifdef RGBLIGHT_ENABLE
    // #define RGBLIGHT_LIMIT_VAL 90
    // #define RGBLIGHT_LIMIT_VAL 0
    #define RGBLIGHT_HUE_STEP 10
    #define RGBLIGHT_SAT_STEP 17
    #define RGBLIGHT_VAL_STEP 17
#endif

#ifdef RGB_MATRIX_ENABLE
 // #define ENABLE_RGB_MATRIX_RAINBOW_MOVING_CHEVRON
 // #define RGB_MATRIX_KEYPRESSES // reacts to keypresses 
 // #define ENABLE_RGB_MATRIX_SOLID_REACTIVE_SIMPLE
 // #define ENABLE_RGB_MATRIX_SOLID_REACTIVE_WIDE
 // #define ENABLE_RGB_MATRIX_SPLASH
 //#define ENABLE_RGB_MATRIX_SOLID_SPLASH
#endif

// we don't want any colors by default
#define RGBLIGHT_DEFAULT_HUE 	0
#define RGBLIGHT_DEFAULT_SAT 	0
#define RGBLIGHT_DEFAULT_VAL    0

#define OLED_FONT_H "users/luc/glcdfont.c"
