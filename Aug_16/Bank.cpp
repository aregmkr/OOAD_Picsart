#include "lib.h"
#include <iostream>

// ctors
Bank::Bank() : max{10}, count{0}, acc_arr{new Account[max]} {}

Bank::~Bank()
{
	delete[] acc_arr;
	acc_arr = nullptr;
}

// methods
void Bank::createAccount()
{
	if (count == max) {
		max *= 2;
		Account* tmp = new Account[max];
		for (int i = 0; i < count; ++i) {
			tmp[i] = acc_arr[i];
		}
		delete[] acc_arr;
		acc_arr = tmp;
		tmp = nullptr;
	}

	std::string user_name;
	std::cout << "Enter account name: ";
	std::cin >> user_name;

	acc_arr[count].setNumber(count);
	acc_arr[count].setName(user_name);
	acc_arr[count].setBalance(0.0);
	++count;
	std::cout << "Your account has been created!" << std::endl;
}

void Bank::Deposit(int acc_num, double value)
{
	for (int i = 0; i < count; ++i) {
		if (acc_arr[i].getAccountNumber() == acc_num) {
				acc_arr[i].deposit(value);
				return ;
		}
	}
	std::cout << "Not available account(" << std::endl;
}

void Bank::Withdraw(int acc_num, double value)
{
	for (int i = 0; i < count; ++i) {
		if (acc_arr[i].getAccountNumber() == acc_num) {
				acc_arr[i].withdraw(value);
				return ;
		}
	}
	std::cout << "Not available account(" << std::endl;
}

void Bank::displayAccount(int index)
{
		std::cout << "|Information about account|" << std::endl;
		std::cout << "Number of account -> " << index << std::endl;
		std::cout << "Account holders name -> " << acc_arr[index].getName() << std::endl;
		std::cout << "Account balance -> " << acc_arr[index].getBalance() << " $ " << std::endl;
}
