#pragma once
#include "Cloneable.h"
#include <iostream>
#include <string>
#include <vector>

template <typename T>
class MyComplexObject :
    public ICloneable
{
private:
    int data_1;
    int data_2;
    std::string text_1;
    std::vector<T> vector_1;

public:
    void SetData_1(int x)
    {
        data_1 = x;
    }
	
	int GetData_1() const
	{
		return data_1;
	}

	void SetData_2(int x)
	{
		data_2 = x;
	}
	
	int GetData_2() const
	{
		return data_2;
	}
	
	void SetText(const std::string& text)
	{
		text_1 = text;
	}

	void SetText(const std::string&& text)
	{
		text_1 = std::move(text);
	}
	
	const std::string& GetText() const
	{
		return text_1;
	}
	
	void AddValToVec(T value)
	{
		vector_1.push_back(value);
	}
	
	T GetVecValue(size_t index) const
	{
		return vector_1[index];
	}
	
	/*void AddValToVec(size_t noOfValues)
	{
		for (size_t valInd = 0; valInd < noOfValues; valInd++)
		{
			vector_1.push_back(valInd);
		}
	}*/

	MyComplexObject* clone() override
	{
		MyComplexObject* myco = new MyComplexObject(*this);
		return myco;
	}

	void Print()
	{
		std::cout << "data1:" << data_1 << std::endl;
		std::cout << "data2:" << data_2 << std::endl;
		std::cout << "text:" << text_1<< std::endl;
		std::cout << "vector:" << std::endl;
		for (size_t valInd = 0; valInd < vector_1.size(); valInd++)
			std::cout << "      value" << valInd << ":" << vector_1[valInd] << std::endl;
	}

};


