//#include <iostream>
//
//class Entity
//{
//public:
//	float X, Y;
//
//	Entity()  // init constructor I
//	{
//		std::cout << "CREATED I" << std::endl;
//		X = 0.0F;
//		Y = 0.0F;
//	}
//
//	void move(float xa, float ya)
//	{
//		X += xa;
//		Y += ya;
//	}
//
//	void print()
//	{
//		std::cout << X << ", " << Y << std::endl;
//	}
//};
//
//
//class Player : public Entity
//{
//public:
//	const char* name;
//
//	void print_name()
//	{
//		std::cout << name << std::endl;
//	}
//};
//
//int main()
//{
//	std::cout << sizeof(Player) << " = 2 * " << sizeof(float) <<
//		" + " << sizeof(const char*) << std::endl;
//
//	Player player;
//	player.move(5, 5);
//	player.X = 5;
//	std::cin.get();
//}