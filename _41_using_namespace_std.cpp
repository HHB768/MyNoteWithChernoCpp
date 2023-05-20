//// u should alaways use a prefix
//
//// style
//// Camel Pasca Snake_case
//// you can use namespace in some scope {}, but never use it in header file
//
//#include <iostream>
//#include <string>
//
//
//namespace apple {
//
//	void print(const std::string& text)
//	{
//		std::cout << text << std::endl;
//	}
//}
//
//
//namespace orange {
//
//	void print(const char* text)
//	{
//		std::string temp = text;
//		std::reverse(temp.begin(), temp.end());
//		std::cout << temp << std::endl;
//	}
//}
//
//using namespace apple;
////using namespace orange;  // if you comment this line, the implicit trnasfer from const char* to std::string will happen
//// with orange, its print function can better fit the calling, so the reverse string is print
//
//int main()
//{
//	print("hello");
//}