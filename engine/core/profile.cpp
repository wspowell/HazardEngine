
#include "profile.h"

Profile __profile;

Profile::Profile() { }

Profile::~Profile() { 
	for(auto itor = profile.begin(); itor != profile.end(); ++itor) {
		printf("%s:\n", itor->first);
		printf("\tNumber of calls: %u\n", itor->second->number_of_calls);
		printf("\tAverage time : %lfs\n", itor->second->msec_total / (*itor).second->number_of_calls);
		printf("\tLongest time : %lfs\n", itor->second->longesttime_msec);
		printf("\tFastest time : %lfs\n", itor->second->fastesttime_msec);
		printf("\tTotal time : %lfs\n", itor->second->msec_total);
		delete((*itor).second);
	}
}

struct time_profile* Profile::getData(const char* label) {
	auto pos = profile.find(label);
	if(pos != profile.end()) {
		return pos->second;
	}
	return nullptr; // not found
}

void Profile::addNode(const char* label, struct time_profile *node_data) {
	profile.insert(std::map<const char*, struct time_profile*>::value_type(label,node_data));
}

Node::Node(const char* label) : label(label), clock(Clock()) {}

Node::~Node() {
	stop();
}

void Node::stop() {
	updateNode();
}

void Node::updateNode() {
	double timelapse = clock.elapsed();
	struct time_profile *node_data = __profile.getData(label);
	//double timelapse = ((double) std::chrono::duration_cast<std::chrono::nanoseconds>(end - begin).count()) / 1000000;
	if(node_data == nullptr) {
		node_data = new struct time_profile;
		node_data->msec_total = timelapse;
		node_data->number_of_calls = 1;
		node_data->longesttime_msec = timelapse;
		node_data->fastesttime_msec = timelapse;
		__profile.addNode(label, node_data);
	} else {
		node_data->number_of_calls = node_data->number_of_calls + 1;
		node_data->msec_total += timelapse;
		if (timelapse >= node_data->longesttime_msec) {
			node_data->longesttime_msec = timelapse;
		}
		if (timelapse <= node_data->fastesttime_msec) {
			node_data->fastesttime_msec = timelapse;
		}
	}
}




