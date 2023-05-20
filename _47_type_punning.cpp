////#include <iostream>
////
////struct Entity
////{
////	int x, y;
////};
////
////int main()
////{
////	int a = 50;
////	//double value = a;  // 50
////	//std::cout << value << std::endl;
////
////	//double value = *(double*)&a;  // make the deref read 4 more bytes
////	//std::cout << value << std::endl;  // really dangerous
////	// more exciting:
////	// double& value = *(double*)&a;
////	// value = 0;
////
////	Entity e = { 5, 8 };
////	int* position = (int*)&e;  // 因为结构体里面就2个整数，在内存里表现得其实和数组一样，即转换成int*
////	std::cout << position[0] << ", " << position[1] << std::endl;
////
////	int y = *(int*)((int*)&e + 1);
////	std::cout << y << std::endl;
////
////	std::cin.get();
////}
//
//// Union, like struct, but it can only occupy a certain memory, so different variables in it will change if one of them changes
//#include <iostream>
//
//struct Vector2
//{
//	float x, y;
//};
//
//
//struct Vector4
//{
//	union
//	{
//		struct  // if you donot give it a name (anonymously), it is just a kind of organizing structure
//		{
//			float x, y, z, w;
//		};
//		struct
//		{
//			Vector2 m, n;
//		};
//	};
//};
//
//
//void printVector2(const Vector2& vector)
//{
//	std::cout << vector.x << ", " << vector.y << std::endl;
//}
//
//int main()
//{
//	struct E
//	{
//		union
//		{
//			float a;
//			int b;  // force the interpreter to trnaslate a float memory as an int
//		};
//	};
//
//	E ex1{};
//	ex1.a = 2.0F;
//	std::cout << ex1.a << ", " << ex1.b << std::endl;
//	std::cout << "------------------" << std::endl;
//
//	Vector4 vec = { 1.0F, 2.0F, 3.0F, 4.0F };
//	printVector2(vec.m);
//	printVector2(vec.n);
//	std::cout << "------------------" << std::endl;
//	vec.z = 500.0F;
//	printVector2(vec.m);
//	printVector2(vec.n);
//
//
//
//}