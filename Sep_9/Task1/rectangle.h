#pragma once
#include "shape.h"

class Rectangle : public Shape {
public:
	Rectangle();
	Rectangle(double length, double width);
	void area() override;
private:
	double length_;
	double width_;
};
