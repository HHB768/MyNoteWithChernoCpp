//// the main purpose: to write a readable program
//#include <iostream>
//
//
//enum example: unsigned char  // int or char, but float is not integer
//{
//	a, b, c
//	// you can change that
//	// for example, a=5, b=6, c=4
//};
//
//
////int main()
////{
////	example value = b;
////
////	if (value == 1)
////	{
////		std::cout << "wow!" << std::endl;
////	}
////	std::cin.get();
////}
//
//
//class Log
//{
//public:
//	enum level
//	{
//		Error = 0, Warning, Info  // personally, i will use capital characters here, avoiding the name conflicts
//	};
//private:
//	level m_log_level = Info;
//
//public:
//	void set_level(level level)
//	{
//		m_log_level = level;
//	}
//
//	void error(const char* message)
//	{
//		if (m_log_level >= Error)  // their natures are still comparable integers
//			std::cout << "[error]: " << message << std::endl;
//	}
//
//	void warn(const char* message)
//	{
//		if (m_log_level >= Warning)  // remember to use them like an integer
//			std::cout << "[warning]: " << message << std::endl;
//	}
//
//	void info(const char* message)
//	{
//		if (m_log_level >= Info)
//			std::cout << "[info]: " << message << std::endl;
//	}
//};
//
//int main()
//{
//	Log log;
//	log.set_level(Log::Error);  // note that enum class is not a namespace, error is still in log (not "log")
//	log.warn("hello!");
//	log.error("hello!");
//	log.info("hello!");
//
//	std::cin.get();
//
//}
//
//// here are some tips:
//enum UID : uint64_t  // without class, it is gloabal
//{
//	hello = 1
//};
//
//enum class CardID : uint64_t  // with class, the enum variable is restricted in this class
//{
//	myID = 0,  // NO SEMICOLON HERE !!!!!!!!!
//	hello = 1
//};
//
//enum PID : uint64_t  // with class, the enum variable is restricted in this class
//{
//	// hello = 1  // error C2365 : 'hello' : redefinition
//};
//
//class Player
//{
//public:
//	UID uid() const;
//};
//
//class Card
//{
//public:
//	CardID cid() const;
//};
//
//// you can act like this:
//std::shared_ptr<Player> get_player(UID uid);
//std::shared_ptr<CardID> get_card(CardID cid);
//// Different enum type cannot be implicitly converted/cast to another one
//// so the code will have a compile error when you wrongly use these 2 id
//// for example:
//
//UID Player::uid() const
//{
//	return UID();
//	
//}
//
//CardID Card::cid() const
//{
//	return CardID();
//}
//
//std::shared_ptr<Player> get_player(UID uid)
//{
//	// get_card(uid);  // wrong
//	get_card(static_cast<CardID>(uid)); // you can cast it if necessary
//	return std::shared_ptr<Player>();
//}
//
//std::shared_ptr<CardID> get_card(CardID cid)
//{
//	return std::shared_ptr<CardID>();
//}
