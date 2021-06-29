/* Copyright 2021 Giovane Boaviagem
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#pragma once

#include "quantum.h"
#include "version.h"
#include "muse.h"
#include "keymap_br_abnt2.h"

enum user_layers {
    QWERTY_LAYER,
    RAISE_LAYER,
    LOWER_LAYER,
    GUI_LAYER,
    KEYBOARD_LAYER
};

enum user_keycodes {
    QWERTY = SAFE_RANGE,
    RAISE,
    LOWER,
    GUI,
    KEYBOARD
};

enum custom_keycodes {
    DOUBLE_0
};


/*
 * Switcing layers
 */
#define LOWER MO(LOWER_LAYER)
#define RAISE MO(RAISE_LAYER)
#define GUI_L LT(GUI_LAYER, BR_LBRC)
#define GUI_R LT(GUI_LAYER, BR_RBRC)
#define KBRD  LT(KEYBOARD_LAYER, KC_EQL)

/*
 * Mod Taps - https://beta.docs.qmk.fm/using-qmk/advanced-keycodes/mod_tap
 */
#define ALT_L ALT_T(KC_HOME)
#define ALT_R ALGR_T(KC_END)
#define CTL_ESC CTL_T(KC_ESC)
#define CTL_ENT CTL_T(KC_ENT)

#define LAYOUT_planck_grid_wrapper(...) LAYOUT_planck_grid(__VA_ARGS__)

/*
 * Keyboard rows
 */

// qwerty layer
#define _________________QWERTY_L1_________________ KC_Q,    KC_W,    KC_E,    KC_R,    KC_T
#define _________________QWERTY_L2_________________ KC_A,    KC_S,    KC_D,    KC_F,    KC_G
#define _________________QWERTY_L3_________________ KC_Z,    KC_X,    KC_C,    KC_V,    KC_B

#define _________________QWERTY_R1_________________ KC_Y,    KC_U,    KC_I,    KC_O,    KC_P
#define _________________QWERTY_R2_________________ KC_H,    KC_J,    KC_K,    KC_L,    BR_SCLN
#define _________________QWERTY_R3_________________ KC_N,    KC_M,    KC_MINS, BR_QUOT, BR_SLSH

// raise layer
#define _________________RAISE_L1__________________ KC_F1,   KC_F2,   KC_F3,   KC_F4,   BR_1UP
#define _________________RAISE_L2__________________ KC_F5,   KC_F6,   KC_F7,   KC_F8,   BR_2UP
#define _________________RAISE_L3__________________ KC_F9,   KC_F10,  KC_F11,  KC_F12,  BR_3UP

#define _________________RAISE_R1__________________ KC_PAST,   KC_PPLS,   KC_7,    KC_8,    KC_9
#define _________________RAISE_R2__________________ KC_PSLS,   KC_PMNS,   KC_4,    KC_5,    KC_6
#define _________________RAISE_R3__________________ DOUBLE_0,  KC_0,      KC_1,    KC_2,    KC_3

// lower layer
#define _________________LOWER_L1__________________ KC_EXLM, KC_AT,   BR_ACUT, KC_HASH, BR_MORD
#define _________________LOWER_L2__________________ BR_GRV,  KC_HOME, KC_PGDN, KC_PGUP,  KC_END
#define _________________LOWER_L3__________________ XXXXXXX, BR_BSLS, BR_CCED, BR_DEG,  BR_FORD

#define _________________LOWER_R1__________________ KC_DLR,  KC_PERC, BR_CIRC, KC_AMPR, KC_ASTR
#define _________________LOWER_R2__________________ KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, KC_PIPE
#define _________________LOWER_R3__________________ BR_TILD, XXXXXXX, BR_PND,  BR_NOT,  KC_RPRN

// GUI layer
#define __________________GUI_L1___________________ XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX
#define __________________GUI_L2___________________ XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX
#define __________________GUI_L3___________________ XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX

#define __________________GUI_R1___________________ XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX
#define __________________GUI_R2___________________ XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX
#define __________________GUI_R3___________________ XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX

// Keyboard layer
#define __________________KBD_L1___________________ RESET,   DEBUG,   XXXXXXX, XXXXXXX, XXXXXXX
#define __________________KBD_L2___________________ XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX
#define __________________KBD_L3___________________ XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX

#define __________________KBD_R1___________________ XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX
#define __________________KBD_R2___________________ XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX
#define __________________KBD_R3___________________ XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX
