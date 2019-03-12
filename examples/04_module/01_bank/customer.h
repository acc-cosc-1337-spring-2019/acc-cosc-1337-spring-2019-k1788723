#ifndef CUSTOMER_H
#define CUSTOMER_H
#include "bank_account.h"
#include

class Customer
{
public:
	Customer(BankAccount& act) : account(act) {}   //reference &
	//double get_balance() const {return account.get_balance();} 
	BankAccount& get_account();

private:
	BankAccount& account;
	
};



#endif //CUSTOMER_H