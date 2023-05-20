#include <iostream>

//class Entity
//{
//public:
//	// if you don't want others to use an instance, set init constructor private
//	// private:
//	// Entity() {}
//	// if you donnot declare this, cpp will set a empty constructor for public
//	// or you can set Entity() = delete; to delete the default constructor
//	float X, Y;
//
//	Entity()  // init constructor I
//	{
//		std::cout << "CREATED I" << std::endl;
//		X = 0.0F;
//		Y = 0.0F;
//	}
//
//	Entity(float a, float b) // you can overload it as other method
//	{
//		std::cout << "CREATED II" << std::endl;
//		X = a;
//		Y = b;
//	}
//
//	// destructor
//	~Entity()
//	{
//		std::cout << "DESTROYED" << std::endl;
//	}
//
//	void print()
//	{
//		std::cout << X << ", " << Y << std::endl;
//	}
//};
//
//void a_function()
//{
//	Entity e(1, 2);
//	e.print();
//	e.~Entity();  
//	// people will rarely manually destroy it except in some special cases ("free: function for example)
//	// in this case the destructor destroys nothing, you just print a message, and the default one prints it twice
//}
//
//int main()
//{
//	a_function();
//	std::cin.get();
//}
