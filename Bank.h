#ifndef BANK_H
#define BANK_H

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
		Bank& operator(const Bank &) = delete;
		// Methods
		void createAccount(int account_number, const std::string name, double balance);
		void displayAccount() const;
		void deposit(int account_number, double value);
		void withdraw(int account_number, double value);
};

#endif // BANK_H

