//#include <iostream>
//#include <string>
//#include <memory>
//
//class Entity
//{
//public:
//	Entity()
//	{
//		std::cout << "Created!" << std::endl;
//	}
//	~Entity()
//	{
//		std::cout << "Destroyed!" << std::endl;
//	}
//
//	void print() {}
//};
////
////
////class ScopedPtr  // acutally it is the unique pointer
////{
////private:
////	Entity* m_ptr;
////public:
////	ScopedPtr(Entity* ptr)
////		: m_ptr(ptr)
////	{
////	}
////
////	~ScopedPtr()
////	{
////		delete m_ptr;
////	}
////
////};
////
////
////int main()
////{
////	{
////		ScopedPtr e = new Entity();
////	}
////
////	std::cin.get();
////}
//
//int main()
//{
//	{
//		std::unique_ptr<Entity> e(new Entity());  // explicit constraint
//		std::unique_ptr<Entity> entity = std::make_unique<Entity>();  // safer way  // try to use unique ptrs when the stack memory is limited
//		// you can't copy this ptr because it is the memory that will be released that matters.
//		e->print();
//
//		std::shared_ptr<Entity> sharedEntity = std::make_shared<Entity>();  // track the number of ptrs that point to a certain memory, when the number of copies decreases to 0, release the memory\
//		// the share ptr needs a control block to store the number of references, and the new Entity will need another allocation
//		// make_shared make them as one, more efficiently
//		// but a little bit more costly than unique ptrs because of the counter
//
//		std::weak_ptr<Entity> e_w;
//		{
//			std::shared_ptr<Entity> e0;
//			{
//				std::shared_ptr<Entity> sharedEntity1 = std::make_shared<Entity>();
//				e0 = sharedEntity1;
//				e_w = sharedEntity1;
//			}
//			// no destroyed here because e0 shares the memory
//		}
//		// destroyed here because all shareptrs are deleted
//		// weak ptr will not be counted in the number
//	}
//
//	std::cin.get();
//
//// tips: you should use the smart pointers everywhere because new and delete are really annoying

// when you open a file, for example:
// int fd = ::open("test.cc", O_RDONLY, 0);
// ::std::unique_ptr<int, void(*)(int*)> guard(&fd, [](int* p){::close(*p);}); 
// will automatically close the file even when the error occurs, very safe!