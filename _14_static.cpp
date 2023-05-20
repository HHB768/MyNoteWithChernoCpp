// "static" outside a class is local in linking stage, used in the single obj
// "static" insdie a class means its value is shared in this class or its method has no "this" ("self" in py), every instance use a same method.
// -> which means it define a scope where things happen


// outside
//static int var = 10;  // global variable in this cpp only  // like "private" in class
//extern int a;  // find the definition in other files. (external linkage)

// you should manage to add "static" to all global variables or functions before you find you will use them in other files.

#include <iostream>

//struct Entity  // use struct to make it public
//{
//	static int x, y;
//
//	static void print()  // static method cannot access to non-static variables (obviously)
//	{
//		std::cout << x << ", " << y << std::endl;
//	}
//};
//
//
//int Entity::x;
//int Entity::y;


//int main()
//{
//	//Entity e;
//	//e.x = 2;
//	//e.y = 3;
//
//	////Entity e1 = { 5, 8 };  // cannnot initialize like this when x, y is static
//	//Entity e1;
//	//e1.x = 5;
//	//e1.y = 8;
//
//	//// equals to: (there are just a copy, you can access to it from any instance or the class itself)
//	//Entity::x = 10;
//	//Entity::y = 10;
//
//	//e.print();
//	//e1.print();
//
//	//// the correct way is you even should not create an instance
//	//Entity::x = 2;
//	//Entity::y = 3;
//
//	//Entity::print();
//
//	//std::cin.get();
//}

// local static variable
// a variable is deleted when a scope {} reach its end,
// but "static" will keep it alive
// it is a little like a global variable, but can not be modified outside the scope, just the memory is kept.
//void function()
//{
//	static int i = 0;
//	i++;
//	std::cout << i << std::endl;
//}

//int main()
//{
//	function();
//	function();
// }