// Defines file I/O operations 


#pragma once

#include <fstream>
#include <string>

std::string readFile(const char* filename) {
	std::ifstream file(filename);
	std::string line;
	std::string fileContents;
	while (std::getline(file, line)) {
		fileContents += line;
		fileContents.push_back('\n');
	}
	return fileContents;
}



