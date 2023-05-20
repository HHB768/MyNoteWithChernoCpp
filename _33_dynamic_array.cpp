#include <iostream>
#include <string>
#include <vector>


//struct Vertex
//{
//	float x, y, z;
//};
//
//
//std::ostream& operator<<(std::ostream& stream, const Vertex& vertex)
//{
//	stream << vertex.x << ", " << vertex.y << ", " << vertex.z;
//	return stream;
//}
//
//int main()
//{
//	//Vertex vertices[5];  // need to specify a size
//
//	std::vector<Vertex> vertices;
//	vertices.push_back({ 1, 2, 3 });  // dynamic size
//	vertices.push_back({ 4, 5, 6 });
//
//	for (int i = 0; i < vertices.size(); i++)
//	{
//		std::cout << vertices[i] << std::endl;
//	}
//
//	vertices.erase(vertices.begin() + 1);  // delete the second push_back
//
//	for (Vertex& v : vertices)
//	{
//		std::cout << v << std::endl;
//	}
//
//	vertices.clear();
//
//	std::cin.get();
//}

// 增强 for
//#include <iostream>
//#include <set>
//
//using namespace std;
//
//int main()
//{
//	multiset<int> ms = { 1,2,6,2,4,3,3,8 };
//
//	//增强for循环输出
//	for (auto item : ms)
//	{
//		cout << item << " ";
//	}
//	cout << endl;
//
//	//迭代器模式输出
//	for (multiset<int>::iterator it = ms.begin(); it != ms.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//
//	return 0;
//}

//// auto 类型也是 C++11 新标准中的，用来自动获取变量的类型
//for (auto& x : my_array) {
//	x *= 2;
//	cout << x << endl;
//}


////Lesson II
//
//struct Vertex
//{
//	float x, y, z;
//
//	Vertex(float xa, float ya, float za)
//		: x(xa), y(ya), z(za)
//	{
//	}
//
//	Vertex(const Vertex& vertex)
//		:x (vertex.x), y(vertex.y), z(vertex.z)
//	{
//		std::cout << "Copied!" << std::endl;
//	}
//};
//
//
//int main()
//{
//	std::vector<Vertex> vertices;
//	// reserve 3 push_back memory to avoid the change of capacity (3 copies)
//	vertices.reserve(3);
//
//	//vertices.push_back({ 1, 2, 3 });  // copy from main to vertor 
//	//vertices.push_back({ 4, 5, 6 });
//	//vertices.push_back(Vertex(7, 8, 9));  // no difference  // totally 3 copies
//
//	vertices.emplace_back(1, 2, 3);  // will not create a vertex and copy to the vector
//	vertices.emplace_back(4, 5, 6);
//	vertices.emplace_back(7, 8, 9);
//
//	std::cin.get();
//}

