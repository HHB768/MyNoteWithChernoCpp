//// lvalue is sth that has specific memory, rvalue is a kind of temp
//#include <iostream>
//
//int& getValue()
//{
//	static int value = 10;
//	return value;
//}
//
//void setValue(const int& value)  // only lvalue can be referenced, but const ref can accept both
//{
//}
//
//void printName(std::string& name)  // lvalue reference
//{
//	std::cout << name << std::endl;
//}
//
//void rvaluePrintName(std::string&& name)  // rvalue reference  // you can overload these two functions to deal with lvalue and rvalue respectively
//{
//	std::cout << name << std::endl;
//}
//
//void universalPrintName(const std::string& name)
//{
//	std::cout << name << std::endl;
//}
//
//int main()
//{
//	int i = 10;
//	int a = i;
//	//int& vv = 10;  // wrong
//	const int& vv = 10;  // right
//	//eq2
//	//int temp = 10;
//	//const int& a = temp;
//    
//	int v = getValue();
//	getValue() = 5;  
//	setValue(i);
//
//	std::string first = "Yan ";
//	std::string last = "Chernikov";
//
//	std::string name = first + last;  // first and last are both lvalue, but "first + last" is rvalue
//	
//	printName(first);
//	//printName(first + last);  // wrong
//	universalPrintName(first + last);
//	rvaluePrintName(first + last);
//	//rvaluePrintName(first);  // wrong
//}