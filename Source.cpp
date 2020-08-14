#include<iostream>

#include "Vector.h"

template<typename T>
void PrintVector(const Vector<T>& vector)
{
	for (size_t i = 0; i < vector.Size(); i++)
		std::cout << vector[i] << std::endl;

	std::cout << "-----------------------------------\n";
}
int main()
{
	Vector<std::string>vec;
	vec.PushBack("hello");
	vec.PushBack("vectors");
	vec.PushBack("vects");
	PrintVector(vec);

}