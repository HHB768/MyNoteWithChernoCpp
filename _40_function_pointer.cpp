//#include <iostream>
//#include <vector>
//#include <functional>
//#include <algorithm>
//
//
//void helloWorld(int a)
//{
//	std::cout << "Hello world! " << a <<  std::endl;
//}
//
//
//void printValue(int value)
//{
//	std::cout << "Value : " << value << std::endl;
//}
//
////void forEach(const std::vector<int>& values, void(*func)(int))  // for original function pointers, lambda without capture can be implicitly changed to func pointer while lambda with capture cannot do that
//void forEach(const std::vector<int>& values, const std::function<void(int)>& func)
//{
//	for (int value : values)
//	{
//		func(value);
//	}
//}
//
//int main()
//{
//	// Lesson I
//	//auto function = helloWorld;
//	//function(6);
//	//function(7);
//	//void(*cherno)(int) = helloWorld;
//	//cherno(8);
//
//	//typedef void(*helloWorldFunctionName)(int);
//	//helloWorldFunctionName func = helloWorld;
//	//func(9);
//
//	//std::vector<int> values = { 1, 5, 4, 2, 3 };
//	//forEach(values, printValue);
//	//forEach(values, [](int value) {std::cout << "Value : " << value << std::endl; });  // lambda  // pass a function pointer is to write a function that may be used later
//
//
//	// Lesson II
//	std::vector<int> values = { 1, 5, 4, 2, 3 };
//	//auto lambda = [](int value) {std::cout << "Value : " << value << std::endl; };  // [] defines the types of "capture", which means how to pass the value
//	int a = 5;
//	/*auto lambda = [](int value) { std::cout << "Value: " << a << std::endl; };*/  // wrong
//	//auto lambda = [=](int value) { std::cout << "Value: " << a << std::endl; };  // by value (all variables)
//	//auto lambda = [&](int value) { std::cout << "Value: " << a << std::endl; };  // by ref
//	//auto lambda = [a](int value) { std::cout << "Value: " << a << std::endl; };
//	//auto lambda = [&a](int value) { std::cout << "Value: " << a << std::endl; };
//	auto lambda = [&](int value) { a = 5;  std::cout << "Value: " << a << std::endl; };  // if you pass vars by value, use mutable to change vars
//	auto it =  std::find_if(values.begin(), values.end(), [](int value) { return value > 3; });
//	std::cout << *it << std::endl;
//
//	forEach(values, lambda);  // 
//
//	std::cin.get();
//
//}