#include "fleet.h"
#include "vehicle.h"
#include <iostream>

Fleet::Fleet() : m_capacity{100}, m_count{0}, m_vehicles (new Vehicle*[m_capacity]) {}

Fleet::~Fleet() {
	for (size_t i = 0; i < m_count; ++i) {
		delete[] m_vehicles[i];
	}
	delete[] m_vehicles;
}

void Fleet::addVehicle(Vehicle* vehicle) {
	if (m_count >= m_capacity) {
		std::cout << "Fleet is full." << std::endl;
	} else {
		m_vehicles[m_count] = vehicle;
		++m_count;
	}
}

void Fleet::removeFleet(size_t index) {
	if (index >= m_count) {
		std::cout << "Invalid index" << std::endl;
		return ;
	}
	delete m_vehicles[index];

	Vehicle** tmp = new vehicle[m_count - 1];
	for (size_t i = 0, j = 0; i < m_count - 1; ++i) {
		if (i != index) {
			tmp[j] = m_vehicles[i];
			++j;
		}
	}
	m_vehicles = tmp;
	delete[] tmp;
	tmp = nullptr;
}

void Fleet::listVehicle() const {
	for (size_t i = 0; i < m_count; ++i) {
		m_vehicles[i]->displayInfo();
	}
}


