#include <iostream>
#include "DynamicArray.h"

void DynamicArray::display() const
{
	for (int i = 0; i < size; ++i) {
		std::cout << array[i] << std::endl;
	}
}

void DynamicArray::push(int value)
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
		delete[] array;
		array = nullptr;
}
