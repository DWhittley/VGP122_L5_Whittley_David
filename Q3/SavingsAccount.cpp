#include <iostream>
#include<cmath>

#include "SavingsAccount.h"

using namespace std;

SavingsAccount::SavingsAccount(float _interest, float _balance) : _interest(_interest), _balance(_balance)
{
}

SavingsAccount::SavingsAccount(const SavingsAccount& aSavingsAccount) 
{
	setInt(aSavingsAccount.getInt());
	setBal(aSavingsAccount.getBal());
}

SavingsAccount::~SavingsAccount()
{
}

float SavingsAccount::setInt(float i)
{
	_interest = i;
}

float SavingsAccount::setBal(float b)
{
	_balance = b;
}

float SavingsAccount::getInt() const
{
	return _interest;
}

float SavingsAccount::getBal() const
{
	return _balance;
}

void SavingsAccount::BalanceAdjust(SavingsAccount b1)
{
	float b = b1.getBal(), temp = 0;

	temp = b + CalculateMonthlyInterest(b); // calculate and add monthly interest calculation to existing balance and store in temp variable
	b1.setBal(temp); // set the new balance
}

float SavingsAccount::CalculateMonthlyInterest(SavingsAccount i1)
{
	float temp = 1, i = i1.getInt(), b = i1.getBal();

	temp = (i / 12) * b; // calculates the monthly interest by multiplying the savingsBalance by annualInterestRate divided by 12
	return temp;
}

// Display
void SavingsAccount::DisplayInterestRate(SavingsAccount i2) const
{
	cout << i2.getInt();
}
void SavingsAccount::DisplayAccountBalance(SavingsAccount b2) const
{
	cout << b2.getBal();
}