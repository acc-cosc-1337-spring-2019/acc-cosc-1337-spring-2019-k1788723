#include "bank_account.h"
#include <iostream>

BankAccount::BankAccount(int act, double bal) :
	account_number(act), balance(bal)
{
}

double BankAccount::get_balance() const
{
	
	return balance;
}
void BankAccount::deposit(double amount)
{
	if (amount_greater_zero(amount))
	{
		balance += amount;
	}
}

void BankAccount::withdraw(double amount)
{
	if (amount > 0 && balance >= amount)
	{
		balance -= amount;
	}
}

bool BankAccount::amount_greater_zero(double amount)
{
	return amount > 0;
}

void display(const BankAccount & act)     
{
	std::cout << "Account: " << act.account_number << "\n";
	std::cout << "Balance: " << act.balance;
}

BankAccount operator+(BankAccount & act1, const BankAccount & act2)
{
	act1.balance = act1.balance + act2.balance;  //c =act1 b =act2

	return act1;
}

std::ostream & operator<<(std::ostream& out, const BankAccount& b)
{
	out << "Account: " << b.account_number << "\n";
	out << "Balance: " << b.balance;

	return out;
}
