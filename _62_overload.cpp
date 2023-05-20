//// overload : functions are in a same class
//// override	: derived class function with same name and args has another behavior compared with funciton with "virtual" tag in base class
//// overwrite : base class function without "virtual" or has different args will be overwrited if you use the derived class function
////             use the base class function, you have to own a base obj/ptr, or use base::function();
//
//
////#include <iostream>
////using namespace std;
////
////class base
////{
////public:
////    virtual void f(float x) { cout << "base::f(float) " << x << endl; }
////    virtual void g(float x) { cout << "base::g(float) " << x << endl; }
////    void h(float x) { cout << "base::h(float) " << x << endl; }
////};
////
////class derived : public base
////{
////public:
////    virtual void f(float x) { cout << "derived::f(float) " << x << endl; }  // override
////    virtual void g(int x) { cout << "derived::g(int) " << x << endl; }  // overwrite
////    void h(float x) { cout << "derived::h(float) " << x << endl; }  // overwrite
////};
////
////int main()
////{
////    derived  d;
////    base* pb = &d;
////    derived* pd = &d;
////
////    // good : behavior depends solely on type of the object
////    pb->f(3.14f); // derived::f(float) 3.14
////    pd->f(3.14f); // derived::f(float) 3.14
////
////    // bad : behavior depends on type of the pointer
////    pb->g(3.14f); // base::g(float) 3.14 (surprise!)
////    pd->g(3.14f); // derived::g(int) 3
////
////    // bad : behavior depends on type of the pointer
////    pb->h(3.14f); // base::h(float) 3.14  (surprise!)
////    pd->h(3.14f); // derived::h(float) 3.14
////
////    pd->base::h(3.14);  // clearly!
////
////    return 0;
////}
//
//#include <string>
//#include <stdio.h>
//
//
//::std::string do_to_string(::std::true_type,  // integral
//						   ::std::true_type,  // signed
//						   long long value)
//{
//	char str[64];
//	int len = ::sprintf_s(str, "%lld", value);
//	return ::std::string(str, len);
//}
//
//::std::string do_to_string(::std::true_type,  // integral
//						   ::std::false_type, // unsigned
//						   unsigned long long value)
//{
//	char str[64];
//	int len = ::sprintf_s(str, "%llu", value);
//	return ::std::string(str, len);
//}
//
//::std::string do_to_string(::std::false_type,  // float
//						   ::std::true_type,   // signed
//						   long double value)
//{
//	char str[64];
//	int len = ::sprintf_s(str, "%lg", value);
//	return ::std::string(str, len);
//}
//
//template<typename t>
//::std::string to_string(const t& t)
//{
//	return do_to_string(::std::is_integral<t>(), ::std::is_signed<t>(), t);
//	//                  |  this is a class  |
//}
//
//int main()
//{
//	::std::string str;
//	// more than one instance of overloaded function matches the argument list
//
//	str = to_string(1234);
//	::printf("str = %s\n", str.c_str());
//
//	str = to_string(-1234);
//	::printf("str = %s\n", str.c_str());
//
//	str = to_string(12.34);
//	::printf("str = %s\n", str.c_str());
//
//
//}