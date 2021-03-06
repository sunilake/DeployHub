/*
 *  DeployHub is an Agile Application Release Automation Solution
 *  Copyright (C) 2017 Catalyst Systems Corporation DBA OpenMake Software
 *
 *  This program is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU Affero General Public License as
 *  published by the Free Software Foundation, either version 3 of the
 *  License, or (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU Affero General Public License for more details.
 *
 *  You should have received a copy of the GNU Affero General Public License
 *  along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
#ifndef __engineconfig_h

#define __engineconfig_h

#include "dmapiexport.h"

class DMAPI_API EngineConfig
{
private:
	class StringHashtable *m_entries;
	int m_threadLimit;

public:
	EngineConfig();
	~EngineConfig();

	const char *get(const char *name);
	void put(const char *name, const char *value);

	int getThreadLimit();
};

#endif /*__engineconfig_h*/
