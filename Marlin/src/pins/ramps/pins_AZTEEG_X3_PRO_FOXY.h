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

#include "pins_AZTEEG_X3_PRO.h"

#undef BOARD_INFO_NAME
#define BOARD_INFO_NAME "Azteeg X3 Pro Foxy Edition 2.0"

//
// disable digipots, we don't use them
//
#undef DIGIPOT_I2C_ADDRESS_A
#undef DIGIPOT_I2C_ADDRESS_B

//
// override probe pin
//
#undef SERVO0_PIN
#define SERVO0_PIN                            57

//
// override limit switches
//
#undef Y_STOP_PIN
#undef Z_STOP_PIN
#define Y_STOP_PIN                             2
#define Z_STOP_PIN                             7

//
// override fan pin to otherwise unused HE8
//
#undef FAN_PIN
#define FAN_PIN                               11

//
// set filament runout sensor pin
//
#undef FIL_RUNOUT_PIN
#define FIL_RUNOUT_PIN                        22

//
// free up these pins
//
#undef STAT_LED_RED_PIN
#undef STAT_LED_BLUE_PIN

//
// override auto fan, use a non-pwm output
//
#undef AUTO_FAN_PIN
#undef E0_AUTO_FAN_PIN
#define AUTO_FAN_PIN                          17
#define E0_AUTO_FAN_PIN             AUTO_FAN_PIN

//
// communicate with drivers via UART
//
#if HAS_TMC_UART
    /**
     * TMC2208/TMC2209 stepper drivers
     *
     * Hardware serial communication ports.
     * If undefined software serial is used according to the pins below
     */
    #define X_HARDWARE_SERIAL Serial1
    #define Y_HARDWARE_SERIAL Serial1
    #define Z_HARDWARE_SERIAL Serial1
    #define E0_HARDWARE_SERIAL Serial1
#endif

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

