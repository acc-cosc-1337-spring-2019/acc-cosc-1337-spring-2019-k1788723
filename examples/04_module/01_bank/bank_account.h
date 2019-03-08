#ifndef BANK_ACCOUNT_H
#define BANK_ACCOUNT_H   //header guard
#include <iostream>
#include <vector>
#include "transaction.h"

class BankAccount 
{
public:
	BankAccount() = default //default constructor, overloading
	BankAccount(int act, double bal);//constructor
	
	double get_balance() const;
	void deposit(double amount);
	void withdraw(double amount);
	friend void display(const BankAccount& act); // const makes it read only
	friend BankAccount operator +(BankAccount& act1, const BankAccount& act2);
	friend std::ostream & operator << (std::ostream & out, const BankAccount & b);
	//friend std::istream & operator >> (std::istream & in, const BankAccount & b);

private:         // utility functions to take care of small tasks
	std::vector<Transaction> transactions;
	int account_number;
	double balance;
	bool amount_greater_zero(double amount);

};


#endif //BANK_ACCOUNT_H