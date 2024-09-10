#pragma once

class Appliance {
public:
	virtual ~Appliance() {}
	virtual void turnOn() = 0;
	virtual void turnOff() = 0;
	virtual void refuel() = 0;
protected:
	int powerUsage;
};
