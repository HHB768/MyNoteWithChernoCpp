//#include <iostream>
//#include <string>
//
//class Example
//{
//public:
//	Example()
//	{
//		std::cout << "Created !"  << std::endl;
//	}
//
//	Example(int x)
//	{
//		std::cout << "Created with " << x << std::endl;
//	}
//};
//class Entity
//{
//private:
//	int m_score;
//	std::string m_name;
//	Example m_example;  // the first example
//public:
//	// one way
//	//Entity()
//	//{
//	//	m_name = "Unknown";
//	//}
//	// another way: menber list
//	//Entity()
//	//	:m_score(0), m_name("Unknown")
//	//{}
//
//	//Entity()
//	//{
//	//	m_name = std::string("Unknown");
//	//	m_example = Example(8);  // you will see it applies a default constructor, but destroys it and creates this one  (second)
//	//	// output:
//	//	//Created !
//	//	//Created with 8
//
//	//}
//
//	// initializing list version  // you should use this everywhere because it has no damage to the performance
//	Entity()
//		: m_example(8)  // or m_example(Example(8)), same  --- in this way, the Entity instance will be created once
//	{
//		m_name = std::string("Unknown");
//	}
//
//	Entity(const std::string& name)
//	{
//		m_name = name;
//	}
//
//	const std::string& get_name() const { return m_name; }
//};
//
//
//int main()
//{
//	Entity e0;
//	//std::cout << e0.get_name() << std::endl;
//
//	//Entity e1("Cherno");
//	//std::cout << e1.get_name() << std::endl;
//
//	std::cin.get();
//}