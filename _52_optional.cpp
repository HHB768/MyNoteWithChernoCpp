//#include <iostream>
//#include <fstream>
//#include <optional>
//
//
////std::string readFileString(const std::string& filepath)
////{
////	std::ifstream stream(filepath);
////	if (stream)
////	{
////		std::string results;
////		stream.close();
////		return results;
////	}
////	return std::string();
////}
////
////int main()
////{
////	std::string data = readFileString("data.txt");
////	if (data != "")
////	{
////		//blabla
////	}
////}
//
//std::optional<std::string> readFileString(const std::string& filepath)
//{
//	std::ifstream stream(filepath);
//	if (stream)
//	{
//		std::string results;
//		stream.close();
//		return results;
//	}
//	return {};
//}
//
//int main()
//{
//	std::optional<std::string> data = readFileString("./src/data.txt");  // you can use auto instead  // path from .vcxproj
//
//	std::string value = data.value_or("Not present");
//	std::cout << value << std::endl;
//
//	if (data.has_value())  // you can use "data" only because it has overrided its bool operator
//	{
//		std::cout << "File read siccessfully\n";
//		//std::cout << data.value();
//	}
//	else
//	{
//		std::cout << "File could not be opened!\n";
//	}
//	std::cin.get();
//}