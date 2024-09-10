#include <iostream>
#include "ivehicle.h"
#include "car.h"
#include "bike.h"

int main() {
	IVehicle* obj = new Car;
	obj->startEngine();
	delete obj;
	return 0;
}
