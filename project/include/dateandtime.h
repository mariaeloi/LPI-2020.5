#ifndef DATEANDTIME_H
#define DATEANDTIME_H

struct Date {
	int day, month, year;

	std::string get_current_date();
};

struct Time {
	int hour, minute, second;

	std::string get_current_time();
};

//std::string format_current_date(const std::string &format);

#endif