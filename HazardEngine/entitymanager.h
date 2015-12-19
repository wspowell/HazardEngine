
#pragma once

#include <vector>;
#include "types.h"

class EntityManager {
	private:
	uuid nextEntityId;

	public:
	EntityManager();
	~EntityManager();

	uuid createEntity();

};