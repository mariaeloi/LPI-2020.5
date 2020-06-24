#include "../include/diary.h"
#include <iostream> 

Diary::Diary(const std::string& name) : filename(name), messages_capacity(10), messages_size(0), messages(nullptr)
{
	messages = new Message[messages_capacity];
}

void Diary::add(const std::string& message) {
	if (messages_size < messages_capacity) {
		messages[messages_size].content = message;
		++messages_size;
	} else {
		std::cout << "full diary\n";
	}
}

void Diary::write() {
    // gravar as mensagens no disco
}