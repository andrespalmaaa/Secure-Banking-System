#include "Bank.hpp"
#include <string>
#include <iostream>
#include <vector>

void Bank::createAccount(string accNumber, double initialBalance) {
    BankAccount newAccount(accNumber, initialBalance);
    accounts.push_back(newAccount);
}

BankAccount* Bank::findAccount(string accNumber) {
    for (int i = 0; i < static_cast<int>(accounts.size()); ++i) {
        if (accounts[i].getAccountNumber() == accNumber) {   // or .accountNumber if public (but likely getter)
            return &accounts[i];
        }
    }
    return nullptr;
}

int Bank::transferMoney(string sourceAccNumber, string destAccNumber, double amount) {
  BankAccount* source = findAccount(sourceAccNumber);
  BankAccount* dest = findAccount(destAccNumber);

  // 2 = Account Not Found
  if (source == nullptr || dest == nullptr) {
    return 2;
  }

  // 3 = Insufficient Funds
  if (source->getBalance() < amount) {
    return 3;
  }

  // Use nested Transaction class to process both operations
  BankAccount::Transaction withdrawalTx;
  withdrawalTx.withdraw(*source, amount);

  BankAccount::Transaction depositTx;
  depositTx.deposit(*dest, amount);

  // 1 = Success
  return 1;
}
