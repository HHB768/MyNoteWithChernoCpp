//// if you have enough memory and time, try to use variant, it is more safer
//#include <iostream>
//#include <variant>
//#include <string>
//#include <optional>
//
//enum ErrorCode
//{
//	None = 0, NotFound = 1, NoAccess = 2
//};
//
//std::variant<std::string, ErrorCode> readFile()
//{
//	return {};
//}
//
//int main()
//{
//	std::variant<std::string, int> data;
//	//std::cout << sizeof(data) << std::endl;  // 48 = 16-byte string address + 8-byte safe guard + 不知道是什么
//
//	data = "Cherno";  // 8 bytes in debug mode
//	std::cout << std::get<std::string>(data) << std::endl;
//	//if (auto value = std::get_if<std::string>(&data))  // clean
//	//{
//	//	std::string& v = *value;
//	//}
//	//std::cout << sizeof(data) << std::endl;
//
//	data = 2;  // override the first 4 bytes
//	//std::cout << data.index() << std::endl;
//	std::cout << std::get<int>(data) << std::endl;
//
//	std::cout << sizeof(int) << std::endl;
//	std::cout << sizeof(std::string) << std::endl;
//	std::cout << sizeof(data) << std::endl;
//}

//#include <iostream>
//#include <any>
//
//void* operator new(size_t size)
//{
//	return malloc(size);
//}
//
//struct CustomClass
//{
//	std::string s0, s1;
//};
//
//int main()
//{
//	std::any data;  // you dont have to specify the type, it make it convenient, but more dangerous
//	data = 1;
//	data = "Cherno";
//	data = std::string("Hello World");
//
//	std::string value = std::any_cast<std::string>(data);
//	// or
//	std::string& value2 = std::any_cast<std::string&>(data);
//	// any will assign heap memory for large data, make it slower than variant
//	data = CustomClass();
//}

// Cherno thinks std::any is useless