#include <iostream>
#include "paypal.h"
#include "credit.h"

int main() {
	Credit obj;
	int action = 0;
	std::cout << "Chose the action 1->authorize 2->charge 3->refund\n";
	std::cin >> action;
	switch(action) {
		case 1:
			obj.authorize();
			break;
		case 2:
			obj.charge();
			break;
		case 3:
			obj.refund();
			break;
		default:
			break;
	}
	return 0;
}
