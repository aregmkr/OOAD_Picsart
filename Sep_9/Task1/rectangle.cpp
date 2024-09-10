#include <iostream>
#include "rectangle.h"

Rectangle::Rectangle() : length_{0}, width_{0} {}

Rectangle::Rectangle(double length, double width) : length_{length}, width_{width} {}

void Rectangle::area() {
	double res = length_ * width_;
	std::cout << "Rectangle area: " << res << std::endl;
}
