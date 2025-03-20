/* Copyright 2023 Brian Low
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

#define SPLIT_USB_DETECT

#define FORCE_NKRO

#define USB_SUSPEND_WAKEUP_DELAY 200

#define BOTH_SHIFTS_TURNS_ON_CAPS_WORD

/*#define PERMISSIVE_HOLD*/
/*#define HOLD_ON_OTHER_KEY_PRESS*/
#define TAPPING_TERM 200

// Allow transitioning quickly from tap to hold
#define QUICK_TAP_TERM 0
