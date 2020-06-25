#ifndef DIARY_H
#define DIARY_H

#include "message.h"
#include <string>

struct Diary {
	Diary(const std::string& name);
	~Diary();

	std::string filename;
	Message* messages;
	size_t messages_size;
	size_t messages_capacity;

	void add(const std::string& message);
	void write();
};

#endif