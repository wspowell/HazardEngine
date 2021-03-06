// Defines real time clock and game clock

#pragma once

#include <chrono>

using namespace std::chrono;

class Clock {
	private:
	steady_clock::time_point start;
	steady_clock::time_point current;

	public:
	Clock();
	~Clock();

	const steady_clock::time_point begin() const;
	const steady_clock::time_point now();

	const double elapsed();
	const double since(Clock &other) const;
};

static Clock CLOCK;

