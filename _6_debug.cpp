breakpoints
reading memory

#include "log.h"
#include <iostream>

void initlog()
{
	logr("initializing log");
	std::cin.get();

}

int main()
{
	int a = 8;
	a++;  // break points lower your game 5 fps on average
	const char* string = "hello";
	for (int i = 0; i < 5; i++)
	{
		const char c = string[i];
		std::cout << c << std::endl;
	}
	initlog();
}
