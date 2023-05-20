#include <iostream>
//#include <string>  // old version may need this to overload the << operator

//void printString(const std::string& string)  // use a reference instead of copying a new string (costing much time)
//{
//	std::cout << string << std::endl;
//}
//int main()
//{
//	//// Lesson I
//	//const char* name = "Cherno";
//	//std::cout << name << std::endl;
//	//std::cout << strlen(name) << std::endl;
//
//	//char name2[6] = { 'C', 'h', 'e', 'r', 'n', 'o' };
//	//std::cout << name2 << std::endl;
//
//	//char name3[7] = { 'C', 'h', 'e', 'r', 'n', 'o', '\0'};  // or just set the last element to 0, the null's ascii
//	//std::cout << name3 << std::endl;
//
//	//std::string name4 = "Cherno";
//	//std::cout << name4 << std::endl;
//	//std::cout << name4.size() << std::endl;
//
//	//// cannot do this: name = "Hello" + " Chernno"
//	//// because they are const char arrays or pointers, not true string (it is, just, e... string literal)
//	//// you can:
//	//name4 += " hello!";
//	//std::cout << name4.find("no") << std::endl << std::endl;
//
//	// Lesson II
//	const char name[8] = "Che\0rno";  // count it carefully, there is an implicit \0 at the end
//	std::cout << strlen(name) << std::endl;  // 3, because it regard '\0' as the end
//
//	// the literals are stored in the read-only section of memory, you can not modify them
//	// you can use array if necessary
//	char name2[] = u8"Cherno";  // u8 can be ignored (utf-8)
//	name2[2] = 'a';
//	std::cout << name2 << std::endl;
//
//	const wchar_t* name3 = L"Cherno";  // wide
//	const char16_t* name4 = u"Cherno";  // utf-16
//	const char32_t* name5 = U"Cherno";  // utf-32
//
//	std::cout << name3 << std::endl;
//
//	// new features in C++14
//	using namespace std::string_literals;
//
//	std::u32string name0 = U"Cherno"s + U" hello"; // "s" is actually a operator function that return standard string objects
//		// ignore the escape character
//	const char* example = R"(Line1
//							 Line2)";   // () is part of R"()", which also means you cannot use () in your text
//	// eq2
//	const char* example2 = "Line1\n"
//		                   "Line2\n";
//
//	std::string name0 = "Cherno"s + " hello";
//
//	std::cin.get();
//}