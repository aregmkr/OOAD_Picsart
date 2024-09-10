#include <iostream>
#include "DynamicArray.h"

void DynamicArray::display() const
{
	for (size_t i = 0; i < size; ++i) {
		std::cout << array[i] << std::endl;
	}
}

void DynamicArray::push(const int& value)
{
	if (size >= capacity) {
		capacity *= 2;
		int* tmp = new int[capacity];
		for (int i = 0; i < size; ++i) {
			tmp[i] = array[i];
		}
		delete[] array;
		array = tmp;
		tmp = nullptr;
	}
	array[size] = value;
	++size;
}

void DynamicArray::push(int&& value) {
	if (size >= capacity) {
		capacity *= 2;
		int* tmp = new int[capacity];
		for (size_t i = 0; i < size; ++i) {
			tmp[i] =  array[i];
		}
		delete[] array;
		array = tmp;
		tmp = nullptr;
	}
	array[size] = std::move(value);
	++size;
}

DynamicArray::DynamicArray()
{
	size = 0;
	capacity = 5;
	array = new int[capacity];
}

DynamicArray::DynamicArray(size_t capacity_value)
{
	capacity = capacity_value;
	size = 0;
	array = new int[capacity];
}

DynamicArray::DynamicArray(const DynamicArray& obj)
{
	size = obj.size;
	capacity = obj.capacity;
	array = new int[capacity];
	for (int i = 0; i < size; ++i) {
		array[i] = obj.array[i];
	}
}


DynamicArray::~DynamicArray()
{
	if (array != nullptr) {
		delete[] array;
		array = nullptr;
	}
}

DynamicArray& DynamicArray:: operator=(DynamicArray&& other) noexcept{
	if (this != &other) {
		size = other.size;
		capacity = other.capacity;
		array = other.array;

		other.size = 0;
		other.capacity = 1;
		other.array = nullptr;
	}
	return *this;
}

DynamicArray::DynamicArray(DynamicArray&& obj) noexcept{
		array = std::move(obj.array);
		obj.array = nullptr;
		size = obj.size;
		capacity = obj.capacity;
		obj.size = 0;
		obj.capacity = 0;
}

int DynamicArray::getArray(size_t index) const {
	return array[index];	
}
