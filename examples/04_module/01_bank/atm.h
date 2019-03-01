#include "bank_account.h"
#include "customer.h"

#ifndef ATM_H        
#define ATM_H

class ATM
{
public:
	ATM(Customer c) : customer(c) {}
	void display_balance();
/*
AM() : account(1,5) {} //initializer list
	ATM(BankAccount a) : account(a) {}   //overloading
*/


private:
	Customer customer;
};

#endif //ATM_H