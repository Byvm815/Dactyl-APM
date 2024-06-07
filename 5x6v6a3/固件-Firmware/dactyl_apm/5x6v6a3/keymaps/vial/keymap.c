/*
Copyright 2020 Seth Bonner <fl3tching101@gmail.com>

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

#include QMK_KEYBOARD_H
#include "5x6v6a3.h"

#define SFT_ESC  SFT_T(KC_ESC)
#define CTL_BSPC CTL_T(KC_BSPC)
#define ALT_SPC  ALT_T(KC_SPC)
#define SFT_ENT  SFT_T(KC_ENT)

#define KC_ML KC_MS_LEFT
#define KC_MR KC_MS_RIGHT
#define KC_MU KC_MS_UP
#define KC_MD KC_MS_DOWN
#define KC_MB1 KC_MS_BTN1
#define KC_MB2 KC_MS_BTN1

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT(
        _______,_______,_______,_______,_______,_______,_______,
        KC_TAB, KC_Q,   KC_W,   KC_E,   KC_R,   KC_T,   _______,        
        KC_LALT,KC_A,   KC_S,   KC_D,   KC_F,   KC_G,   _______,        
        KC_ESC, KC_Z,   KC_X,   KC_C,   KC_V,   KC_B,           
        KC_NO,  KC_NO, KC_LBRC,KC_RBRC,
                                        MO(2),  MT(MOD_LCTL,KC_SPC),    
                                                KC_BSPC,KC_ESC,                
                                                KC_NO,  KC_NO,

        _______,_______,_______,_______,_______,_______,_______,
        _______,KC_Y,   KC_U,   KC_I,   KC_O,   KC_QUOT,KC_GRV, 
        _______,KC_H,   KC_J,   KC_K,   KC_L,   KC_P,   KC_SCLN,
                KC_N,   KC_M,   KC_COMM,KC_DOT, KC_SLSH,KC_LCTL,
                KC_MINS,KC_EQL, KC_NO,  KC_NO,
        MT(MOD_LSFT,KC_ENT),MO(3),                    
KC_CAPS,KC_DEL,                                 
KC_NO,  KC_NO                                                    
    ),

    [2] = LAYOUT(
        _______,_______,_______,_______,_______,_______,_______,
        KC_F1,  KC_F2,  KC_F3,  KC_F4,  KC_F5,  KC_F6,  _______,          
     S(KC_BSLS),KC_EXLM,KC_AT,  KC_HASH,KC_DLR, KC_PERC,_______,       
        _______,_______,_______,_______,_______,_______,     
        _______,_______,_______,_______,
                                        _______,_______,
                                                _______,_______,
                                                _______,_______,
                                                
        _______,_______,_______,_______,_______,_______,_______,
        _______,KC_NUM, KC_P1,  KC_P2,  KC_P3,  KC_PPLS,KC_PMNS,
        _______,KC_P4,  KC_P5,  KC_P6,  KC_PAST,KC_PSLS,_______,
                KC_P7,  KC_P8,  KC_P9,  KC_PEQL,KC_PENT,_______,
                                KC_PDOT,_______,_______,_______,
        KC_NO,  KC_P0,
_______,_______,                                
_______,_______                                                                                 
    ),

    [3] = LAYOUT(
        _______,_______,_______,_______,_______,_______,_______,
        _______,_______,KC_HOME,KC_UP,  KC_END, KC_PGUP,_______,                
        _______,_______,KC_LEFT,KC_DOWN,KC_RGHT,KC_PGDN,_______,        
        _______,_______,_______,_______,_______,_______,         
        _______,_______,_______,_______,
                                        KC_NO,  _______,             
                                                _______,QK_BOOT,          
                                                _______,_______,

        _______,_______,_______,_______,_______,_______,_______,
        _______,KC_F7,  KC_F8,  KC_F9,  KC_F10,  KC_F11, KC_F12,
        _______,KC_CIRC,KC_AMPR,KC_ASTR,KC_LPRN, KC_RPRN,KC_BSLS,
                _______,_______,_______,_______,_______,_______,
                _______,_______,_______,_______,
        _______,_______,                                 
_______,_______,                                 
_______,_______                                                                                
    )
};
