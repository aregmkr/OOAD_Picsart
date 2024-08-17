#include "lib.h"
#include <iostream>

Account::Account() : account_number {0}, account_balance{0.0}, account_name{" "} {}

Account::Account(std::string name, double balance) : account_name{name}, account_balance{balance} {}

// deposit encapsulation
void Account::deposit(double value)
{
	if (value > 0) {
		account_balance += value;
	} else {
		std::cout << "Error." << std::endl;
	}
}

// withdraw with encapsulation
void Account::withdraw(double value)
{
	if (value <= account_balance && value >= 0) {
		account_balance -= value;
	} else {
		std::cout << "Insufficient balance." << std::endl;
	}
}

// getters
int Account::getAccountNumber() const
{
	return account_number;	
}

double Account::getBalance() const
{
	return account_balance;
}

std::string Account::getName() const
{
	return account_name;
}

// setter
void Account::setName(std::string name)
{
	account_name = name;
}

void Account::setBalance(double balance)
{
	account_balance = balance;
}

void Account::setNumber(int number) {
	account_number = number;
}
