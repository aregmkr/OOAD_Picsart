#include "DynamicArray.h"
#include <iostream>

int main()
{
	DynamicArray obj1;
	for (int i = 0; i < 5; ++i) {
		obj1.push(i+1);
	}
	obj1.push(16);
	DynamicArray obj2(obj1);
	obj2.display();

	return 0;
}
