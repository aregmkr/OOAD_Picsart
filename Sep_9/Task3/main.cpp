#include <iostream>
#include "washing_machine.h"
#include "oven.h"

int main() {
	WashingMachine obj(500);
	Oven obj2(1000);
	obj.turnOn();
	obj.turnOff();
	return 0;
}
