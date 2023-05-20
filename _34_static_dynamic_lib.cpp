// "include" portfolio includes header files
// "lib" is the library files, "static lib" means that the library is inside the .exe
// "dynamic lib" means that the lib are in .dll, and loaded when .exe functions

// static lib are faster, but memory larger?

// .dll: dynamic linkage library
// dll.lib: save the position of functions in dll
// .lib: static lib without dll

/*#include <iostream>
#include <GLFW\glfw3.h> */ // if the include file is in the solution in VS, try to use "", if it is a complete outside dependency, use <>

//extern "C" int glfwInit();  // it still works, the header also has only this declaration  // extern "C" : GLFW is wriiten in C

//int main()
//{
//	int a = glfwInit();
//	std::cout << a << std::endl;
//	std::cin.get();
//}
