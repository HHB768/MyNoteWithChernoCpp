#include <iostream>
#include "log.h"


int main()
{
	int x = 5;
	bool comparison_result = x == 5;
	if (comparison_result)  
	{
		logr("hello world");
	}

	// null is also 0 (false)
	//const char* ptr = "hello";
	const char* ptr = nullptr;
	if (ptr)
		logr(ptr);
	else if (ptr == "hello")
		logr("Ptr is hello");
	else
		logr("Ptr is null");

	std::cin.get();

}
