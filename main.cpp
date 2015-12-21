
#include "engine/engine.h"

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

Game::~Game() {
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
	PROFILE("MAIN");

	Clock clock;

	rng::seed(0);
	logger::print("%d %d\n", rng::random(), rng::random());
	logger::print("%d %d\n", rng::d20(), rng::d20());
	logger::print("%d %d\n", rng::rd20(), rng::rd20());

	logger::debug("test debug");

	for(int i = 0; i < 1000000000; ++i) {}

	logger::error("test error");

	Game rpg;

	rpg.init();

	//while (rpg.running()) {}
	
	rpg.shutdown();

	return 0;
}
