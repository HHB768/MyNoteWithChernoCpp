#pragma once


#include <iostream>
#include <array>


template<typename T, size_t S>
class Array
{
public:
	//Array(int size)
	//{
	//	m_data = (int*)alloca(size * sizeof(int));  // pointer
	//}
	constexpr int size() const { return S; }  // can be decided during compile time

	//T operator[](int index) { return m_data[index]; }  // simply return a brandnew copy, which is an inmodificable lvalue
	T& operator[](size_t index) 
	{ 
		if(!(index<S))
		{
			__debugbreak;
		}
		return m_data[index];
	}
	const T& operator[](size_t index) const { return m_data[index]; }  // make the const array readable  // size_t: unsigned long long
	T* data() { return m_data; }
	const T* data() const { return m_data; }
private:
	T m_data[S];
};