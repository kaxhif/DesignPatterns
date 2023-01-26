#pragma once

//template<typename Vector>
//class IVectorIterator
//{
//	virtual IVectorIterator& operator++() = 0;
//	//virtual IVectorIterator operator++(int) = 0;
//	//virtual IVectorIterator* operator->() = 0;
//	//virtual bool operator==(const Vector& other) const = 0;
//	//virtual bool operator!=(const IVectorIterator& other) const = 0;
//
//};

template<typename Vector>
class VectorIterator
//	: public IVectorIterator<Vector>
{
public:
	using ValueType = typename Vector::ValueType;
	using PointerType = ValueType*;
	using ReferenceType = ValueType&;
public:
	VectorIterator(PointerType ptr)
		: m_Ptr(ptr) { }

	VectorIterator& operator++()
	{
		m_Ptr++;
		return *this;
	}

	VectorIterator operator++(int)
	{
		VectorIterator iterator = *this;
		++(*this);
		return iterator;
	}

	VectorIterator& operator--()
	{
		m_Ptr--;
		return *this;
	}

	VectorIterator operator--(int)
	{
		VectorIterator iterator = *this;
		--(*this);
		return iterator;
	}

	ReferenceType operator[](int index)
	{
		return *(m_Ptr + index);
	}

	PointerType operator->()
	{
		return m_Ptr;
	}

	ReferenceType operator*()
	{
		return *m_Ptr;
	}

	bool operator==(const VectorIterator& other) const
	{
		return m_Ptr == other.m_Ptr;
	}

	bool operator!=(const VectorIterator& other) const
	{
		return !(*this == other);
	}

private:
	PointerType m_Ptr;
};
