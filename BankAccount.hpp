#ifndef BANKACCOUNT_HPP
#define BANKACCOUNT_HPP

#include <string>
#include <iostream>

using namespace std;

class BankAccount {
private:
  string accountNumber;
  double balance;

public:
  BankAccount(string accNumber, double initialBalance);

  std::string getAccountNumber() const;
  double getBalance() const;

  void setAccountNumber(std::string newAccountNumber);
  void setBalance(double newBalance);

  class Transaction {
  public: 
    void deposit(BankAccount& account, double amount);
    void withdraw(BankAccount& account, double amount);
  };
};
#endif
