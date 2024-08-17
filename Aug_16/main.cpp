#include <iostream>
#include "lib.h"

int main()
{
	char yes_no = ' ';
   	int action = 0;	
	Bank obj1;
	std::cout << "Do you want to create bank account ? " << std::endl;
	std::cout << "Y/N";
	std::cin >> yes_no;
	std::cin.sync();
	if (yes_no == 'y' || yes_no == 'Y') {
		obj1.createAccount();
	}

	while (true) {
		std::cout << "For deposit - > 1 | withdraw -> 2 | account info -> 3 | exit -> 0" << std::endl;
		std::cin >> action;

		int acc_num = 0;
		double value = 0.0;

		switch(action) 
		{
			case 1:
				std::cout << "Enter account number: ";
				std::cin >> acc_num;
				std::cout << "Enter value: ";
				std::cin >> value;
				obj1.Deposit(0, value);
				std::cout << "Deposit completed." << std::endl;
				break;
			case 2: 
				std::cout << "Enter account number: ";
				std::cin >> acc_num;
				std::cout << "Enter value: ";
				std::cin >> value;
				obj1.Withdraw(0, value);
				std::cout << "Withdrawal completed." << std::endl;
				break;
			case 3:
				obj1.displayAccount(0);
				break;
			case 0:
				return 0;
				break;
			default:
				std::cout << "Invalid" << std::endl;
				break;
		}
	}
	return 0;
}
