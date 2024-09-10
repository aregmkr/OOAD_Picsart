#include <iostream>
#include "paypal.h"

PayPalPayment::PayPalPayment() {}


void  PayPalPayment::authorize() {
	std::cout << "PayPalPayment: authorize\n";
}

void PayPalPayment::charge() {
	std::cout << "PayPalPayment: charge\n";
}

void PayPalPayment::refund() {
	std::cout << "PayPalPayment: refund\n";
}
