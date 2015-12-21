
#pragma once

#include <vector>
#include "../core/types.h"

class EntityManager {
	private:
	uuid nextEntityId;

	public:
	EntityManager();
	~EntityManager();

	uuid createEntity();

};
