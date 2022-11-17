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

void SavingsAccount::BalanceAdjust(SavingsAccount b1)
{
	float b = b1.getBal(), temp = 0, i = b1.getInt();

	temp = (i / 12) * b; // calculate interest accrued on existing balance and store in temp variable
	temp += b;
	b1.setBal(temp); // set the new balance
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