#include <iostream>
#include "credit.h"

Credit::Credit() {}

void Credit::authorize() {
	std::cout << "Credit Card payment: authorize\n";
}

void Credit::charge() {
	std::cout << "Credit card payment: charge\n";
}

void Credit::refund() {
	std::cout << "Credit card payment: refund\n";
}
