#include "diary.h"
#include "getDateTime.h"

#include <iostream>
#include <fstream>

Diary::Diary(const std::string& name) : filename(name)
{
    upload_messages();
}

void Diary::upload_messages() {
    std::ifstream diary(filename);
    if (!diary.is_open()) {
        return;
    }

    std::string text_line;
    std::string date;
    Message m;

    while (!diary.eof()){
        std::getline(diary, text_line);

        if (text_line[0] == '#') {
            date = text_line.substr(2, 10);
        } else if (text_line[0] == '-') {
            m.date.set_from_string(date);
            m.time.set_from_string(text_line.substr(2, 8));
            m.content = text_line.substr(10);
            
            messages.push_back(m);
        }
    }
}

void Diary::add(const std::string& message) {
    Message m;
    m.content = message;
    m.date.set_from_string(get_current_date());
    m.time.set_from_string(get_current_time());

    messages.push_back(m);
}

int Diary::write() {
    std::ofstream diary(filename, std::ios::app);
    if (!diary.is_open()) {
        std::cerr << "You don’t have permission to open this file.\n";
        return 1;
    }

    size_t messages_size = messages.size();

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

std::vector<Message*> Diary::search(std::string what) {
	std::vector<Message*> found_messages;

    for (auto& m : messages) {
        if (m.content.find(what) != std::string::npos) {
            found_messages.push_back(&m);
        }
    }

    return found_messages;
}