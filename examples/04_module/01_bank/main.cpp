#include "bank_account.h"
#include<iostream>
#include "atm.h"

int main() 
{
	BankAccount account(123456, 500);  //reference not copy
	Customer customer(account);
	ATM(customer);
	atm.display_balance();
	atm.deposit(50);
	atm.display_balance();

	
	BankAccount b(1, 900);
	BankAccount c = account + b;  //calls operator+
	//std::cout << c;
	//std::cin >> c;

	std::cout << "\n";
	//display(c);
	std::cout << c << "\n";

	/*std::vector<BankAccount> accounts;

	BankAccount account(12345689, 500);
	BankAccount account1(55545689, 5000);

	accounts.push_back(account);          // adds to vector 
	accounts.push_back(account1);

	for (auto act : accounts)         //iterates the vector
	{
		std::cout << act.get_balance() << "\n";
	}*/

	/*
	for(auto tic_tac_toe: list)
	{
	cout<<tic_tac_toe << "\n
	}
	*/
	return 0;
}