/* Copyright 2020 BINEPAD
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

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID       0x4249 // Binepad
#define PRODUCT_ID      0x4212
#define DEVICE_VER      0x0001
#define MANUFACTURER    Binepad
#define PRODUCT         BNR1


/* Key matrix size */
#define MATRIX_ROWS 1
#define MATRIX_COLS 1

#define MATRIX_ROW_PINS { E6 }
#define MATRIX_COL_PINS { B0 }
#define UNUSED_PINS

#define ENCODER_RESOLUTION 2

/* COL2ROW, ROW2COL*/
#define DIODE_DIRECTION COL2ROW

#define ENCODERS_PAD_A { D6 }
#define ENCODERS_PAD_B { D7 }

/* Debounce reduces chatter (unintended double-presses) - set 0 if debouncing is not needed */
#define DEBOUNCE 5
