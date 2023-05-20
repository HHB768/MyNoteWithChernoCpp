//#include <iostream>
//#define LOG(x) std::cout << x << std::endl;
//
//class Player
//{
//public:
//	int x, y;
//	int speed;
//
//	void move(int xa, int ya)
//	{
//		x += xa * speed;
//		y += ya * speed;
//	}
//};  // note this semicolon here


// Lesson I
//int main()
//{
//	Player player;
//	player.x = 5;
//	player.move(1, -1);
//
//	std::cin.get();
//}

// the difference between class and struct
// there are basically the same
// if you just want to organize your data, use struct
// if you want to inherit and form some kinds of hierarchy, use class

// personally, use class only...


// Lesson II
//class Log
//{
//public:
//	const int log_level_error = 0;
//	const int log_level_warning = 1;
//	const int log_level_info = 2;
//private:
//	int m_log_level = log_level_info;
//
//public:
//	void set_level(int level)
//	{
//		m_log_level = level;
//	}
//
//	void error(const char* message)
//	{
//		if (m_log_level >= log_level_error)
//			std::cout << "[error]: " << message << std::endl;
//	}
//
//	void warn(const char* message)
//	{
//		if (m_log_level >= log_level_warning)
//			std::cout << "[warning]: " << message << std::endl;
//	}
//	
//	void info(const char* message)
//	{
//		if (m_log_level >= log_level_info)
//			std::cout << "[info]: " << message << std::endl;
//	}
//};

//int main()
//{
//	Log log;
//	log.set_level(log.log_level_warning);
//	log.warn("hello!");
//	log.error("hello!");
//	log.info("hello!");
//
//	std::cin.get();
//
//}