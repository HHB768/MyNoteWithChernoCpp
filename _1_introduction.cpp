//#include <iostream>
//// copy the <iostream> in this file
//void logr(const char* message);  // no problem will happen
//
//void logr(const char* message)
//{
//	std::cout << message << std::endl;
//}
//
//
//int main()
//{
//	std::cout << "Hello World!\n" << std::endl;
//	// actually operator << is a kind of function£¬equivalent to cout.print(string).print(std::endl);
//	logr("niganma-aiyo");
//	std::cin.get();
//	int i = 3;
//	i = i++;  // i++ return 3 (main effect)  i = 3+1 = 4 (side effect) i = 3 left oprand is after right side
//	std::cout << i << std::endl;
//	return 0;
//}
//
//// cpps are compiled into objs, which will be linked by linker into an exe;
