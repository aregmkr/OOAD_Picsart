#pragma once

class IVehicle {
public:
	virtual ~IVehicle() {}
	virtual void startEngine() = 0;
	virtual void stopEngine() = 0;
	virtual void refuel() = 0;
};
