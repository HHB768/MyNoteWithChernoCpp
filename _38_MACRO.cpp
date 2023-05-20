#include <iostream>
#include <string>

// automatically remove log message when releasing

//#ifdef PR_DEBUG  // in properties - preprocessor define this
// you can also can set DEBUG=1 (it will override definition here?)
//constexpr auto DEBUG = 1;
//
//#if 0  // ºÙºÙ
//
//#if defined(PR_DEBUG)
//#define LOG(x) std::cout << x << std::endl
//#elif defined(PR_RELEASE)
//#define LOG(x)
//#endif
//
//#endif


//#define MAIN int main() \//DO NOT KEY IN ANYTHING (ESPECIALLY SPACE) AFTER THE \, WHICH MEANS NEW LINE CHARACTER, LIKE THIS SENTENCE
//{ \
//    std::cin.get(); \
//}
//
//MAIN

//int main()
//{
//	LOG("Hello");
//	std::cin.get();
//}