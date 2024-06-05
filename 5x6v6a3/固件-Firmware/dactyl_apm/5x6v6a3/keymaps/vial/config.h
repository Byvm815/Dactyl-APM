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

#define HAL_USE_SERIAL TRUE

#define VIAL_KEYBOARD_UID {0xD4, 0xA1, 0x7A, 0xAD, 0x11, 0x14, 0x89, 0x2D}

// [4,4] [11,2]
#define VIAL_UNLOCK_COMBO_ROWS {4, 11}
#define VIAL_UNLOCK_COMBO_COLS {4, 2}

//#define MASTER_LEFT
#define EE_HANDS
//#define SPLIT_USB_DETECT

#define SPLIT_USB_TIMEOUT 5000
