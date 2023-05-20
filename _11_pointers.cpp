//pointers are actually really simple

#include <iostream>

#define LOG(x) std::cout << x << std::endl

int main()
{
	//void* ptr = NULL;  // #define NULL 0, so this code is equal to "ptr = 0";
	// or "ptr = nullptr"
   
	int var = 8;
	//void* ptr = &var;  // &: get address of the variable, *: access to the variable the pointer points to
	//*ptr = 10; // wrong, the compiler donnot know what type the 10 is

	//int* ptr = &var;
	//*ptr = 10;
	//LOG(var);

	char* buffer = new char[8];
	memset(buffer, 0, 8);

	char** ptr = &buffer;  // a pointer pointing to a adress where another address is saved.
	// you should read the adress backward
	// the *ptr access to the value of &buffer, the &buffer value are the address that buffer and *ptr point to.

	delete[] buffer;

	std::cin.get();


}
