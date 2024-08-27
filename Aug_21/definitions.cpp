#include "person_and_car.h"
#include <iostream>
#include <string>

Car defaultCar{};

Person::Person() : m_name{" "}, m_age{0}, m_car{defaultCar} {}

Person::Person(std::string name, size_t age, Car& car) : m_name(name), m_age(age), m_car(car) {}

std::string Person::getName() const {
    return m_name;
}

size_t Person::getAge() const {
    return m_age;
}

void Person::setName(std::string name) {
    m_name = name;
}

void Person::setAge(size_t age) {
    m_age = age;
}

void Person::setCar(Car& obj) 
{
    m_car.setModel(obj.getModel());
    m_car.setBrand(obj.getBrand());
}

void Person::displayInfo() const
{
    std::cout << m_name << " ownes ";
    m_car.displayCarInfo();
}

Car::Car() : m_model{" "}, m_brand{" "} {}

Car::Car(std::string model, std::string brand) : m_model{model}, m_brand{brand} {}

void Car::setModel(std::string model) {
    m_model = model;
}

void Car::setBrand(std::string brand) {
    m_brand = brand;
}

std::string Car::getModel() const {
    return m_model;
}

std::string Car::getBrand() const {
    return m_brand;
}

void Car::displayCarInfo() const {

    std::cout << m_brand << " " << m_model << std::endl;
}