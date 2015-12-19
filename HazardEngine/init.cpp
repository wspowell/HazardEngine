

#include "init.h"

Initializer::Initializer() {
	// do nothing
}
Initializer::~Initializer() {
	// do nothing
}

void Initializer::startupAll() {
	// all subsystems start here
	resourceManager.init();
}

void Initializer::shutdownAll() {
	// all subsystems shutdown here
	resourceManager.destroy();
}

