#ifndef MESSAGE_H
#define MESSAGE_H

#include "date.h"
#include "Time.h"

struct Message {
	Date date;
	Time time;
	std::string content;
};

#endif
