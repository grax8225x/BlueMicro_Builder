/*
Copyright 2018 <Pierre Constantineau>

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
        KC_Q,    KC_W,    KC_E,   KC_R,
        KC_A,    KC_S,    KC_D,   KC_F,
        KC_Z,    KC_X,    KC_C,   KC_V,
        KC_Z,    KC_X,    KC_C,   KC_V
));

 
void setupKeymap() {

    uint32_t layer1[MATRIX_ROWS][MATRIX_COLS] =
        KEYMAP(
        KC_Q,    KC_W,    KC_E,   KC_R,
        KC_A,    KC_S,    KC_D,   KC_F,
        KC_Z,    KC_X,    KC_C,   KC_V,
        KC_Z,    KC_X,    KC_C,   KC_V
    );

    uint32_t layer2[MATRIX_ROWS][MATRIX_COLS] =
        KEYMAP(
        KC_Q,    KC_W,    KC_E,   KC_R,
        KC_A,    KC_S,    KC_D,   KC_F,
        KC_Z,    KC_X,    KC_C,   KC_V,
        KC_Z,    KC_X,    KC_C,   KC_V
    );

    /*
     * add the other layers
     */
    ADDLAYER(_L1, Method::PRESS , layer1);
    ADDLAYER(_L2, Method::PRESS , layer2);

}


