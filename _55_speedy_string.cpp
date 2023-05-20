//#include <iostream>
//#include <string>
//
//static uint32_t s_allocCount = 0;
//
//void* operator new(size_t size)
//{
//	s_allocCount++;
//	std::cout << "Allocating " << size << " bytes\n";
//	return malloc(size);
//}
//
//
//void printName(const std::string& name)
//{
//	std::cout << name << std::endl;
//}
//
//void printName(std::string_view name)
//{
//	std::cout << name << std::endl;
//}
//
//
//int main()
//{
//	// you really need a std::string?
//	std::string name = "Yan Chernikov";  // if you run in release mode, after short string optimization (SSO), there is still no heap allocation
//	//const char* name = "Yan Chernikov";
//
//	// you really need these strings?
//	/*std::string first = name.substr(0, 3);
//	std::string last = name.substr(4, 9);*/
//
//	std::string_view first(name.c_str(), 3);
//	std::string_view last(name.c_str() + 4, 9);
//
//	//std::string_view first(name, 3);
//	//std::string_view last(name + 4, 9);
//
//	printName(first);
//	printName(last);
//	std::cout << s_allocCount << " allocation(s)" << std::endl;
//
//	std::cin.get();
//}