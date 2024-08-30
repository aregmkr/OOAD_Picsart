#ifndef FLEET_H
#define FLEET_H

#include "vehicle.h"

class Fleet {
public:
	Fleet();
	~Fleet();
	
	void addVehicle(Vehicle* vehicle);
	void removeVehicle(size_t index);
	void listVehicle();
	
private:
	size_t m_capacity;
	size_t m_count;
	Vehicle ** m_vehicles;
};

#endif
