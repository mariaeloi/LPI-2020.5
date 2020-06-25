#include "../include/app.h"
#include <iostream>

int main(int argc, char const *argv[])
{
	App test("test.txt");

	std::string message;
	for (int i = 0; i < 3; ++i)
	{
		test.add();
	}

	std::cout << "\n";

	for (int i = 0; i < 3; ++i)
	{
		std::cout << "Date: " << test.diary.messages[i].date.to_string() << "\n"
		          << "- " << test.diary.messages[i].time.to_string() << " "
		          << test.diary.messages[i].content << std::endl;
	}
	
	return 0;
}