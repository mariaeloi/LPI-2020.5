#ifndef DATE_H
#define DATE_H

#include <string>

struct Date {
	unsigned day, month, year;

	Date();

	void set_from_string(const std::string& date);
	std::string to_string();
};

#endif