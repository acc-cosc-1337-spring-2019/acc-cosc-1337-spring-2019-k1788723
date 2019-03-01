#ifndef BANK_ACCOUNT_H
#define BANK_ACCOUNT_H   //header guard

class BankAccount 
{
public:
	BankAccount() = default //default constructor, overloading
	BankAccount(int act, double bal);//constructor
	
	double get_balance() const;
	void deposit(double amount);
	void withdraw(double amount);

private:             // utility functions to take care of small tasks
	int account_number;
	double balance;
	bool amount_greater_zero(double amount);

};


#endif //BANK_ACCOUNT_H