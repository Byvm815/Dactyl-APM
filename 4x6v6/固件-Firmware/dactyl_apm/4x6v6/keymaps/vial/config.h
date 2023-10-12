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

#define VIAL_KEYBOARD_UID {0x60, 0x5E, 0x86, 0x52, 0x42, 0x4A, 0x4F, 0x06}

// [3,4] [9,1]
// I think it's not usefull for uf2boot, when you jump to usb flash, you can always flash although vial security is lock
#define VIAL_UNLOCK_COMBO_ROWS {3, 9}
#define VIAL_UNLOCK_COMBO_COLS {4, 1}

#define MASTER_LEFT
//#define EE_HANDS

//#define SPLIT_USB_DETECT
#define SPLIT_USB_TIMEOUT 5000
