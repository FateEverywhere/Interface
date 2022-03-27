/*
©2021 Everywhere Defense Industries / Fate Everywhere <fate@7storm.org>
 
This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#pragma once

#include "quantum.h"

#define ____ KC_NO

#define LAYOUT_sweetbiz( \
  K001,                       K005, K006, K007, K008, K009, K010, K011, K012, K013, K014, K015, K016,        K018,               K021,       K023, \
                              K105, K106, K107, K108, K109, K110, K111, K112, K113, K114, K115, K116,  K117, K118, K119,                           \
	K201, K202,     K203, K204, K205, K206, K207, K208, K209, K210, K211, K212, K213, K214, K215, K216,  K217, K218, K219,   K220, K221, K222, K223, \
	K301, K302,     K303, K304, K305, K306, K307, K308, K309, K310, K311, K312, K313, K314, K315, K316,  K317, K318, K319,   K320, K321, K322, K323, \
	K401, K402,     K403, K404, K405, K406, K407, K408, K409, K410, K411, K412, K413, K414, K415,                            K420, K421, K422,       \
	K501, K502,     K503, K504, K505, K506, K507, K508, K509, K510, K511, K512, K513, K514,                     K518,        K520, K521, K522,       \
	K601, K602,     K603, K604, K605,                   K609,             K612, K613, K614,       K616,   K617, K618, K619,  K620,       K622, K623  \
) \
{ \
	{ K001, ____,   ____, ____, K005, K006, K007, K008, K009, K010, K011, K012, K013, K014, K015, K016,   ____, K018, ____,   ____, K021, ____, K023 }, \
 	{ ____, ____,   ____, ____, K105, K106, K107, K108, K109, K110, K111, K112, K113, K114, K115, K116,   K117, K118, K119,                          }, \
	{ K201, K202,   K203, K204, K205, K206, K207, K208, K209, K210, K211, K212, K213, K214, K215, K216,   K217, K218, K219,   K220, K221, K222, K223 }, \
	{ K301, K302,   K303, K304, K305, K306, K307, K308, K309, K310, K311, K312, K313, K314, K315, K316,   K317, K318, K319,   K320, K321, K322, K323 }, \
	{ K401, K402,   K403, K404, K405, K406, K407, K408, K409, K410, K411, K412, K413, K414, K415, ____,   ____, ____, ____,   K420, K421, K422, ____ }, \
	{ K501, K502,   K503, K504, K505, K506, K507, K508, K509, K510, K511, K512, K513, K514, ____, ____,   ____, K518, ____,   K520, K521, K522, ____ }, \
	{ K601, K602,   K603, K604, K605, ____, ____, ____, K609, ____, ____, K612, K613, K614, ____, K616,   K617, K618, K619,   K620, ____, K622, K623 }  \
}
