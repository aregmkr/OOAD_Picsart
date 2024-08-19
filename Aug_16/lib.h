#ifndef LIB_A
#define LIB_H

#include <string>

class Account {
	private:
		int account_number;
		double account_balance = 0.0;
		std::string account_name;
		
	public:
		// Constructors
		Account();
		Account(std::string name, double balance);
		Account(const Account& ) = delete;
		Account& operator=(Account&) = default;
		Account(Account&&) = delete;

		// Methods
		void deposit(double value);
		void withdraw(double value);

		// Getter
		int getAccountNumber() const;
		std::string getName() const;
		double getBalance() const;

		// Setters
		void setName(std::string name);
		void setNumber(int number);
		void setBalance(double balance);
};


class Bank {
	private:
		int count;
		int max;
		Account* acc_arr;

	public:
		// Ctors
		Bank();
		~Bank();
		Bank(const Bank& ) = delete;
		Bank& operator=(const Bank &) = delete;
		// Methods
		void createAccount();
		void displayAccount(int index);
		void Deposit(int account_number, double value);
		void Withdraw(int account_number, double value);
};


#endif // LIB_H
