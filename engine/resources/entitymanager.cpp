
#include "entitymanager.h"

EntityManager::EntityManager() : nextEntityId(0) {}

EntityManager::~EntityManager() {
	// do nothing
}

uuid EntityManager::createEntity() {
	return ++nextEntityId;
}