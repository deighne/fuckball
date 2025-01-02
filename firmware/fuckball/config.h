/*
Copyright 2020 Richard Sutherland

This program is free software: you can redistribute it and/or modify
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

// #define SPI_DRIVER SPID0
#define PMW33XX_LIFTOFF_DISTANCE 0x00
#define PMW33XX_CS_PIN GP5
#define SPI_SCK_PIN GP2
#define SPI_MISO_PIN GP4
#define SPI_MOSI_PIN GP7
// #define ROTATIONAL_TRANSFORM_ANGLE -180 // Optional: Rotates the trackball
#define POINTING_DEVICE_INVERT_Y // Optional: Inverts trackball X
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET