#include <iostream>
#include "rectangle.h"
#include "circle.h"

int main() {
	Circle obj1(5.0);
	obj1.area();
	Rectangle obj2(3, 4);
	obj2.area();
	return 0;
}
