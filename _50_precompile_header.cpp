// PCH
// precompile the headers that are rarely modified, for example <std::vector>
// you wont touch such headers, so you can precompile them and dont have to wait them to compile each time
// if your headers are used only once in a specific .cpp, you dont have to include them in pch because it make the code harder to understand (for example, GLFW)

#include "pch.h"
//
//int main()
//{
//	std::cout << "Hello world" << std::endl;
//}

// every project should use precompiled headers
