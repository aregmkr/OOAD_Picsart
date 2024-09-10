#pragma once

class IPaymentMethod {
public:
	virtual void authorize() = 0;
	virtual void charge() = 0;
	virtual void refund() = 0;
};
