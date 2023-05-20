////reference and pointer are actuallt the same thing for computer
//
//#include <iostream>
//
//#define LOG(x) std::cout << x << std::endl
//
//void increment(int value)
//{
//	value++;
//}
//
//void incrementp(int* value)
//{
//	(*value)++;
//}
//
//
//void incrementr(int& value)
//{
//	value++;
//}


//int main()
//{
//	// you cannot refer to a null because it is a reference to a existing variable
//	int a = 5;
//	int* b = &a;
//	int& ref = a;  // compiler will not compile ref, they know there is only a variable "a".
//	// just an alias
//	ref = 2;
//	increment(a);  //nothing will happen because the value is not a itself
//	incrementp(&a);  // use a pointer to modify the value saved in such address
//	incrementr(a);  // use reference to make your code look clean
//
//	LOG(a);
//
//	// note that you cannot try to make a reference refer to other variable
//	int n = 1;
//	int m = 2;
//
//	int& r = n;
//	r = m;  // it just pass m value to n
//	LOG(n); LOG(m);
//
//	// you can use a pointer
//	int* p = &n;
//	*p = 10;
//	p = &m;
//	*p = 20;
//
//	LOG(n); LOG(m);
//
//	std::cin.get();
//
//}