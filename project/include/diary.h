#ifndef DIARY_H
#define DIARY_H

#include "message.h"
#include <string>
#include <vector>

struct Diary {
	Diary(const std::string& name);

	std::string filename;
	std::vector<Message> messages;

	void upload_messages();
	void add(const std::string& message);
	int write();
	std::vector<Message*> search(std::string what);
};

#endif