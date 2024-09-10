#pragma once
#include "appliance.h"

class Oven : public Appliance {
public:
	Oven(int power);
	void turnOn() override;
	void turnOff() override;
	void refuel() override;
};
