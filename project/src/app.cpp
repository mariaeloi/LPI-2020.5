#include "app.h"

#include <iostream>
#include <string>

App::App(const std::string& filename) : diary(filename)
{
}

int App::run(int argc, char* argv[]) {
    if (argc == 1) {
        return show_usage(argv);
    }

    std::string action = argv[1];

    if (action == "add") {
        if (argc == 2) {
            return add();
        } else {
            return add(argv[2]);
        }
    } else if (action == "list") {
        list_messages();
    } else {
        return show_usage(argv);
    }

    return 0;
}

int App::add() {
    std::string message;
    std::cout << "Enter your message:" << std::endl;
    std::getline(std::cin, message);

    return add(message);
}

int App::add(const std::string message) {
    diary.add(message);
    return diary.write();
}

void App::list_messages() {
    for (size_t i = 0; i < diary.messages_size; ++i) {
        const Message& message = diary.messages[i];
        std::cout << "-" << message.content << std::endl;
    }
}

int App::show_usage(char *argv[]) {
    std::cout << "Use:   " << argv[0] << " add <message>\n"
              << "       " << argv[0] << " list\n";
    return 1;
}