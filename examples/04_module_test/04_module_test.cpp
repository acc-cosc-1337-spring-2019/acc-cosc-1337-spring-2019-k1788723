#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp";

#include "bank_account.h";


TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Test BankAccount initialization") 
{
	BankAccount account(1, 100); // creates instance

	REQUIRE(account.get_balance() == 100);  //acces to public function
}


TEST_CASE("Test BankAccount deposit")
{
	BankAccount account(1, 100); // creates instance

	account.deposit(25);
	REQUIRE(account.get_balance() == 125);  

	account.deposit(-10);
	REQUIRE(account.get_balance() == 125);
}

TEST_CASE("Test BankAccount withdraw")
{
	BankAccount account(1, 100); // creates instance

	account.withdraw(25);
	REQUIRE(account.get_balance() == 75);

	account.withdraw(-25);
	REQUIRE(account.get_balance() == 75);

	account.withdraw(200);
	REQUIRE(account.get_balance() == 75);
}



