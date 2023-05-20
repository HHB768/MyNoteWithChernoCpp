//#include <iostream>
//#include <fstream>
//#include <string>
//#include <vector>
//#include <future>
//#include <chrono>
//#include <thread>
////#include <asyncinfo.h>
//
//
//static std::vector<double> all_value;
//static std::vector<std::future<void>> m_future;  // void is the same as output of calculate2
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
//
//
//double calculate(const std::string& line)
//{
//	Timer timer;
//	long long length = line.size();
//	double value = 0;
//	for (int i = 0; i < 100000000000 * length; i++)
//		value += 0.000001 * i;
//	return value;
//}
//
//static std::mutex s_mutex;
//
//static void calculate2(std::vector<double>* value, std::string line)
//{
//	auto val = calculate(line);
//	std::lock_guard<std::mutex> lock(s_mutex);
//	value->push_back(val);  // use mutex to avoid 2 threads want to push_back together
//	// the destructor of lock will automatically unlock this push_back
//}
//
//void loadMeshes()
//{
//
//	std::ifstream stream("./src/data.txt");
//	std::string line;
//	std::vector<std::string> filePaths;
//	while (std::getline(stream, line))
//		filePaths.push_back(line);
//
//#define ASYNC 1
//#if !ASYNC
//	for (const auto& line : filePaths)
//	{
//		all_value.push_back(calculate(line));
//	}
//	//1333246us(1333.25ms)
//	//267669us(267.669ms)
//	//2376330us(2376.33ms)
//	//1555045us(1555.05ms)
//	//4425575us(4425.57ms)
//	//9962029us(9962.03ms)
//#else
//	for (const auto& line : filePaths)
//	{
//		// you have to receive the return of std::async, or it will wait to be destroyed, which means it will complete one task, wait to be destroyed, and do the next one
//		// and then the async is actually invalid
//		m_future.push_back(std::async(std::launch::async, calculate2, &all_value, line));
//	}
//	//417us(0.417ms)
//	//269930us(269.93ms)
//	//1352314us(1352.31ms)
//	//1620380us(1620.38ms)
//	//2426687us(2426.69ms)
//	//4504540us(4504.54ms)
//#endif
//}
//
//
//int main()
//{
//	{
//		Timer timer;
//	    loadMeshes();
//	}
//	std::cin.get();
//}