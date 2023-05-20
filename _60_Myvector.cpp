//#include <iostream>
//#include "Vector.h"
//#include "Array.h"
//
//template<typename T>
//void print(const Vector<T>& vector)
//{
//	for (size_t i = 0; i < vector.size(); i++)
//		std::cout << vector[i] << std::endl;
//	std::cout << "------------------\n";
//}
//
//struct Vector3
//{
//	float x = 0.0f, y = 0.0f, z = 0.0f;
//
//	Vector3() {}
//	Vector3(float scalar)
//		: x(scalar), y(scalar), z(scalar) {}
//	Vector3(float x, float y, float z)
//		: x(x), y(y), z(z) {}
//	Vector3(const Vector3& other)
//		: x(other.x), y(other.y), z(other.z)
//	{
//		std::cout << "Copy\n";
//
//	}
//	Vector3(Vector3&& other) noexcept
//		: x(other.x), y(other.y), z(other.z)
//	{
//		std::cout << "Move\n";
//
//	}
//
//	~Vector3()
//	{
//		std::cout << "Destroy\n";
//	}
//
//	Vector3& operator=(const Vector3& other)
//	{
//		std::cout << "Copy\n";
//		x = other.x;
//		y = other.y;
//		z = other.z;
//		return *this;
//	}
//
//	Vector3& operator=(Vector3&& other) noexcept
//	{
//		std::cout << "Move\n";
//		x = other.x;
//		y = other.y;
//		z = other.z;
//		return *this;
//	}
//
//};
//
//template<>
//void print(const Vector<Vector3>& vector)
//{
//	for (size_t i = 0; i < vector.size(); i++)
//		std::cout << vector[i].x << ", " << vector[i].y << ", " << vector[i].z << std::endl;
//	std::cout << "------------------\n";
//}
//
//
//int main()
//{
//	//Vector<std::string> v;
//	//v.push_back("Cherno");
//	//v.push_back("C++");
//	//v.push_back("Vector");
//	//print(v);
//	
//	Vector<Vector3> v;
//	
//	/*v.push_back(Vector3(1.0f));
//	v.push_back(Vector3(1, 2, 3));
//	v.push_back(Vector3());*/
//
//	v.emplace_back(1.0f);
//	v.emplace_back(2, 3, 4);
//	v.emplace_back();  // it is better than push_back in its unnecessity of creating a vector3 and passing it to vector
//	v.pop_back();
//	v.pop_back();
//	print(v);
//
//	v.emplace_back(5, 2, 0);
//	v.emplace_back(1, 7, 9);
//	v.clear();
//	print(v);
//
//	v.emplace_back(5, 2, 0);
//	v.emplace_back(1, 7, 9);
//	v.pop_back();
//	print(v);
//
//	std::cin.get();
//}

// when you finish constructing a new structure, try to use it on primitive class such as INTEGER
// because their have no destructors and that may cause crash 