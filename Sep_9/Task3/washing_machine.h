#pragma once
#include "appliance.h"

class WashingMachine : public Appliance {
public:
	WashingMachine(int power);
	void turnOn() override;
	void turnOff() override;
	void refuel() override;
};
