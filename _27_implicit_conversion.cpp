//#include <iostream>
//#include <string>
//
//class Entity
//{
//private:
//	std::string m_name;
//	int m_age;
//public:
//	Entity(const std::string& name)
//		: m_name(name), m_age(-1) {}
//	//Entity(int age)
//	//	: m_name("Unknown"), m_age(age) {}
//	explicit Entity(int age)
//		: m_name("Unknown"), m_age(age) {}
//};
//
//int main()
//{
//	//Entity a("Cherno");
//	//Entity b(22);  // normal usage
//
//	// cool, but try not to use too many times
//	Entity a = std::string("Cherno");  // implicit conversion from a string/int to a Entity
//	//Entity b = 22; // wrong, because of explicit constructor stops this implicit conversion 
//	std::cin.get();
//}