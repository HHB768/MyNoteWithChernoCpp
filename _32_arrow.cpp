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
////��Ϊ"ָ��->����"�������Եķ���ʵ������ͨ����ָ���ֵ�����Ե�ƫ������ӣ��õ����Ե��ڴ��ַ����ʵ�ַ��ʡ�
////����ָ����Ϊnullptr(0)��Ȼ��->���Ծ͵���0 + ����ƫ��������������֪����ָ�����Ե�ƫ��������Ϊ���nullptrת��Ϊ��ָ��
////�������Ľṹ���Ѿ�д������(float x, y, z)��float4�ֽڣ��������ڱ����ʱ���֪��ƫ����(0, 4, 8)�������޹ض����Ƿ񴴽�