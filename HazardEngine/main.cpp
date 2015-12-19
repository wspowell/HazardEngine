
#include "init.h"

class Game {
	private:
	Initializer initializer;

	public:
	Game();
	~Game();

	void init();
	void shutdown();

	bool running();
};

Game::Game() {
	// do nothing
}

Game::Game() {
	// do nothing
}

void Game::init() {
	initializer.startupAll();
}

void Game::shutdown() {
	initializer.shutdownAll();
}

bool Game::running() {
	return true;
}

int main(void) {

	Game rpg;

	rpg.init();

	while (rpg.running()) {}
	
	rpg.shutdown();

	return 0;
}