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

void SavingsAccount::setInt(float i)
{
	_interest = i;
}

void SavingsAccount::setBal(float b)
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

void SavingsAccount::calculateMonthlyInterest()
{
	float temp = 0;

	temp = (_interest / 12) * _balance; // calculate interest accrued on existing balance and store in temp variable
	_balance += temp;
	cout << "(accurred interest = $" << temp << ") ";
}

// Display
void SavingsAccount::DisplayInterestRate() const
{
	cout << _interest;
}
void SavingsAccount::DisplayAccountBalance() const
{
	cout << "$" << _balance;
}