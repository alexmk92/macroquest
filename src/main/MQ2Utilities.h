/*
 * MacroQuest2: The extension platform for EverQuest
 * Copyright (C) 2002-2019 MacroQuest Authors
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License, version 2, as published by
 * the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 */

#pragma once

#include "MQ2Internal.h"

// Types and functions from MQ2Utilities.h that are *not* exported publically.


namespace mq {

struct MercDesc
{
	std::string Race;
	std::string Type;
	std::string Confidence;
	std::string Proficiency;
};

std::vector<MercDesc> GetAllMercDesc();

} // namespace mq