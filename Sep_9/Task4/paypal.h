#pragma once
#include "IPayment.h"

class PayPalPayment : public IPaymentMethod {
	PayPalPayment();
	void authorize() override;
	void charge() override;
	void refund() override;
};
