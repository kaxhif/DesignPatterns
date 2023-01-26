// MyVector.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Vector.h"
#include <vector>
//
//This implements a custom Vector class and its iterator.
// the vector can be accessed through Range-based for loop and iterator.

/*
//struct Vector3D
//{
//	float x = 0.0f, y = 0.0f, z = 0.0f;
//	int* m_MemoryBlock = nullptr;
//
//	Vector3D() { m_MemoryBlock = new int[5]; }
//	Vector3D(float scalar)
//		: x(scalar), y(scalar), z(scalar)
//	{
//		m_MemoryBlock = new int[5];
//	}
//	Vector3D(float x, float y, float z)
//		: x(x), y(y), z(z)
//	{
//		m_MemoryBlock = new int[5];
//	}
//
//	Vector3D(const Vector3D& other) = delete;
//
//	Vector3D(Vector3D&& other) noexcept
//		: x(other.x), y(other.y), z(other.z)
//	{
//		std::cout << "Moved!" << std::endl;
//		this->m_MemoryBlock = other.m_MemoryBlock;
//		other.m_MemoryBlock = nullptr;
//	}
//
//	Vector3D& operator=(const Vector3D& other) = delete;
//	
//	~Vector3D()
//	{
//		delete[] m_MemoryBlock;
//		std::cout << "Destroyed!" << std::endl;
//	}
//
//	Vector3D& operator=(Vector3D&& other) noexcept
//	{
//		std::cout << "Moved!" << std::endl;
//		this->m_MemoryBlock = other.m_MemoryBlock;
//		other.m_MemoryBlock = nullptr;
//		x = other.x;
//		y = other.y;
//		z = other.z;
//		return *this;
//	}
//};
//
//
//template <typename T>
//void PrintVector(const Vector<T>& vector)
//{
//	for (size_t i = 0; i < vector.Size(); i++)
//		std::cout << vector[i] << std::endl;
//	std::cout << "end printing vector-----------------" << std::endl;
//}
//
//template<>
//void PrintVector(const Vector<Vector3D>& vector)
//{
//	for (size_t i = 0; i < vector.Size(); i++)
//		std::cout << vector[i].x << ", " << vector[i].y << ", " << vector[i].z << std::endl;
//	std::cout << "end printing vector-----------------" << std::endl;
//}
*/

int main()
{
	/*Vector<int> values;
	values.EmplaceBack(1);
	values.EmplaceBack(2);
	values.EmplaceBack(3);
	values.EmplaceBack(4);
	values.EmplaceBack(5);*/
	Vector < std::string > values;
	values.EmplaceBack("1");
	values.EmplaceBack("2");
	values.EmplaceBack("3");
	values.EmplaceBack("hahaha");
	values.EmplaceBack("4");
	values.EmplaceBack("5");


	std::cout << "Not using iterators.." << std::endl;
	for (size_t i = 0; i < values.Size(); i++)
	{
		std::cout << values[i] << std::endl;
	}

	std::cout << "Range-based for loop" << std::endl;
	for (std::string value : values)
	{
		std::cout << value << std::endl;
	}

	std::cout << "Iterator" << std::endl;
	for (Vector<std::string>::Iterator it = values.begin(); it != values.end(); it++)
	{
		std::cout << *it << std::endl;
	}

}

//int main()
//{
//    Vector<Vector3D > vector;
//	
//	{
//		vector.EmplaceBack(1.0f);
//		vector.EmplaceBack(2, 3, 4);
//		vector.EmplaceBack(1, 3, 4);
//		vector.EmplaceBack();
//		PrintVector(vector);
//		/*vector.PopBack();
//		vector.PopBack();
//		PrintVector(vector);
//		vector.EmplaceBack(5, 2, 0);
//		vector.EmplaceBack(1, 7, 9);
//		PrintVector(vector);
//
//		vector.Clear();
//		PrintVector(vector);
//		vector.EmplaceBack(5, 2, 0);
//		vector.EmplaceBack(1, 7, 9);
//		PrintVector(vector);*/
//	}
//    std::cout << "size of vector " << vector.Size() << ", capacity of vector " << vector.Capacity()  << std::endl;
//
//	Vector<int> ivector;
//	ivector.PushBack(5);
//	ivector.EmplaceBack(4);
//	ivector.EmplaceBack(3);
//	ivector.EmplaceBack(2);
//	ivector.EmplaceBack(6);
//	PrintVector(ivector);
//	ivector.PopBack();
//	PrintVector(ivector);
//	ivector.Clear();
//
//
//    std::cin.get();
//}

