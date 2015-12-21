
#include "clock.h"

Clock::Clock() : start(steady_clock::now()), current(start) {}
Clock::~Clock() {}

const steady_clock::time_point Clock::begin() const {
	return this->start;
}

const steady_clock::time_point Clock::now() {
	this->current = steady_clock::now();
	return this->current;
}

const double Clock::elapsed() {
	duration<double> time_span = duration_cast<duration<double>>(steady_clock::now() - this->start);
	return time_span.count();
}

const double Clock::since(Clock &other) const {
	duration<double> time_span = duration_cast<duration<double>>(other.start - this->start);
	return time_span.count();
}

