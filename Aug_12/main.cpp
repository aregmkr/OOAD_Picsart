#include "DynamicArray.h"
#include <iostream>

int main()
{
	DynamicArray obj1;
	obj1.push(1);
	obj1.push(4);
	obj1.push(7);
	obj1.push(16);
	DynamicArray obj2(obj1);
	obj1.display();
	std::cout << "After" << std::endl;
	DynamicArray obj3 = std::move(obj1);
	obj3.display();
	std::cout << "obj1 " << std::endl;
	obj1.display();
	return 0;
}
