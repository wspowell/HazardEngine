// Defines debugging and logging


#pragma once

#include <cstdio>
#include <stdarg.h>
#include "clock.h"

namespace logger {
	const char* LOG_FORMAT = "%ld [%s] - %s\n";
	const char* DEBUG_STR = "Debug";
	const char* ERROR_STR = "Error";

	inline void debug(const char* message) {
		printf(LOG_FORMAT, CLOCK.now(), DEBUG_STR, message);
	}

	inline void print(const char* format, ...) {
		va_list args;
		va_start(args, format);
		vprintf(format, args);
		va_end(args);
	}

	inline void error(const char* message) {
		printf(LOG_FORMAT, CLOCK.now(), ERROR_STR, message);
	}
}

