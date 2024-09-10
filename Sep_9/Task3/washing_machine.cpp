#include <iostream>
#include "washing_machine.h"

WashingMachine::WashingMachine(int power) {
	powerUsage = power;
}

void WashingMachine::turnOn() {
	std::cout << "Washing turn ON.\nPower usage: " << powerUsage << std::endl;
}

void WashingMachine::turnOff() {
	std::cout << "Washing turn OFF.\nPower usage " << powerUsage << std::endl;
}

void WashingMachine::refuel() {
	std::cout << "Washing refuel\n";
}
