#include <iostream>
#include <string>


//static int level = 1;
//static int speed = 2;

//int main()
//{
//	if (level > 5)
//		speed = 10;
//	else
//		speed = 5;
//
//	speed = level > 5 ? 10 : 5;
//
//	std::string rank = level > 10 ? "Master" : "Beginner";
//	// better performance, because you don't have to define a variable and then decide which value should be assigned to it
//    // code look cleaner, a little bit faseter
//
//	// you can even do this:
//	speed = level > 5 ? level > 10 ? 15 : 10 : 5;
//	// but it is too complicated and not recommended
//
//	std::cin.get();
//}