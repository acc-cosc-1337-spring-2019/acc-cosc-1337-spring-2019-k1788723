#include "bank_account.h"
#include<vector>
#include<iostream>
#include "atm.h"

int main() 
{
	BankAccount account(123456, 500)
	Customer customer(account);
	ATM(customer);
	atm.display_balance();


	/*std::vector<BankAccount> accounts;

	BankAccount account(12345689, 500);
	BankAccount account1(55545689, 5000);

	accounts.push_back(account);          // adds to vector 
	accounts.push_back(account1);

	for (auto act : accounts)         //iterates the vector
	{
		std::cout << act.get_balance() << "\n";
	}*/

	return 0;
}