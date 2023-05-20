//#include <iostream>
//
//class Printable  // interface
//{
//public:
//	virtual std::string get_class_name() = 0;
//};
//
//class Entity : public Printable
//{
//public:
//	//std::string get_name() { return "Entity"; }  // cannnot override
//	virtual std::string get_name() { return "Entity"; }  // override
//	//virtual std::string get_name() = 0;  // pure virtual, meaning that you have to implement it in the child class if you want to have an instance
//	std::string get_class_name() override { return "Entity"; }
//};
//
//
//class Player : public Entity
//{
//private:
//	std::string m_name;
//public:
//	Player(const std::string& name)
//		: m_name(name) {}
//
//	std::string get_name() override { return m_name; }  // override is a sign for human, you can ignore it when coding
//	// virtual function will cause memeory use, but it has little impact, just use it when needed.
//	std::string get_class_name() override { return "Player"; }
//};
//
//void print(Printable* obj)  // it does not care what class is put inside. what you want to print can just inherits Printable class and implements a get_class_name method
//{
//	std::cout << obj->get_class_name() << std::endl;
//}
//
//void print_name(Entity* entity)  // it will call the get_name in the Entity though Player is an Entity
//{
//	std::cout << entity->get_name() << std::endl;
//}
//
//int main()
//{
//	Entity* e = new Entity();
//	//print_name(e);
//
//	Player* p = new Player("Cherno");
//	//print_name(p);
//
//	print(e);
//	print(p);
//	
//	std::cin.get();
//}