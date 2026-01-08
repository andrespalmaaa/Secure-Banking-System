#include "BankAccount.hpp"
#include <string>
#include <iostream>

using namespace std;

//conctsructor in cpp
BankAccount::BankAccount(std::string accNumber, double initialBalance): accountNumber(accNumber), balance(initialBalance) {
}

std::string BankAccount::getAccountNumber() const {
  return accountNumber;
}

double BankAccount::getBalance() const {
  return balance;
}

//Update Account Number
void BankAccount::setAccountNumber(std::string newAccountNumber) {
  accountNumber = newAccountNumber;
}

//Update Balance
void BankAccount::setBalance(double newBalance) {
  balance = newBalance;
}

//Deposit Method 
void BankAccount::Transaction::deposit(BankAccount& account, double amount) {
  account.balance += amount;
  std::cout << "Deposited: " << amount
            << " | New Balance: " << account.balance << std::endl;
}

//Withdrawal Method
void BankAccount::Transaction::withdraw(BankAccount& account, double amount) {
  if (account.balance >= amount) {
    account.balance -= amount;
    std::cout << "Withdrew: " << amount
              << " | New Balance: " << account.balance << std::endl;
  } else {
    std::cout << "Withdrawal failed. Insufficient funds." << std::endl;
  }
}
