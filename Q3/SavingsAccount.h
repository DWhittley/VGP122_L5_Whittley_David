/* Create a SavingsAccount class. Use a static data member annualInterestRate to store the
annual interest rate for each of the savers. Each member of the class contains a private data
member savingsBalance indicating the amount the saver currently has on deposit. Provide
member function calculateMonthlyInterest that calculates the monthly interest by multiplying the
savingsBalance by annualInterestRate divided by 12; this interest should be added to
savingsBalance. Provide a static member function modifyInterestRate that sets the static
annualInterestRate to a new value. Write a driver program to test class SavingsAccount.
Instantiate two different objects of class SavingsAccount, saver1 and saver2, with balances of
$2000.00 and $3000.00, respectively. Set the annualInterestRate to 3 percent. Then calculate the
monthly interest and print the new balances for each of the savers. Then set the
annualInterestRate to 4 percent, calculate the next month�s interest and print the new balances for
each of the savers. */

#pragma once

#include <iostream>

using namespace std;

class SavingsAccount
{

private:
	float _savingsBalance = 0.00f; // private variable for savings balance
	float interest;
	float balance;

public:
	
	// Constructor & Destructor
	SavingsAccount(float interest = 0.001f, float balance = 0.00f);
	SavingsAccount(const SavingsAccount& aSavingsAccount); //copy constructor... not sure of the functionality of this so not sure if I implemented correctly
	~SavingsAccount();

	// Setters
	float setInt(float i);
	float setBal(float b); // to fix.... need to be able to manipulate the private variable balance from here

	// Getters
	float getInt() const;
	float getBal() const;
	
	// Account manipulation
	float BalanceAdjust(SavingsAccount b1);
	float CalculateMonthlyInterest(SavingsAccount i1);

	// Display
	void DisplayInterestRate(SavingsAccount i2) const;
	void DisplayAccountBalance(SavingsAccount b2) const;
}