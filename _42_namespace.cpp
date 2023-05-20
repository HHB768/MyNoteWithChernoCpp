//// the only reason that namespace exists is to avoid name conflicts
//
//#include <iostream>
//#include <string>
//
//
//namespace apple {
//	namespace function {
//
//		void print(const std::string& text)
//		{
//			std::cout << text << std::endl;
//		}
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
//
//int main()
//{
//	//using apple::function::print;  // good
//	//using namespace apple::function;
//	namespace a = apple::function;
//
//	a::print("hello");
//}