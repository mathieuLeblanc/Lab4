#pragma once

template <class T>
class DynamicArray
{
public:
	DynamicArray(const unsigned int _capacity = 100);
	~DynamicArray();
	void setElement(const unsigned int _index, const T& _value);
	const T& getElement(const unsigned int _index) const;
	void setCapacite(const unsigned int _capacity);
	const unsigned int getCapacite() const;

private:
	T* arrayElement;
	unsigned int capacity;

	DynamicArray(const DynamicArray<T> &_source);
	DynamicArray<T>& operator=(const DynamicArray<T> &_source);

};



#include "dynamicArray.hpp"