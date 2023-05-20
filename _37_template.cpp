#include <iostream>
#include <string>

// template is powerful but try to use it properly

//template <typename T>  // you can use class T
//void print(T value)
//{
//	std::cout << value << std::endl;  // the template is created when called, if the main has not called it, you can write anything in it without error, but vs finds this...
//}
//
//int main()
//{
//	print(5);
//	print<int>(5);
//	print("hello");
//	print<std::string>("Cherno");
//	print(5.5F);
//
//	std::cin.get();
//}


//template<typename T, int N>
//class Array
//{
//private:
//	T m_array[N];
//public:
//	Array(const T(&arr)[N])
//	{
//		for (int i = 0; i < N; i++)
//			m_array[i] = arr[i];
//	}
//	int getSize() const { return N; }
//};
//
//int main()
//{
//	Array<int, 5> array1({1, 2, 3, 4, 5});
//	std::cout << array1.getSize() << std::endl;
//
//	std::cin.get();
//}


//class Array
//{
//private:
//	int m_array[5];
//public:
//	Array(const int(&arr)[5])
//	{
//		for (int i = 0; i < 5; i++)
//			m_array[i] = arr[i];
//	}
//	int getSize() const { return 5; }
//};
//
//int main()
//{
//	int arra[5] = { 1, 2, 3, 4, 5 };
//	Array array1 = Array(arra);
//	Array array2 = Array({ 1, 2, 3, 4, 5 });
//	std::cout << array1.getSize() << std::endl;
//
//	std::cin.get();
//}