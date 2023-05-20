#include <iostream>


//int main()
//{
//	int example[5]{};
//	int* another = new int[5]; // created on the heap, will keep alive until we delete it
//	int* ptr = example;
//	char* ptr2 = (char*)ptr;
//
//	for (int i = 0; i < 5; i++)
//	{
//		example[i] = 2;
//	}
//
//	*(ptr + 2) = 6;
//	*(ptr2 + 4 * 1) = 8;
//	// it is not magic, but it is the working principle of arrays
//
//	for (int i = 0; i < 5; i++)
//	{
//		another[i] = 2;
//	}
//
//	std::cin.get();
//}


//class Entity
//{
//public:
//	int example[5]{};
//	int* another = new int[5];  // &e: [02 00 00 00] *5 + [00 00 00 00] + adress of ptr another (8 bytes) + [cc cc ...
//	//int example[5]{};
//
//	Entity()
//	{
//		for (int i = 0; i < 5; i++)
//		{
//			example[i] = 2;
//			another[i] = 2;
//		}
//			
//	}
//};
//
//
//int main()
//{
//	Entity e;
//	
//	std::cin.get();
//}

// in C++11, std::array is offered and it is better than the original array
// in original array, you cannot even access to it length
// you can use count = sizeof(an_array) / sizeof(int) in a stack
// but on a heap, int* example = new int[5]; you can only get the size of a ptr...
// and you can not trust the former usage 
// one way to maintain it yourself, you can:
// static const int SIZE = 5;  // compiler should know the size
// int array[SIZE];
// in C++11, you can:
// std::array<int, 5> another;
// for (int i=0; i<_another.size(); i++)


// static array -- std::array
#include <iostream>
#include <array>

//template <int N>
//void printArray(std::array<int, N>& data)
//{
//	for (int i = 0; i < data.size(); i++)
//		std::cout << data[i] << std::endl;
//}
//
//int main()
//{
//	std::array<int, 5> data{};
//	data[0] = 2;
//	data[4] = 1;
//
//	int dataOld[5]{};
//	dataOld[0] = 0;
//
//	printArray(data);
//}

// std::array's advantages over original array:
// can use .size() to load the size. note: the size is compiled in the source code and occupies no memory
// when you access to a index out of boundary, you can get an error (bound violation) instead of inconsciously
// and they are equally fast
	