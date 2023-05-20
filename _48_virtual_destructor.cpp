//#include <iostream>
//
//class Base
//{
//public:
//	Base() { std::cout << "Base Constructor\n"; }
//	//~Base() { std::cout << "Base Destructor\n"; }
//
//	virtual ~Base() { std::cout << "Base Destructor\n"; }  // tell the base distructor that this class will be overrided and there may be a different desrtructor should be called/
//    // when you decide to have a subclass, you 100% should add "virtual" in the parent
//};
//
//class Derived : public Base
//{
//public:
//	Derived() { m_array = new int[5];  std::cout << "Derived Constructor\n"; }
//	~Derived() { delete[] m_array;  std::cout << "Derived Destructor\n"; }
//
//private:
//	int* m_array;
//};
//
//
//int main()
//{
//	Base* base = new Base();
//	delete base;
//	std::cout << "--------------\n";
//	Derived* derived = new Derived();
//	delete derived;
//	std::cout << "--------------\n";
//	Base* poly = new Derived();  
//	delete poly;  // memory leakage if no virtual mark
//
//	std::cin.get();
//}