// create a new project called Engine, which is set to be compiled into a static lib in properties
//#include "Engine.h"
//#include "../../Engine/src/Engine.h"

//namespace engine {
//	void printMessage();
//}

//int main()
//{
//	engine::printMessage();
//}

// Cherno没有说在vs中生成dll并使用的方式，
// 如果只是简单的将项目生成为dll，则不会输出lib文件，也就无法在其他项目中静态链接项目dll
// 解决的办法是在dll项目中，在声明和定义的函数前均加上__declspec(dllexport)，即可同时生成dll与lib