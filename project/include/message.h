#ifndef MESSAGE_H
#define MESSAGE_H

#include <iostream>
#include <string>
#include "dateandtime.h"

struct Message {
	Date date;
	Time time;
	std::string content;

	void setContent(int argc, char **argv);

	std::string getContent();
};

#endif