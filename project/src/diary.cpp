#include "diary.h"
#include "getDateTime.h"

#include <iostream>
#include <fstream>

Diary::Diary(const std::string& name) : filename(name), messages(nullptr), messages_size(0), messages_capacity(10)
{
	messages = new Message[messages_capacity];
    upload_messages();
}

Diary::~Diary()
{
    delete[] messages;
}

void Diary::upload_messages() {
    std::ifstream diary(filename);
    if (!diary.is_open()) {
        return;
    }

    std::string text_line;
    std::string date;

    while (!diary.eof()){
        std::getline(diary, text_line);

        if (text_line[0] == '#') {
            date = text_line.substr(2, 10);
        } else if (text_line[0] == '-') {
            messages[messages_size].date.set_from_string(date);
            messages[messages_size].time.set_from_string(text_line.substr(2, 8));
            messages[messages_size].content = text_line.substr(10);
            
            messages_size++;
            if (messages_size >= messages_capacity) {
                increase_messages();
            }
        }
    }
}

void Diary::increase_messages() {
    messages_capacity *= 2;
    Message* new_array = new Message[messages_capacity];

    for (size_t i = 0; i < messages_size; ++i) {
        new_array[i] = messages[i];
    }

    delete[] messages; 
    messages = new_array;
}

void Diary::add(const std::string& message) {
	if (messages_size >= messages_capacity) {
        increase_messages();
    }

    Message m;
    m.content = message;
    m.date.set_from_string(get_current_date());
    m.time.set_from_string(get_current_time());

    messages[messages_size] = m;
    messages_size++;
}

int Diary::write() {
    std::ofstream diary(filename, std::ios::app);
    if (!diary.is_open()) {
        std::cerr << "You don’t have permission to open this file.\n";
        return 1;
    }

    std::string date = messages[messages_size-1].date.to_string();
    std::string time = messages[messages_size-1].time.to_string();
    
    if (messages_size == 1) {
        diary << "# " << date << "\n\n";
    } else if (!(date == messages[messages_size-2].date.to_string())) {
        diary << "\n# " << date << "\n\n";
    }

    diary << "- " << time << " " << messages[messages_size-1].content << std::endl;
    std::cout << "Message successfully added.\n";
    return 0;
}

Message* Diary::search(std::string what) {
    for (size_t i = 0; i < messages_size; ++i) {
        if (messages[i].content.find(what) != std::string::npos) {
            return &messages[i];
        }
    }

    return nullptr;
}