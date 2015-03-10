#include <iostream>

using namespace std;

template <class T>
DynamicArray<T>::DynamicArray(const unsigned int _capacity)
{
	if (_capacity < 1){
		throw invalid_argument("Array capacity under 1");
	}

	capacity = _capacity;
	arrayElement = new T[capacity];
	T initialization = T();

	for (unsigned int i = 0; i < capacity; i++){
		
		setElement(i,initialization);
	}
}

template <class T>
DynamicArray<T>::~DynamicArray()
{
	delete[] arrayElement;
}

template <class T>
void DynamicArray<T>::setElement(const unsigned int _index,const T& _value)
{
	if (_index >= capacity){
		setCapacite(_index + 1);
	}

	arrayElement[_index] = _value;
}

template <class T>
const T& DynamicArray<T>::getElement(const unsigned int _index) const
{
	if (_index > capacity){
		throw out_of_range("array out of range");
	}

	return arrayElement[_index];
}

template <class T>
void DynamicArray<T>::setCapacite(const unsigned int _capacity)
{
	if (_capacity <= 0){
		throw invalid_argument("capacity should not be less than 1");
	}

	T* copyArray = new T[_capacity];

	for (unsigned int i = 0; i < _capacity; i++){

		if (i < capacity){
			copyArray[i] = arrayElement[i];
		}
		else{
			copyArray[i] = T();
		}

	}

	capacity = _capacity;
	delete[] arrayElement;
	arrayElement = copyArray;
}

template <class T>
const unsigned int DynamicArray<T>::getCapacite() const
{
	return capacity;
}