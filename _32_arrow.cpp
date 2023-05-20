//#include <iostream>
//#include <string>
//
////class Entity
////{
////public:
////	int x;
////public:
////	void print() const { std::cout << "Hello" << std::endl; }
////};
////
////
////class ScopedPtr
////{
////private:
////	Entity* m_obj;
////public:
////	ScopedPtr(Entity* entity)
////		: m_obj(entity)
////	{
////	}
////
////	~ScopedPtr()
////	{
////		delete m_obj;
////	}
////
////	Entity* get_obj() { return m_obj; }
////
////	Entity* operator->()
////	{
////		return m_obj;
////	}
////
////	const Entity* operator->() const  // const version (need print function const)
////	{
////		return m_obj;
////	}
////};
////
////int main()
////{
////	//Entity e;
////	//Entity* ptr = &e;
////
////	//ptr->x = 2;  // normal usage
////
////	{
////		ScopedPtr s = new Entity();
////		s.get_obj()->print();  // too messy
////		s->print();  // more cleaner
////	}
////
////	std::cin.get();
////}
//
//
//// lesson 2
//struct Vector3
//{
//	float x, y, z;
//};
//
//int main()
//{
//	int offset = (long long)&((Vector3*)nullptr)->x;  // nullptr can be changed to "0"
//	// create a Vector3* nullptr, get the memory address of its x, and turn it to an int
//	std::cout << offset << std::endl;
//	// x=0, y=4, z=8...
//
//	std::cin.get();
//}
//
////因为"指针->属性"访问属性的方法实际上是通过把指针的值和属性的偏移量相加，得到属性的内存地址进而实现访问。
////而把指针设为nullptr(0)，然后->属性就等于0 + 属性偏移量。编译器能知道你指定属性的偏移量是因为你把nullptr转换为类指针
////而这个类的结构你已经写出来了(float x, y, z)，float4字节，所以它在编译的时候就知道偏移量(0, 4, 8)，所以无关对象是否创建