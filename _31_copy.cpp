//#include <iostream>
//#include <string>
//
//
//struct Vector
//{
//	float x, y;
//};
//
//class String
//{
//private:
//	char* m_buffer;
//	unsigned int m_size;
//public:
//	String(const char* string)
//	{
//		m_size = strlen(string);
//		m_buffer = new char[m_size + 1];
//		/*for (int i = 0; i < m_size; i++)
//		{
//			m_buffer[i] = string[i];
//		}*/ 
//		//eq2
//		memcpy(m_buffer, string, m_size);
//		m_buffer[m_size] = 0;
//	}
//
//	String(const String& other)
//		: m_size(other.m_size)
//	{
//		std::cout << "copied" << std::endl;
//		m_buffer = new char[m_size + 1];
//		memcpy(m_buffer, other.m_buffer, m_size + 1);
//	}
//
//	~String()
//	{
//		delete m_buffer;
//	}
//
//	char& operator[](unsigned int index)
//	{
//		return m_buffer[index];
//	}
//
//	friend std::ostream& operator<<(std::ostream& stream, const String& string);
//};
//
//std::ostream& operator<<(std::ostream& stream, const String& string)
//{
//	stream << string.m_buffer;
//	return stream;
//}
//
//void print(String string)  // use const String& string instead if you donot want to change this string
//// in the basic usage, const string& is always better
//// in some special cases, copying is faster, but now...
//{
//	// and add
//	// String copy = string;  // if you want to have a copy that can change
//	std::cout << string << std::endl;
//}
//
//int main()
//{
//	//Vector* a = new Vector();
//	//Vector* b = a;
//	//b->x = 2;  // copy the ptr instead of the value
//	String string = "Cherno";
//	//String second = string;
//
//	std::cout << string << std::endl;
//	// before adding the constructor
//	// default constructor will copy the ptr, pointing to the same memory
//	//std::cout << second << std::endl;
//	// the debuger will crash since the buffer is shallow copied to the second String
//	// and when they are delete, buffer, which is a pointer, will be deleted twice
//	// and if you change one with "second[2]=a", both of them will change
//
//	// after adding the new constructor
//
//	String second = string;
//
//	second[2] = 'a';
//
//	std::cout << second << std::endl;
//
//	// another problem is, when the String is used in a function, it will be copied
//	print(second);
//}