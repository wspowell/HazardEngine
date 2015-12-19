// Handles startup and shutdown of all subsystems

#pragma once

#include "resourcemanager.h"

class Initializer {
	private:
	ResourceManager resourceManager;

	public:
	Initializer();
	~Initializer();

	void startupAll();
	void shutdownAll();
};

