#ifndef BANK_HPP
#define BANK_HPP

#include <string>
#include <iostream>
#include <vector>
#include "BankAccount.hpp"

using namespace std;

class Bank{
private:
vector<BankAccount> accounts; 

public:
void createAccount(string accNumber, double initialBalance);

//Find Account Method
BankAccount* findAccount(string accNumber);

//Transfer Money Method
int transferMoney(string sourceAccNumber, string destAccNumber, double amount);
};
#endif
