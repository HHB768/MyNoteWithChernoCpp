//#include <iostream>
//#include <thread>
//
//
//static bool s_finished = false;
//
//void do_work()
//{
//	using namespace std::literals::chrono_literals;
//
//	std::cout << "Thread id2: " << std::this_thread::get_id() << std::endl;
//	while (!s_finished)
//	{
//		std::cout << "woring...\n";
//		std::this_thread::sleep_for(1s);
//	}
//		
//}
//
//int main()
//{
//	std::thread worker(do_work);  // start another thread doing other works when the main thread is busy
//
//	std::cout << "Thread id1: " << std::this_thread::get_id() << std::endl;
//	std::cin.get();
//	s_finished = true;
//
//	worker.join();  // block the following command until all works are done
//	std::cout << "finished.\n";
//	std::cout << "Thread id3: " << std::this_thread::get_id() << std::endl;
//
//	std::cin.get();
//}