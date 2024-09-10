#pragma once
#include "ivehicle.h"

class Bike : IVehicle {
public:
	void startEngine() override;
	void stopEngine() override;
	void refuel() override;	
};
