/*
Copyright 2022 <Pierre Constantineau>

3-Clause BSD License

Redistribution and use in source and binary forms, with or without modification, are permitted provided that the following conditions are met:

1. Redistributions of source code must retain the above copyright notice, this list of conditions and the following disclaimer.

2. Redistributions in binary form must reproduce the above copyright notice, this list of conditions and the following disclaimer in the documentation and/or other materials provided with the distribution.

3. Neither the name of the copyright holder nor the names of its contributors may be used to endorse or promote products derived from this software without specific prior written permission.
THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
(INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

*/
#include "keymap.h"

std::array<std::array<Key, MATRIX_COLS>, MATRIX_ROWS> matrix =
        KEYMAP2ARRAY(KEYMAP( 
    KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
    KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
    KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
    KC_NO,   KC_NO,            KC_NO,   KC_NO,            KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO
    ));

 
void setupKeymap() {


        uint32_t press[MATRIX_ROWS][MATRIX_COLS] = KEYMAP(
            KC_ESC,  KC_Q,     KC_W,    KC_E,     KC_R,    KC_T,   KC_Y,    KC_U,       KC_I,     KC_O,     KC_P,      KC_BSPC,
            KC_TAB,  KC_A,     KC_S,    KC_D,     KC_F,    KC_G,   KC_H,    KC_J,       KC_K,     KC_L,     KC_NO,     KC_ENT,    
            KC_LSFT, KC_Z,     KC_X,    KC_C,     KC_V,    KC_B,   KC_B,    KC_N,       KC_M,     KC_DOT,   KC_SLSH,   KC_UP,  
            KC_LCTL, KC_LGUI,           KC_LALT,  KC_NO,           KC_NO,   LAYER_3,    KC_LEFT,  KC_DOWN,  KC_RIGHT,  KC_RSFT
        );

    
        uint32_t layer1[MATRIX_ROWS][MATRIX_COLS] = KEYMAP(
            KC_GRV,   KC_1,     KC_2,    KC_3,     KC_4,     KC_5,     KC_6,     KC_7,     KC_8,     KC_9,     KC_0,      KC_BSLS,
            KC_TAB,   KC_EXLM,  KC_AT,   KC_HASH,  KC_DLR,   KC_PERC,  KC_CIRC,  KC_AMPR,  KC_ASTR,  KC_LPRN,  KC_RPRN,   KC_PIPE,   
            KC_LSFT,  KC_F9,    KC_NO,   KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_COMM,  KC_SLASH,  KC_PGUP,
            KC_GRV ,  KC_LCTL,           KC_NO,    KC_NO,              KC_NO,    KC_NO,    KC_HOME,  KC_PGDN,  KC_END,    KC_NO
        );  
        
        
        uint32_t layer2[MATRIX_ROWS][MATRIX_COLS] = KEYMAP(
            KC_GRV,   KC_F1,    KC_F2,   KC_F3,    KC_F4,    KC_F5,   KC_F6,    KC_F7,    KC_F8,    KC_LBRC,  KC_RBRC,   KC_DEL,
            KC_TAB,   KC_F7,    KC_F8,   KC_F9,    KC_F10,   KC_F11,  KC_MINS,  KC_EQL,   KC_LBRC,  KC_RBRC,  KC_SCLN,   KC_QUOTE,   
            KC_LSFT,  KC_F9,    KC_CUT,  KC_COPY,  KC_PASTE, KC_FIND, KC_UNDO,  KC_NO,    KC_NO,    KC_COMM,  KC_SLASH,  KC_ENT,
            KC_GRV ,  KC_LCTL,           KC_NO,    KC_NO,             KC_NO,    KC_NO,    KC_RALT,  KC_RCTL,  LAYER_2,   KC_DOWN
        );
        
        
        uint32_t layer3[MATRIX_ROWS][MATRIX_COLS] = KEYMAP(
            UF2_DFU,            BLEPROFILE_1,        BLEPROFILE_2,        BLEPROFILE_3,       BATTERY_CALC_FILTERED,   KC_5,     KC_6,    KC_7,     KC_8,     KC_9,      KC_0,      KC_BSLS,
            PRINT_BLE,          KC_DISPLAY_BRIGHTD,  KC_DISPLAY_BRIGHTI,  KC_HASH,            KC_NO,                   KC_NO,    KC_NO,   KC_NO,    KC_NO,    KC_NO,     KC_NO,     KC_NO,   
            BATTERY_CALC_TEST,  KC_AUDIO_MUTE,       KC_AUDIO_VOL_DOWN,   KC_AUDIO_VOL_UP ,   OUT_USB,                 OUT_BT,   KC_B,    KC_N,     KC_M,     KC_COMM,   KC_SLASH,  KC_ENT,
            OUT_AUTO,           BATTERY_CALC_DEFAULT,                     KC_LALT,            KC_NO,                             KC_BSPC,  KC_SPC,  KC_RALT,  KC_RCTL,  LAYER_2,   SLEEP_NOW
        );

    uint32_t tap[MATRIX_ROWS][MATRIX_COLS] =  KEYMAP(
        KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
        KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
        KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
        KC_NO,   KC_NO,            KC_NO,   KC_SPC,           KC_SPC,  KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO
    );


    uint32_t hold[MATRIX_ROWS][MATRIX_COLS] =  KEYMAP(
        KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
        KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
        KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
        KC_NO,   KC_NO,            KC_NO,   LAYER_1,          LAYER_2, KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO
    );


    /*
     * add the other layers
     */
    for (int row = 0; row < MATRIX_ROWS; ++row)
    {
        for (int col = 0; col < MATRIX_COLS; ++col)
        {
            //Method::PRESS  Standard keypress
            //Method::MT_TAP  This key is sent once when the key is tapped.
            //Method::MT_HOLD This key is sent once when the key is held.
            //Method::DT_TAP  This key is sent once when the key is tapped.
            //Method::DT_DOUBLETAP This key is sent once when the key is tapped twice.
            matrix[row][col].addActivation(_L0, Method::PRESS, press[row][col]);
            matrix[row][col].addActivation(_L1, Method::PRESS, layer1[row][col]);
            matrix[row][col].addActivation(_L2, Method::PRESS, layer2[row][col]);
            matrix[row][col].addActivation(_L3, Method::PRESS, layer3[row][col]);
            matrix[row][col].addActivation(_L0, Method::MT_TAP, tap[row][col]);
            matrix[row][col].addActivation(_L0, Method::MT_HOLD, hold[row][col]);
        }
    }

}

