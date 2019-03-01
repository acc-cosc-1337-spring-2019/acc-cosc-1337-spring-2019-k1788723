#ifndef CUSTOMER_H
#define CUSTOMER_H
#include "bank_account.h"
#include

class Customer
{
public:
	customer(BankAccount act) : account(act) {}   
	double get_balance() const {return account.get_balance();} 
private:
	BankAccount account;
	
};



#endif //CUSTOMER_H