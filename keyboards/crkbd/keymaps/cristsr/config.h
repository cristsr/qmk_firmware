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

//#define USE_MATRIX_I2C

/* Select hand configuration */

#define MASTER_LEFT
// #define MASTER_RIGHT
// #define EE_HANDS

//#define QUICK_TAP_TERM 0
//#define TAPPING_TERM 100

// RGB Matrix Configuration
#ifdef RGB_MATRIX_ENABLE
    // Brightness and step configuration
    #undef RGB_MATRIX_MAXIMUM_BRIGHTNESS
    #define RGB_MATRIX_MAXIMUM_BRIGHTNESS 150
    #define RGB_MATRIX_HUE_STEP 8
    #define RGB_MATRIX_SAT_STEP 8
    #define RGB_MATRIX_VAL_STEP 8
    #define RGB_MATRIX_SPD_STEP 10

    // Enable specific effects - Reactive effects (respond to keypresses)
    #define ENABLE_RGB_MATRIX_SOLID_REACTIVE_SIMPLE   // Pulses keys on press
    #define ENABLE_RGB_MATRIX_SOLID_REACTIVE          // Static color reacts to keypresses
    #define ENABLE_RGB_MATRIX_SOLID_REACTIVE_WIDE     // Wider reactive effect
    #define ENABLE_RGB_MATRIX_SOLID_REACTIVE_MULTIWIDE // Even wider reactive
    #define ENABLE_RGB_MATRIX_SOLID_REACTIVE_CROSS    // Cross-shaped reactive effect
    #define ENABLE_RGB_MATRIX_SOLID_REACTIVE_MULTICROSS // Multiple crosses
    #define ENABLE_RGB_MATRIX_SOLID_REACTIVE_NEXUS    // Circular wave effect (THIS IS THE ONE!)
    #define ENABLE_RGB_MATRIX_SOLID_REACTIVE_MULTINEXUS // Multiple circular waves
    #define ENABLE_RGB_MATRIX_SPLASH                  // Color splash on keypress
    #define ENABLE_RGB_MATRIX_MULTISPLASH            // Multiple color splashes
    #define ENABLE_RGB_MATRIX_SOLID_SPLASH           // Single color splash
    #define ENABLE_RGB_MATRIX_SOLID_MULTISPLASH      // Multiple solid splashes

    // Some nice non-reactive effects
    #define ENABLE_RGB_MATRIX_BREATHING              // Breathing animation
    #define ENABLE_RGB_MATRIX_BAND_SPIRAL_VAL        // Spiral bands
    #define ENABLE_RGB_MATRIX_CYCLE_LEFT_RIGHT       // Rainbow left to right
    #define ENABLE_RGB_MATRIX_CYCLE_UP_DOWN          // Rainbow up to down
    #define ENABLE_RGB_MATRIX_RAINBOW_MOVING_CHEVRON // Rainbow chevron
    #define ENABLE_RGB_MATRIX_CYCLE_PINWHEEL         // Pinwheel effect
    #define ENABLE_RGB_MATRIX_TYPING_HEATMAP         // Heatmap based on typing
    #define ENABLE_RGB_MATRIX_DIGITAL_RAIN           // Matrix-style rain
#endif

#define TAPPING_TERM 175
