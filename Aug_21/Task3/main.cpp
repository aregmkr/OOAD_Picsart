#include <iostream>
#include "fleet.h"
#include "car.h"

int main()
{
	Fleet fleet;
	fleet.addVehicle(new Car("Eraz", "672"));
	fleet.listVehicle();
	return 0;
}
