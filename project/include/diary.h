#ifndef DIARY_H
#define DIARY_H

#include <fstream>
#include "message.h"

struct Diary {
	std::fstream file;
	Message message;
	int number_lines=0;

	bool check_command(int argc, char **argv);

	bool setFile();

	void listCommand();

	void addCommand();

	bool existing_date();
};

#endif