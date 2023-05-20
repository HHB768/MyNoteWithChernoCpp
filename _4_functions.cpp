#include <iostream>

int multiply1(int a, int b)
{ 
	return a * b;
}


void multiandlog(int a, int b)
{ 
	std::cout << multiply1(a, b) << std::endl;
}

int main()
{
	//std::cout << multiply1(2, 3) << std::endl;
	//std::cout << multiply1(5, 8) << std::endl;
	//std::cout << multiply1(10, 15) << std::endl;
	// too risky
	multiandlog(2, 3);
	multiandlog(5, 8);
	multiandlog(10, 15);
}
