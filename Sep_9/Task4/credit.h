#pragma once
#include "IPayment.h"

class Credit : public IPaymentMethod {
public:
	Credit();
	void authorize() override;
	void charge() override;
	void refund() override;
};
