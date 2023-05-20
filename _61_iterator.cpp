//#include <iostream>
////#include <vector>
//#include "vector.h"
//#include <unordered_map>
//#include <string>
//
//int main()
//{
//	//std::vector<int> values = { 1, 2, 3, 4, 5 };
//
//	/*for (int i = 0; i < values.size(); i++)
//	{
//		std::cout << values[i] << std::endl;
//	}
//
//
//	for (int value : values)
//	{
//		std::cout << value << std::endl;
//	}
//
//	for (std::vector<int>::iterator it = values.begin(); it != values.end(); it++)
//	{
//		std::cout << *it << std::endl;
//	}*/
//
//	//using scoremap = std::unordered_map<std::string, int>;
//	//using scoremapconstiterator = scoremap::const_iterator;
//	//scoremap map;
//	//map["cherno"] = 5;
//	//map["c++"] = 2;
//	//for (scoremapconstiterator it = map.begin(); it != map.end(); it++)
//	//{
//	//	auto& key = it->first;
//	//	auto& value = it->second;
//
//	//	std::cout << key << "=" << value << std::endl;
//	//}
//
//	//for (auto& kv : map)
//	//{
//	//	auto& key = kv.first;
//	//	auto& value = kv.second;
//
//	//	std::cout << key << "=" << value << std::endl;
//	//}
//
//	//// structure binding
//	//for (auto& [key, value] : map)
//	//{
//	//	std::cout << key << "=" << value << std::endl;  // also can see _36_return_multivar
//	//}
//
//	vector<std::string> values;
//	values.emplace_back("1");
//	values.emplace_back("2");
//	values.emplace_back("cherno");
//	values.emplace_back("4");
//	values.emplace_back("5");
//
//	std::cout << "not using iterator:\n";
//	for (auto i = 0; i < values.size(); i++)
//	{
//		std::cout << values[i] << std::endl;
//	}
//
//	std::cout << "range-based for loop:\n";
//	for (auto& value:values)
//	{
//		std::cout << value << std::endl;
//	}
//
//	std::cout << "iterator:\n";
//	for (vector<std::string>::iterator it = values.begin();
//		it != values.end(); it++)
//	{
//		std::cout << *it << std::endl;
//	}
//
//
//	std::cin.get();
//}