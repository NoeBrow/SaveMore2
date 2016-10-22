// BankApp.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

class BankAccount
{
protected:
	int accountNumber;
	float interestRate;
	float balance;
	int termYr;
public:
	BankAccount()
	{
		accountNumber = 0;
		interestRate = .0;
		balance = 0;
	}
	virtual int withdraw() = 0;
	virtual int deposit() = 0;
	virtual void display() = 0;
};

class Savings : public BankAccount
{
	int deposit()
	{
		int deposit;
		balance = deposit;
		return 0;
	}
	void savingsBalance()
	{
		float preBalance;
		if (balance < 10000)
		{
			interestRate = .1;
		}
		else
		{
			interestRate = .2;
		}
		balance = balance + (balance * interestRate/12);
	}
	int withdraw()
	{
		balance = balance - 2;
		int withdrawAmount;
		if (withdrawAmount > 0)
		{
			return 0;
		}
		else if (withdrawAmount < 0)
		{
			return -1;
		}
	}
};

class Checking : public BankAccount
{
	void checkingFee()
	{
		if (balance < 500)
		{
			balance = balance - 5;
		}
	}
	void orderChecks()
	{
		balance = balance - 15;
	}

};

class CertificateOfDeposit : public BankAccount
{
	void cdBalance()
	{
		float beforeInterest;
		if (termYr >= 5)
		{
			beforeInterest = balance * .1;
			balance = balance + beforeInterest;
		}
		else if (termYr < 5)
		{
			beforeInterest = balance * .05;
			balance = balance + beforeInterest;
		}
	}
	int withdraw()
	{
		int withdraw;
		int withdrawAmount;
		if (withdraw < termYr)
		{
			withdrawAmount = balance * .1;
			balance = balance - withdrawAmount;
			return 0;
		}
		else if (withdraw < 0)
		{
			return -1;
		}
	}
};

int main()
{
	//	Create a new savings account  and deposit $10k
	Savings savingsAccount;
	savingsAccount.deposit(10000);

	//		Create a new checking account and deposit $600
	Checking checkingAccount;
	checkingAccount.deposit(600);
	//	Create a new CD account  with a 3 year term and deposit $10K
	CertificateOfDeposit cdAccount;
	cdAccount.deposit(10000);
	cdAccount.termYR(3);
	//Get and display the attributes for  each account
	BankAccount displayValues;
	displayValues.display;
	//	Calculate monthly interest for the savings account
	Savings moInterest;
	moInterest.SavingsBalance;
	//	Calculate  the monthly interest for the CD account
	CertificateOfDeposit moInterest;
	moInterest.cdBalance;
	//	Get and display the attributes for  each account
		BankAccount displayValues;
	    displayValues.display;
	//	Order checks
		Checking checks;
		checks.orderChecks;
	//	Withdraw $200 from checking
		Checking takeOut;
		takeOut.withdraw(200);
	//	Withdraw $1000 from Savings
		Savings takeOut;
		takeOut.withdraw(1000);
	//	Perform an early withdrawal of $2000 from the CD account
		CertificateOfDeposit earlyWithdrawl;
		termYr = 1;
		earlyWithdrawl.withdraw(2000);
	//	Get and display the account attributes for  each account
		BankAccount displayValues;
		displayValues.display;
	

	return 0;
}

