#include <iostream>
#include "oven.h"

Oven::Oven(int power) {
	powerUsage = power;
}

void Oven::turnOn() {
	std::cout << "Oven turn ON.\nPower usage: " << powerUsage << std::endl;
}

void Oven::turnOff() {
	std::cout << "Oven turn OFF.\nPower usage: " << powerUsage << std::endl;
}

void Oven::refuel() {
	
}
