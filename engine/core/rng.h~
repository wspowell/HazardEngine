// Random number generator


#pragma once

#include <random>

namespace rng {
	typedef std::mt19937 MyRNG;  // the Mersenne Twister with a popular choice of parameters
	uint32_t SEED;
	MyRNG RNG;

	std::random_device true_random;

	//std::normal_distribution<double> normal_dist(mean, stdDeviation);
	std::uniform_int_distribution<uint32_t> d20_roll(1, 20);

	inline void seed(uint32_t newSeed) {
		SEED = newSeed;
		RNG.seed(SEED);
	}

	// Returns a random dice roll between 1 and 20, deterministic
	inline unsigned int d20() {
		return d20_roll(RNG);
	}

	// Returns a random dice roll between 1 and 20, non-deterministic
	inline unsigned int rd20() {
		return d20_roll(true_random);
	}

	// Returns a random number, non-deterministic
	inline unsigned int random() {		
		return true_random();
	}
}
