#pragma once

class Shape {
public:
	virtual void area() = 0;
	virtual ~Shape() {}
protected:
	double pi = 3.14;
};
