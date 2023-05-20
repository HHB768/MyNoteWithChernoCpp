//#include <iostream>
//
//class Random
//{
//public:
//	Random(const Random&) = delete;  // avoid being copied into multiple instances
//	static Random& get()
//	{
//		static Random s_instance;
//		return s_instance;
//	}
//
//	float floatFunc() { return m_RandomGenerator; }
//	static float Float() { return get().IFloat(); }
//
//private:
//	Random() {}
//	float IFloat() { return m_RandomGenerator; }
//	float m_RandomGenerator = 0.5F;
//
//};
//
//int main()
//{
//	auto& random = Random::get();  // the singleton: you dont need so many random generators. one instance is enough
//	float num = random.floatFunc();
//
//	float num2 = Random::Float();  // if that "get()" is annoying
//
//	std::cout << num2 << std::endl;
//}