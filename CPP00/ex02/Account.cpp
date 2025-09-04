#include "Account.hpp"
#include <iostream>


Account::Account( int initial_deposit ) {
    _accountIndex = _nbAccounts++;
    _amount = initial_deposit;
    _nbDeposits = 0;
    _nbWithdrawals = 0;
    _totalAmount += initial_deposit;
    _displayTimestamp();
    std::cout << "Account " << _accountIndex << " created" << std::endl;
}

Account::~Account( void ) {
    _displayTimestamp();
    std::cout << "Account " << _accountIndex << " closed" << std::endl;
    _nbAccounts--;
    _totalAmount -= _amount;
}

int Account::getNbAccounts( void ) {
    return Account::_nbAccounts;
}

static int Account::getTotalAmount( void ) {
    return Account::_totalAmount;
}

static int Account::getNbDeposits( void ) {
    return Account::_totalNbDeposits;
}

static int Account::getNbWithdrawals( void ) {
    return Account::_totalNbWithdrawals;
}

void	Account::makeDeposit( int deposit )
{
    _displayTimestamp();
    std::cout << "Account " << _accountIndex << "; Deposit: " << deposit;
    _amount += deposit;
    _nbDeposits++;
    _totalAmount += deposit;
    _totalNbDeposits++;
    std::cout << "; New Amount: " << _amount << "; Total Deposits: " << _nbDeposits << std::endl;
}

bool    Account::makeWithdrawal( int withdrawal )
{
    _displayTimestamp();
    std::cout << "Account " << _accountIndex << "; Withdrawal: ";
    if (withdrawal > _amount) {
        std::cout << "Refused; Current Amount: " << _amount << std::endl;
        return false;
    }
    _amount -= withdrawal;
    _nbWithdrawals++;
    _totalAmount -= withdrawal;
    _totalNbWithdrawals++;
    std::cout << withdrawal << "; New Amount: " << _amount << "; Total Withdrawals: " << _nbWithdrawals << std::endl;
    return true;
}

int Account::checkAmount( void ) const {
    return _amount;
}

void Account::displayStatus( void ) const {
    _displayTimestamp();
    std::cout << "Account " << _accountIndex << "; Amount: " << _amount << "; Deposits: " << _nbDeposits << "; Withdrawals: " << _nbWithdrawals << std::endl;
}

