// Defines a profiler to be used in the engine

#pragma once

#include <map>
#include "clock.h"

struct time_profile {
	double msec_total;
	unsigned int number_of_calls;
	double longesttime_msec;
	double fastesttime_msec;
};

class Profile {
	private:
	std::map<const char*, struct time_profile*> profile;
	
	public:
	Profile();
	~Profile();
	struct time_profile* getData(const char* label);
	void addNode(const char* label, struct time_profile *node_data);
};

class Node {
	private:
	const char* label;
	Clock clock;

	void stop();
	void updateNode();

	public:
	Node(const char* label);
	~Node();	
};


#define PROFILE(label) Node node(label);


