// Handles startup and shutdown of all subsystems

#pragma once

#include "../resources/resourcemanager.h"

class Initializer {
	private:
	ResourceManager resourceManager;

	public:
	Initializer();
	~Initializer();

	void startupAll();
	void shutdownAll();
};

