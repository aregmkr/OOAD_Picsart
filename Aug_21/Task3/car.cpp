#include "car.h"

Car::Car() : m_model{" "}, m_brand{" "} {}

Car::Car(const std::string& model, cosnt std::string& brand) : m_model(model), m_brand(brand) {} 

void Car::displayInfo() const {
	std::cout << "Car: " << m_model << " " << m_brand << std::endl; 

}

void Car::setModel(const std::string& model) {
	m_model = model;
}

std::string Car::getModel() {
	return m_model;
}

void Car::setBrand(const std::string& brand) {
	m_brand = brand;
}

std::string Car::getBrand() {
	return m_brand;
}

