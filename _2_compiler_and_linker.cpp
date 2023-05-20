// compiler
// 1 pre-process (evaluate)
// abstract syntax tree: const data + instructions

// #include is just paste the file here
// // obj is large if you include some <iostream> kind files.
// #define is the same, paste the following value in text here
// you check this by ouputing the .i file (preprocessor to a file) but it will not form .obj files


//#define hhb int
//constexpr int jiujiujiu = 1;  // maybe this will be better to avoid #define rigid pasting operation
//
//#if 0
//hhb multiply(int a, int b)
//{
//    int res = a * b;
//    return res;
//}
//#endif


// 2 translate to computer language 
// cpp files are translation units
// files have no meaning, just tell the compiler the way to compile
// constant folding: compute the constant when compiling, for example, 5*2 are compiled to 10
// your function will get a unique signature
// if you call a function to do nothing, the compiler will remove it when the optimization is set to 'maxspeed'
// you check this by ouputing the .asm file


// linking: finf the signs and functions and link them together
// if we declare a function without correspoding definition in other files, link error occurs
// but if it is never use, no error occurs
#include <iostream>

//void log(const char* message);
//// it can be built because even no definiiton here, neither the using 
//// (the only program that call log is static and not used
//// but yes, IDE will show this problem ...
//
//static int multi(int a, int b)
//{
//    log("multiply");
//    return a * b;
//}
//
//int dododo()
//{
//    //std::cout << multi(5, 8) << std::endl;
//    std::cin.get();
//    return 0;
//}

// the signature is created for a function or variable
// the function definition and declaration will share a signature which enables the linker to link them


// the compiler will find the same definition twice and report an error
// but a definition and a declaration is the same will be fine and this problem is found by the linker
// #include will paste your codes and multi-definition may happen here
// so don't define a function in .h or it will be pasted for many times in different .cpp
// or you can set definition in .h to static or inline to let the file including it avoid error
