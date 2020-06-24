#ifndef TIME_H
#define TIME_H

#include <string>

struct Time {
	unsigned hour, minute, second;

	void set_from_string(const std::string& time);
};

#endif