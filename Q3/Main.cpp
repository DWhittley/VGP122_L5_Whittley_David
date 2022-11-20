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
annualInterestRate to 4 percent, calculate the next month’s interest and print the new balances for
each of the savers. */

#include <iostream>

#include "SavingsAccount.h"

using namespace std;

int main()
{
	float i = 0.001f, b = 0.00f, newI = 0.000f;
	SavingsAccount Saver1, Saver2;

	Saver1.setBal(2000.00f);
	Saver2.setBal(3000.00f);

	cout << "The initial balance in account 1 is: ";
	Saver1.DisplayAccountBalance();
	cout << "\nThe inital balance in accunt 2 is: ";
	Saver2.DisplayAccountBalance();

	Saver1.setInt(0.03f);
	Saver2.setInt(0.03f);

	cout << "\n\nWith an annual interest rate of ";
	Saver1.DisplayInterestRate();
	cout << " after one month the balance of account 1 is: ";
	Saver1.calculateMonthlyInterest();
	Saver1.DisplayAccountBalance();

	cout << "\n\nWith an annual interest rate of ";
	Saver2.DisplayInterestRate();
	cout << " after one month the balance of account 2 is: ";
	Saver2.calculateMonthlyInterest();
	Saver2.DisplayAccountBalance();

	Saver1.setInt(0.04f);
	Saver2.setInt(0.04f);

	cout << "\n\nWith an annual interest rate of ";
	Saver1.DisplayInterestRate();
	cout << " after another month the balance of account 1 is: ";
	Saver1.calculateMonthlyInterest();
	Saver1.DisplayAccountBalance();

	cout << "\n\nWith an annual interest rate of ";
	Saver2.DisplayInterestRate();
	cout << " after another month the balance of account 2 is: ";
	Saver2.calculateMonthlyInterest();
	Saver2.DisplayAccountBalance();

	/*delete SavingsAccount();
	delete SavingsAccount();*/
}

