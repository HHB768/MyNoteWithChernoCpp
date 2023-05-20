//// C style cast or C++ style cast
//// C++ static_cast, reinterpret_cast, dynamic_cast, and const_cast  // check potential errors and make it easy to search
//#include <iostream>
//
//class Base
//{
//public:
//	Base() {};
//	virtual ~Base() {};
//};
//
//class Derived : public Base
//{
//public:
//	Derived() {};
//	~Derived() {};
//};
//
//class Another : public Base
//{
//private:
//	double vv;
//public:
//	Another(double v) { v = vv; };
//	~Another() {};
//};
//
//int main()
//{
//	double value = 5.55;
//	double a = 5.3 + (int)value; // C style
//
//	std::cout << a << std::endl;
//
//	Another* s = reinterpret_cast<Another*>(&value);  // reinterpret this memory as a new class
//
//	Derived* derived = new Derived();
//	Base* base = derived;
//	Another* ac = dynamic_cast<Another*>(base);  // return Null if this cast is not supported 
//	if (!ac)
//	{
//		std::cout << "base is Derived\n";
//	}
//	else
//	{
//		std::cout << "base is Another\n";
//	}
//
//}
//
//
//// const_cast is used to add or remove "const" marks
//// reinterpret_cast can be used in all examples in "type_punning.cpp"  // i dont want to change anything, just to regard this memory as another type
//
//#include <iostream>
//#include <string>
//
//class Entity
//{
//public:
//	virtual void printName() {}
//};
//
//class Player : public Entity
//{
//
//};
//
//class Enemy : public Entity
//{
//
//};
//
//
//int main()
//{
//	Player* player = new Player();
//	Entity* e1 = player;
//	//Player p = e1;  // error
//	Entity* e2 = new Enemy();
//
//	Player* p1 = dynamic_cast<Player*>(e1);
//	Player* p2 = dynamic_cast<Player*>(e2);
//
//	// if you disable the c++ - language - enanble RTTI, dynamic_cast will not get info about what type the var is, and throw an error
//	if (dynamic_cast<Player*>(e1))  // similar to " instance of TYPE "
//	{
//		// do sth
//	}
//
//}