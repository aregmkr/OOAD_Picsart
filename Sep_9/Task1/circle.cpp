#include <iostream>
#include "circle.h"

Circle::Circle() : radius_{0} {}

Circle::Circle(double radius) : radius_{radius} {}

void Circle::area() {
	double res = pi * pi * radius_;
	std::cout << "Circle area: " << res << std::endl;
}
