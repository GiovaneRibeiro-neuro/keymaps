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



#include QMK_KEYBOARD_H
#include "my.h"


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

/* Qwerty
 *
 *                  ,-----------------------------------------------------------------------------------.
 * Tap for [{ ª --->|  GUI |   Q  |   W  |   E  |   R  |   T  |   Y  |   U  |   I  |   O  |   P  | GUI  | ------> Tap for ]} º
 *                  |------+------+------+------+------+------+------+------+------+------+------+------|
 *                  | Esc  |CMD/A |Alt/S |Sft/D |Ctrl/F|   G  |   H  |Ctrl/J|Sft/K |Alt/L |CMD/;:|Enter |  
 *                  |------+------+------+------+------+------+------+------+------+------+------+------|
 *                  |   \| |   Z  |   X  |  C © |   V  |   B  |   N  |   M  |  ,<  |  .>  | /? ° |PrtScr| 
 *                  |------+------+------+------+------+------+------+------+------+------+------+------|
 *                  |  Tab | Home |  *   |  -_  |Lower |    Space    |Raise | =+ § |  '"  |  End | KBRD | ------> Tap to Caps Lock
 *                  `-----------------------------------------------------------------------------------'
 *
 *
 */
[QWERTY_LAYER] = LAYOUT_planck_grid_wrapper(
    GUI_L,   _________________QWERTY_L1_________________, _________________QWERTY_R1_________________, GUI_R,
    KC_ESC,  _________________QWERTY_L2_________________, _________________QWERTY_R2_________________, KC_ENT,
    BR_BSLS, _________________QWERTY_L3_________________, _________________QWERTY_R3_________________, KC_PSCR,
    KC_TAB,  KC_HOME, BR_ASTR, KC_MINS,   LOWER,     KC_SPC, KC_SPC,   RAISE,   BR_EQL, BR_QUOT,  KC_END, KBRD
),

/* lower
 *
 *                  ,-----------------------------------------------------------------------------------.
 * Tap for [{ ª --->| GUI  |  !   |  @   |  ´   |  #   |  $   |   ¬  |   &  |   ^  |   (  |  )   | GUI  | ------> Tap for ]} º
 *                  |------+------+------+------+------+------+------+------+------+------+------+------|
 *                  | Esc  |  `   |      |      | PgUp |      |   ←  |   ↓  |   ↑  |   →  |      |Enter |  
 *                  |------+------+------+------+------+------+------+------+------+------+------+------|
 *                  | \|   |      |      |   Ç  | PgDn |      |   ~  |      |   ¹  |   ²  |  ³   |PrtScr|
 *                  |------+------+------+------+------+------+------+------+------+------+------+------|
 *                  |  Tab | Home |  %   |  -_  |Lower |  Backspace  |Raise | =+ § |  '"  |  End | KBRD | ------> Tap to Caps Lock
 *                  `-----------------------------------------------------------------------------------' 
 *
 */
[LOWER_LAYER] = LAYOUT_planck_grid_wrapper(
    _______, _________________LOWER_L1__________________, _________________LOWER_R1__________________, _______,
    _______, _________________LOWER_L2__________________, _________________LOWER_R2__________________, _______,
    _______, _________________LOWER_L3__________________, _________________LOWER_R3__________________, _______,
    _______, _______, BR_PERC, _______, _______, KC_BSPC, KC_BSPC, _______, _______,  _______,  _______, _______
),

/* Raise
 *
 *                  ,-----------------------------------------------------------------------------------.
 * Tap for [{ ª --->| GUI  |  F1  |  F2  |  F3  |  F4  |  £   |   €  |      |   7  |   8  |   9  | GUI  | ------> Tap for ]} º
 *                  |------+------+------+------+------+------+------+------+------+------+------+------|
 *                  | Esc  |  F5  |  F6  |  F7  |  F8  |      |      |      |   4  |   5  |   6  |Enter |
 *                  |------+------+------+------+------+------+------+------+------+------+------+------|
 *                  | \|   |  F9  |  F10 |  F11 |  F12 |      |      |      |   1  |   2  |   3  |PrtScr|
 *                  |------+------+------+------+------+------+------+------+------+------+------+------|
 *                  |  Tab | Home |  ¢   |  -_  |Lower |  Backspace  |Raise | =+ § |  '"  |  End | KBRD | ------> Tap to Caps Lock
 *                  `-----------------------------------------------------------------------------------'
 *
 */
[RAISE_LAYER] = LAYOUT_planck_grid_wrapper(
    _______, _________________RAISE_L1__________________, _________________RAISE_R1__________________, _______,
    _______, _________________RAISE_L2__________________, _________________RAISE_R2__________________, _______,
    _______, _________________RAISE_L3__________________, _________________RAISE_R3__________________, _______,
    _______, _______, BR_CENT, _______, _______,  KC_DEL,  KC_DEL, _______,  DOUBLE_0,  KC_0, _______, _______
),

/* GUI (mouse, media controls, brightness, window management)
 *
 *                  ,-----------------------------------------------------------------------------------.
 *                  |      |      |      |      |      |      |      |      |      |      |      |      |
 *                  |------+------+------+------+------+------+------+------+------+------+------+------|
 *                  |      |      |      |      |      |      |      |      |      |      |      |      |  
 *                  |------+------+------+------+------+------+------+------+------+------+------+------|
 *                  |      |      |      |      |      |      |      |      |      |      |      |      | 
 *                  |------+------+------+------+------+------+------+------+------+------+------+------|
 *                  |      | Prev | Play | Next | Bri- |    Sleep    | Bri+ | Mute | Vol- | Vol+ | KBRD |
 *                  `-----------------------------------------------------------------------------------'
 *                          
 */
[GUI_LAYER] = LAYOUT_planck_grid_wrapper(
    XXXXXXX, __________________GUI_L1___________________, __________________GUI_R1___________________, XXXXXXX,
    XXXXXXX, __________________GUI_L2___________________, __________________GUI_R2___________________, XXXXXXX,
    XXXXXXX, __________________GUI_L3___________________, __________________GUI_R3___________________, XXXXXXX,
    XXXXXXX, KC_MPRV, KC_MPLY, KC_MNXT, KC_BRID, KC_SLEP, KC_SLEP, KC_BRIU, KC_MUTE, KC_VOLD, KC_VOLU, XXXXXXX
),

/* Keyboard (reset, debug mode, and other things)
 *
 *                  ,-----------------------------------------------------------------------------------.
 *                  |      | Reset| Debug| Game |Qwerty|      |      |      |      |      |      |      | 
 *                  |------+------+------+------+------+------+------+------+------+------+------+------|
 *                  |      |      |      |      |      |      |      |      |      |      |      |      |  
 *                  |------+------+------+------+------+------+------+------+------+------+------+------|
 *                  |      |      |      |      |      |      |      |      |      |      |      |      | 
 *                  |------+------+------+------+------+------+------+------+------+------+------+------|
 *                  |      |      |      |      |      |             |      |      |      |      | KBRD | 
 *                  `-----------------------------------------------------------------------------------'
 *                         
 */
[KEYBOARD_LAYER] = LAYOUT_planck_grid_wrapper(
    XXXXXXX, __________________KBD_L1___________________, __________________KBD_R1___________________, XXXXXXX,
    XXXXXXX, __________________KBD_L2___________________, __________________KBD_R2___________________, XXXXXXX,
    XXXXXXX, __________________KBD_L3___________________, __________________KBD_R3___________________, XXXXXXX,
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX
),

/* Game 
 *
 *                  ,-----------------------------------------------------------------------------------.
 *                  |      |     |      |      |      |  F1  |  F4  | F11  |   7  |   8  |  9   |       | 
 *                  |------+-----+------+------+------+------+------+------+------+------+------+-------|
 *                  | Esc  |  ←  |   ↓  |   ↑  |   →  |  F2  |  F5  | F12  |   4  |   5  |  6   |       |  
 *                  |------+-----+------+------+------+------+------+------+------+------+------+-------|
 *                  |      |  F7 |  F8  |  F9  |  F10 |  F3  |  F6  | F13  |   1  |   2  |  3   |       | 
 *                  |------+-----+------+------+------+------+------+------+------+------+------+-------|
 *                  |Shift |     |      |  Alt | Ctrl |    Space    |      |      |      |      | KBRD  | 
 *                  `-----------------------------------------------------------------------------------'
 *                         
 */
[GAME_LAYER] = LAYOUT_planck_grid_wrapper(
    XXXXXXX, __________________GAME_L1__________________, __________________GAME_R1__________________, XXXXXXX,
    KC_ESC,  __________________GAME_L2__________________, __________________GAME_R2__________________, XXXXXXX,
    XXXXXXX, __________________GAME_L3__________________, __________________GAME_R3__________________, XXXXXXX,
    KC_LSFT, XXXXXXX, XXXXXXX, KC_LOPT, KC_LCTL,  KC_SPC,  KC_SPC, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,    KBRD
),

};
