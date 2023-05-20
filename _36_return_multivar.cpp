//#include <iostream>
//#include <string>
//#include <sstream>
//
//
//struct ShaderProgramSource
//{
//	//ShaderProgramSource(std::string V, std::string F) :VertexSource(V),FragmentSource(F) {}
//	std::string VertexSource;
//	std::string FragmentSource;
//};
//
//static ShaderProgramSource ParseShader(const std::string& filepath)
//{
//	std::stringstream ss[2];
//	// do something with filepath
//
//	std::string vs = ss[0].str();
//	std::string fs = ss[0].str();
//
//	//return ShaderProgramSource( vs, fs );
//	//eq2
//	return { vs, fs };
//}
//
//int main()
//{
//	auto sources = ParseShader("basic.shader");  // auto detects the output type of function ParseShader
//	std::string vs = sources.VertexSource;
//	std::string fs = sources.FragmentSource;
//}

// good news!
// C++17 is all you need!
//#include <iostream>
//#include <string>
//#include <tuple>
//
//std::tuple<std::string, int> createPerson()
//{
//	return { "Cherno", 24 };
//}
//
//int main()
//{
//	auto [name, age] = createPerson();
//}
