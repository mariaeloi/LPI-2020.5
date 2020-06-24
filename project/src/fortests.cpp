#include "../include/app.h"
#include <iostream>

int main(int argc, char const *argv[])
{
	App test("test.txt");

	//
	std::string message;
	for (int i = 0; i < 11; ++i)
	{
		test.add();
	}
	for (int i = 0; i < 10; ++i)
	{
		std::cout << test.diary.messages[i].content << std::endl;
	}
	
	return 0;
}