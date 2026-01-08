#include <iostream>
#include "Bank.hpp"

using namespace std;

int main() {
  // Create a bank
  Bank bank;

  // Create three bank accounts
  bank.createAccount("1001", 5000);
  bank.createAccount("1002", 3000);
  bank.createAccount("1003", 2000);
  
  // --- Deposit $1000 into Account "1001" ---
  BankAccount* account1 = bank.findAccount("1001");
  if (account1 != nullptr) {
    BankAccount::Transaction depositTransaction;
    depositTransaction.deposit(*account1, 1000);
  }

  // --- Withdraw $500 from Account "1002" ---
  BankAccount* account2 = bank.findAccount("1002");
  if (account2 != nullptr) {
    BankAccount::Transaction withdrawTransaction;
    withdrawTransaction.withdraw(*account2, 500);
  }

  // Transfer $1000 from 1001 to 1002
  int result = bank.transferMoney("1001", "1002", 1000);

  //Interpret the result
  if (result == 1) {
    std::cout << "Transfer successful." << std::endl;
  } 
  else if (result == 2) {
    std::cout << "Error: One or both accounts not found." << std::endl;
  } 
  else if (result == 3) {
    std::cout << "Error: Insufficient funds for transfer." << std::endl;
  }
  
  return 0;
}

