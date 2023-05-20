//#include <iostream>
//#include <memory>
//#include <chrono>
//#include <array>
//
//
//class Timer
//{
//private:
//	std::chrono::time_point<std::chrono::high_resolution_clock> startTime;
//public:
//	Timer()
//	{
//		startTime = std::chrono::high_resolution_clock::now();
//	}
//
//	~Timer()
//	{
//		auto endTime = std::chrono::high_resolution_clock::now();
//		auto start = std::chrono::time_point_cast<std::chrono::microseconds>(startTime).time_since_epoch().count();
//		auto end = std::chrono::time_point_cast<std::chrono::microseconds>(endTime).time_since_epoch().count();
//
//		auto duration = end - start;
//		double ms = duration * 0.001;
//
//		std::cout << duration << "us(" << ms << "ms)\n";
//	}
//};
//int main()
//{
//	//{
//	//	Timer timer;
//	//	int value = 0;
//	//	for (int i = 0; i < 100000000; i++)  // if you run in release mode, this number will be calculated 
//	//		value += 2;
//	//}
//	//	//std::cout << value << std::endl;
//
//	struct Vector
//	{
//		float x, y;
//	};
//
//	std::cout << "Make shared\n";
//	{
//		Timer timer;
//		std::array<std::shared_ptr<Vector>, 1000> sharedPtrs;
//		for (int i = 0; i < sharedPtrs.size(); i++)
//			sharedPtrs[i] = std::make_shared<Vector>();
//	}
//
//	std::cout << "Make unique\n";
//	{
//		Timer timer;
//		std::array<std::unique_ptr<Vector>, 1000> sharedPtrs;
//		for (int i = 0; i < sharedPtrs.size(); i++)
//			sharedPtrs[i] = std::make_unique<Vector>();
//	}
//
//	std::cout << "New shared\n";
//	{
//		Timer timer;
//		std::array<std::shared_ptr<Vector>, 1000> sharedPtrs;
//		for (int i = 0; i < sharedPtrs.size(); i++)
//			sharedPtrs[i] = std::shared_ptr<Vector>(new Vector());
//	}
//	
//	__debugbreak();
//
//}