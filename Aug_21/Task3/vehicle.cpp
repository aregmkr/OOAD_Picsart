#include "vehicle.h"
#include "car.h"
#include <iostream>
#include <string>

Vehicle::Vehicle() = default;

Vehicle::Vehicle(const std::string& model, const std::string& brand) : m_model(model), m_brand(brand) {}

virtual void Vehicle::displayInfo() const {
	std::cout << "Car info from vehicle class" << std::endl;
}
