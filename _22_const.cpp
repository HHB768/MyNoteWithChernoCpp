//#include <iostream>
//#include <string>
//
//
//class Entity
//{
//private:
//	int m_x, m_y, *ptr;  // note that the pointer should have a "*" else it is just a int
//	// int* m_x, m_y  ---  means pointer m_x and int m_y
//	mutable int var;  // see 23
//public:
//	int get_x() const  // declaring that this method will not change the variables 
//	{
//		// m_x = 2;  // wrong
//		var = 2; // mutable variable can be changed in const methods
//		return m_x;
//	}
//
//	int get_x()  // no const, wi not be used in "print" function
//	// const is actually oveloading the function by changing "this" pointer to const
//	{
//		return m_x;
//	}
//
//	const int* const get_ptr() const
//	{
//		return ptr;
//	}
//
//	void set_x(int x)
//	{
//		m_x = x;
//	}
//};
//
//void print(const Entity& e)  // ref to avoid copying
//{
//	std::cout << e.get_x() << std::endl;  
//	// you promise not to modify e with "const Entity&", so the get_x can be used only when it is set to const
//}
//
//int main()
//{
//	const int MAX_AGE = 90;
//
//	int* const a = new int;
//	*a = 2;  // a ptr to a const, you can change the value it points to, but 
//	// a = (int*)&MAX_AGE; // wrong, cannot change the object it points
//
//	const int* b = new int;  // a const ptr, meaning it points to a const, which cannot be changed
//	// eq2 int const* b = new int, the pos of * matters
//	// *b = 2;  // wrong
//	b = (int*)&MAX_AGE;  // can point to another const
//
//	std::cout << *a << std::endl;
//	std::cout << *b << std::endl;
//
//
//}