//#include <iostream>
//#include <vector>
//#include <algorithm>
//
//
//int main()
//{
//	std::vector<int> values = { 3, 5, 1, 4, 2 };
//	std::sort(values.begin(), values.end(), std::greater<int>());  // from large to small
//	std::sort(values.begin(), values.end(), [](int a, int b)
//		{
//			if (a == 1)
//				return false;
//			if (b == 1)
//				return true;
//
//			return a < b;  // greater except 1
//		});
//
//	for (int value : values)
//		std::cout << value << std::endl;
//
//	std::cin.get();
//}