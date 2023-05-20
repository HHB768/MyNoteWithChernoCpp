////#include <iostream>
////
////class String
////{
////public:
////	String() = default;
////	String(const char* string)
////	{
////		printf("Created!\n");
////		m_size = strlen(string);
////		m_data = new char[m_size];
////		memcpy(m_data, string, m_size);
////	}
////	String(const String& other)
////	{
////		printf("Copied!\n");
////		m_size = other.m_size;
////		m_data = new char[m_size];
////		memcpy(m_data, other.m_data, m_size);
////	}
////	String(String&& other) noexcept
////	{
////		printf("Moved!\n");
////		m_size = other.m_size;
////		m_data = other.m_data;  // steal the temp instead of creating a new one and copying
////
////		other.m_size = 0;
////		other.m_data = nullptr;  // avoid the destructor of the temp destroying this useful one
////	}
////
////	String& operator=(String && other) noexcept
////	{
////		printf("Moved!\n");
////
////		if (this != &other)
////		{
////			delete[] m_data;
////			
////			m_size = other.m_size;
////			m_data = other.m_data;
////			other.m_size = 0;
////			other.m_data = nullptr;
////		}
////		
////		return *this;
////	}
////
////	~String()
////	{
////		printf("Destroyed!\n");
////		delete m_data;
////	}
////	
////	void print()
////	{
////		for (uint32_t i = 0; i < m_size; i++)
////			printf("%c", m_data[i]);
////		printf("\n");
////	}
////private:
////	char* m_data;
////	uint32_t m_size;
////
////};
////
////class Entity
////{
////public:
////	Entity(const String& name)
////		: m_name(name)
////	{}
////	Entity(String&& name)
////		: m_name(std::move(name))  //eq2
////		//: m_name((String&&)name)  // note that this (String&&) makes the temp chooses this constructor
////	{}
////	void printName()
////	{
////		m_name.print();
////	}
////
////private:
////	String m_name;
////};
////
////int main()
////{
////	//Entity entity(String("Cherno"));  // for temp parameters
////	//entity.printName();
////
////	//String string = "Hello";
////	//String dest = std::move(string);  // no "operator=" here, just construct a string
////
////	String apple = "Apple";
////	String another;
////	std::cout << "apple: ";
////	apple.print();
////	std::cout << "another: ";
////	another.print();
////
////	another = std::move(apple);  // here is the "operator="
////	std::cout << "apple: ";
////	apple.print();
////	std::cout << "another: ";
////	another.print();
////
////
////	std::cin.get();
////}
//
//// C++�����������Ҫ������������һ����Ҫ�������캯���Ϳ�����ֵ��������C++�巨��Ϊ��֧���ƶ����壬���������ƶ����캯�����ƶ���ֵ�����
//
//#include <string>
//
//std::string& concat(std::string& x, const std::string& y)  // const lref can refer to a temp;
//{
//	return x.append(y);
//}
//
//std::string& concat(std::string& x, std::string&& y)
//{
//	return x.append(y);
//}
//
//std::string foo(std::string& x)
//{
//	std::string str = "123";
//	concat(x, std::move(str));
//	return concat(x, std::string("abc"));
//}
//
////template<typename T, typename U>
////std::string& concat(std::string& x, T t, U u)  // right
////{
////	return concat(x, std::string(t, u));
////}
//
//template<typename T, typename U>
//std::string& concat(std::string& x, T&& t, U&& u)  // auto&& universal ref
//{
//	return concat(x, std::string(std::forward<T>(t), std::forward<U>(u));  // with forward and &&, the variables keep their original ref type
//}
//
//auto lambda = [&](std::string& x, auto&& t, auto&& u)
//{
//	return concat(x, std::string(static_cast<decltype(t)>(t), static_cast<decltype(u)>(u));  // beyond the template, use the decltype to keep their nature
//};
//
////�����ǽ�һ����ֵ���ô��뺯��ʱ������ʵ�����������������Լ������´����ߵ�����������ʱ������C++ ��׼�Ķ��壬������������һ����ֵ��
////��ô����Զ������ý�������������ֵ�汾���������һЩ�������ɿ�����
////Ϊ�˽��������� C++ 11����������ת����������ֵ�жϵ��Ƶ�������forward ������ֵ����ԭ����һ����ֵ����ô��ת��������һ����ֵ������Ϊһ����ֵ��
////�����Ĵ����������ת����ԭ�в���������ֵ���ԣ��������һЩ����Ҫ�Ŀ�����
////
////ԭ�����ӣ�https ://blog.csdn.net/coolwriter/article/details/80970718
//
//int main()
//{
//	std::string str("hello");
//	concat(str, 5, 'a');
//	concat(str, "hello", 5);  // T => const char (&) [6] + && // including an ending
//							  //   => const char (&) [6]
//							  // U => int + &&
//							  //   => int&&
//}
//
//
//// cppreference:
//#include <iostream>
//#include <memory>
//#include <utility>
//
//struct A {
//    A(int&& n) { std::cout << "rvalue overload, n=" << n << "\n"; }
//    A(int& n) { std::cout << "lvalue overload, n=" << n << "\n"; }
//};
//
//class B {
//public:
//    template<class T1, class T2, class T3>
//    B(T1&& t1, T2&& t2, T3&& t3) :
//        a1_{ std::forward<T1>(t1) },
//        a2_{ std::forward<T2>(t2) },
//        a3_{ std::forward<T3>(t3) }
//    {
//    }
//
//private:
//    A a1_, a2_, a3_;
//};
//
//template<class T, class U>
//std::unique_ptr<T> make_unique1(U&& u)
//{
//    return std::unique_ptr<T>(new T(std::forward<U>(u)));
//}
//
//template<class T, class... U>
//std::unique_ptr<T> make_unique2(U&&... u)
//{
//    return std::unique_ptr<T>(new T(std::forward<U>(u)...));
//}
//
//auto make_B(auto&&... args) // since C++20
//{
//    return B(std::forward<decltype(args)>(args)...);
//}
//
//int main()
//{
//    auto p1 = make_unique1<A>(2); // rvalue
//    int i = 1;
//    auto p2 = make_unique1<A>(i); // lvalue
//
//    std::cout << "B\n";
//    auto t = make_unique2<B>(2, i, 3);
//
//    std::cout << "make_B\n";
//    [[maybe_unused]] B b = make_B(4, i, 5);
//}