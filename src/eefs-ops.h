/* sd2iec - SD/MMC to Commodore serial bus interface/controller
	 Copyright (C) 2007-2017  Ingo Korb <ingo@akana.de>

	 Inspired by MMC2IEC by Lars Pontoppidan et al.

	 FAT filesystem access based on code from ChaN and Jim Brain, see ff.c|h.

	 This program is free software; you can redistribute it and/or modify
	 it under the terms of the GNU General Public License as published by
	 the Free Software Foundation; version 2 of the License only.

	 This program is distributed in the hope that it will be useful,
	 but WITHOUT ANY WARRANTY; without even the implied warranty of
	 MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
	 GNU General Public License for more details.

	 You should have received a copy of the GNU General Public License
	 along with this program; if not, write to the Free Software
	 Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA


	 eefs-ops.h: eepromfs operations

*/

#ifndef EEFS_OPS_H
#define EEFS_OPS_H

#include "wrapops.h"

// number of the partition that eefs took, 255 if none
extern uint8_t eefs_partition;

extern const fileops_t eefs_ops;

void eefsops_init(void);

#endif
