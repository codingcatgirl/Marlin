/**
 * Marlin 3D Printer Firmware
 * Copyright (c) 2020 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
 *
 * Based on Sprinter and grbl.
 * Copyright (c) 2011 Camiel Gubbels / Erik van der Zalm
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <https://www.gnu.org/licenses/>.
 *
 */
#pragma once

/**
 * AZTEEG_X3_PRO (Arduino Mega) Foxy Edition pin reassignments
 */

#define BOARD_INFO_NAME "Azteeg X3 Pro Foxy Edition"

#include "pins_AZTEEG_X3_PRO.h"

//
// override probe pin
//
#undef SERVO0_PIN
#define SERVO0_PIN                            63

// 
// use heater 2 slot instead of heater 1 slot
//
#undef HEATER_0_PIN
#define HEATER_0_PIN                          HEATER_1_PIN

//
// free up these pins
//
#undef STAT_LED_RED_PIN
#undef STAT_LED_BLUE_PIN

//
// LCD / Controller
//
#undef BEEPER_PIN
#undef LCD_PINS_RS
#undef LCD_PINS_ENABLE
#undef LCD_PINS_D4
#undef LCD_PINS_D5
#undef LCD_PINS_D6
#undef LCD_PINS_D7
#undef BTN_EN1
#undef BTN_EN2
#undef BTN_ENC
#undef KILL_PIN
#define BEEPER_PIN                            45
#define LCD_PINS_RS                           47
#define LCD_PINS_ENABLE                       12
#define LCD_PINS_D4                           39
#define BTN_EN1                               32
#define BTN_EN2                               31
#define BTN_ENC                               35
#define KILL_PIN                              44

