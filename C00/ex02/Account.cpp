#include <iostream>
#include <ctime> 
#include "Account.hpp"

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

/*
- Constructor and destructor (increment/decrement counters, print messages)
- makeDeposit()
- makeWithdrawal()
- checkAmount()
- displayStatus()
- displayAccountsInfos()
- _displayTimestamp()
*/

void Account::_displayTimestamp(void)
{
	std::time_t time = std::time(0); // give current raw time (seconds) from unix epoch
	std::tm *local_time = std::localtime(&time); // convert that time to a tm struct (YMD,HMS)
	char buffer[20];
	std::strftime(buffer, sizeof(buffer), "[%Y%m%d_%H%M%S] ", local_time); // formats it into a string
	std::cout << buffer ;
}

Account::Account(int initial_deposit)
	:	_accountIndex(_nbAccounts++),
		_amount(initial_deposit),
		_nbDeposits(0),
		_nbWithdrawals(0)
	{
		_totalAmount += _amount;
		_displayTimestamp();
		std::cout << "index:" << _accountIndex
				  << ";amount:" << _amount 
				  << ";created" << std::endl;
	}

Account::~Account(void)
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex
			  << ";amount:" << _amount 
			  << ";closed" << std::endl;
}

void Account::displayAccountsInfos()
{
	_displayTimestamp();
	std::cout << "accounts:" << _nbAccounts 
			  << ";total:" << _totalAmount
			  << ";deposits:" << _totalNbDeposits
			  << ";withdrawals:" << _totalNbWithdrawals
			  << std::endl;
}

void Account::displayStatus() const
{
	_displayTimestamp();
    std::cout << "index:" << _accountIndex
              << ";amount:" << _amount
              << ";deposits:" << _nbDeposits
              << ";withdrawals:" << _nbWithdrawals
              << std::endl;
}

void Account::makeDeposit(int deposit)
{
	_displayTimestamp();
	 std::cout << "index:" << _accountIndex
	 		   << ";p_amount:" << _amount
			   << ";deposit:" << deposit ;

	_amount += deposit;
	_totalAmount += deposit;
	_nbDeposits++;
	_totalNbDeposits++;
	std::cout << "amount:" << _amount
			  << ";nb_deposits:" << _nbDeposits	
			  << std::endl;
}

bool Account::makeWithdrawal(int withdrawal)
{
	_displayTimestamp();
	 std::cout << "index:" << _accountIndex
	 		   << ";p_amount:" << _amount ;
	if (_amount < withdrawal)
	{
		std::cout << ";withdrawal:refused" << std::endl ;
		return (false);
	}
	_amount -= withdrawal;
	_totalAmount -= withdrawal;
	_nbWithdrawals++;
	_totalNbWithdrawals++;
	std::cout << ";withdrawal:" << withdrawal
              << ";amount:" << _amount
			  << ";nb_withdrawals:" << _nbWithdrawals	
			  << std::endl;
	return (true);
}

int Account::checkAmount( void ) const
{
	return (_amount);
}