// auto can be useful when data type of function changes and the other codes can remain intact
// but another problem is that this could make it hard to find the conflict because the consequent process may use specific features of that type but have no warning or error


#include <iostream>
#include <string>
#include <vector>


//int main()
//{
//	std::vector<std::string> strings;
//	strings.push_back("Apple");
//	strings.push_back("Orange");
//
//	/*for (std::vector<std::string>::iterator it = strings.begin();
//		it != strings.end(); it++)*/
//	//eq2
//	for (auto it = strings.begin(); it != strings.end(); it++)
//	{
//		std::cout << *it << std::endl;
//	}
//	std::cin.get();
//}

// auto do not include '&'
// if you return a ref, use auto& = function(...)

// sometimes you use a really complicated code wrriten by ohters, you can use auto if you dont't know what should be returned
// but try not to write such comfusing code by yourself
