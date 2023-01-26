#pragma once
#include <iostream>
#include "VectorIterator.h"


template<typename T>
class Vector
{
public:
	using ValueType = T;
	//using PointerType = ValueType*;
	//using ReferenceType = ValueType&;
	using Iterator = VectorIterator<Vector<T>>;

public:
	Vector()
	{
		ReAlloc(2);	//with initial size
	}

	~Vector()
	{
		Clear();
		::operator delete(m_Data, m_Capacity * sizeof(T));
	}

	void PushBack(const T& value)
	{
		if (m_Size >= m_Capacity)
			ReAlloc(m_Capacity + m_Capacity / 2);

		m_Data[m_Size] = value;
		m_Size++;
	}

	void PushBack(T&& value)
	{
		if (m_Size >= m_Capacity)
			ReAlloc(m_Capacity + m_Capacity / 2);

		m_Data[m_Size] = std::move(value);
		m_Size++;
	}

	void PopBack()
	{
		if (m_Size > 0)
		{
			m_Size--;
			m_Data->~T();
		}
	}

	template<typename... Args>
	T& EmplaceBack(Args&&... args)
	{
		if (m_Size >= m_Capacity)
			ReAlloc(m_Capacity + m_Capacity / 2);

		new(&m_Data[m_Size]) T(std::forward<Args>(args)...);
		//m_Data[m_Size] = T(std::forward<Args>(args)...);
		return m_Data[m_Size++];
	}

	void Clear()
	{
		for (size_t i = 0; i < m_Size; i++)
			m_Data[i].~T();
		m_Size = 0;
	}

	const T& operator[](size_t index) const
	{
		//assert if the index goes beyond the m_Size
		return m_Data[index];
	}

	T& operator[](size_t index)
	{
		//assert if the index goes beyond the m_Size
		return m_Data[index];
	}

	size_t Size() const { return m_Size; }
	size_t Capacity() const { return m_Capacity; }

	Iterator begin()
	{
		return Iterator(m_Data);
	}

	Iterator end()
	{
		return Iterator(m_Data + m_Size);
	}

private:
	T* m_Data = nullptr;
	size_t m_Size = 0;
	size_t m_Capacity = 0;

private:
	void ReAlloc(size_t newCapacity)
	{
		//1. allocate a new block of memory
		//2. copy/move old data to new allocated memory
		//3. delete
		//T* newBlock = new T[newCapacity];
		T* newBlock = (T*)::operator new(newCapacity * sizeof(T));

		if (newCapacity < m_Size)
			m_Size = newCapacity;

		for (size_t i = 0; i < m_Size; i++)
			//newBlock[i] = std::move(m_Data[i]);
			new(&newBlock[i]) T(std::move(m_Data[i]));

		for (size_t i = 0; i < m_Size; i++)
			m_Data[i].~T();

		//delete[] m_Data;
		::operator delete(m_Data, m_Capacity * sizeof(T));
		m_Data = newBlock;
		m_Capacity = newCapacity;
	}
};

