#include <iostream>
#include <string>
//
//
//using String = std::string;
//
//
//class Entity
//{
//private:
//	String m_name;
//public:
//	Entity() : m_name("Unknown") {}
//	Entity(const String& name) : m_name(name) {}
//
//	const String& get_name() const { return m_name; }
//};
//
//int main()
//{
//	Entity entity("Cherno");  // stack // faster, but memory smaller (recommended if can
//	// eq2
//	// Entity entity = Entity("Cherno");
//
//	std::cout << entity.get_name() << std::endl;
//	
//	Entity* e = new Entity("Cherno2");  // heap
//	std::cout << (*e).get_name() << std::endl;
//	// or
//	std::cout << e->get_name() << std::endl;
//	delete e;
//
//	// if you new [], then you should delete []
//	int* b = new int[50];  // 200 bytes
//	delete[] b;  // new and delete are operators
//
//
//	std::cin.get();
//}



// details about stack and heap
//#include <iostream>
//#include <string>
//
//class Entity
//{
//	Entity()
//	{
//		std::cout << "Created!" << std::endl;
//	}
//	~Entity()
//	{
//		std::cout << "Destroyed!" << std::endl;
//	}
//}
//
//// useless function, you create an array in the stack, the memory that the ptr points to will be released
//int* create_array()
//{
//	int array[40];
//	return array;
//}
//
//int main()
//{
//	{
//		Entity* e = new Entity();
//	}
//
//	std::cin.get();
//}


// Lesson II
//int main()
//{
//	int a = 5;
//	int arr[5] = { 1, 2, 3, 4, 5 };
//	int array[5]{};
//
//	for (int i = 0; i < 5; i++)
//		array[i] = i;
//
//	// you can check in the memory 1 that their address are close, with some safety guard "cc"
//
//	int* hvalue = new int;
//	*hvalue = 5;
//	int* harray = new int[5];
//	
//	for (int i = 0; i < 5; i++)
//	{
//		harray[i] = i;
//	}
//
//	// &*hvalue and &*harray are far away from each other
//
//
//	delete hvalue;
//	delete[] harray;
//	std::cin.get();
//
//	// allocation is the main difference
//
//}

