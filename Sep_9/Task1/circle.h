#pragma once
#include "shape.h"

class Circle : public Shape {
public:
	Circle();
	Circle(double radius);
	void area() override;
private:
	double radius_;
};
