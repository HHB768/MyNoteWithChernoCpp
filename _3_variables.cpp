// primitive data types matter when we computing their occupied memory
#include <iostream>

//int variable; // -2b ~ 2b
unsigned int variable;

short a = 'A';
char b = 65;


//int num = 0.5F;  // an integer
bool var = false; // 1 byte because the address is found by bytes

void main()
{
   std::cout << a << std::endl;  // you can see that data is just number and its type actually make no sense in memory
                                 // but when we write a function, we are expecting a type of variable.
   std::cout << b << std::endl;
   std::cout << num << std::endl;
   std::cout << var << std::endl; // numner
   std::cout << sizeof(var) << std::endl;
   std::cout << sizeof(bool) << std::endl;
}
