// Manages all resources used by the engine

#pragma once

#include "entitymanager.h"

class ResourceManager {
	private:
	EntityManager entityManager;
	
	public:
	ResourceManager();
	~ResourceManager();

	void init();
	void destroy();
};