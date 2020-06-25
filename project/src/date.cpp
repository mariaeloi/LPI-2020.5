#include "../include/date.h"

#include <sstream>
#include <iostream>

Date::Date() : day(0), month(0), year(0)
{
}

void Date::set_from_string(const std::string& date) {
	std::stringstream stream(date);
    char discard;

    stream >> day;
    stream >> discard;
    stream >> month;
    stream >> discard;
    stream >> year;
}

std::string Date::to_string() {
	std::stringstream stream;

	if(day < 9){
		stream << '0';
	}
    stream << day;

    stream << '/';

    if(month < 9){
		stream << '0';
	}
    stream << month;
    
    stream << '/';
    stream << year;

    return stream.str();
}