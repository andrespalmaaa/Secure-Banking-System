# The Secure Banking System

A simple C++ banking system that demonstrates object-oriented programming, encapsulation, and secure transaction handling.
The project simulates core banking operations such as account creation, deposits, withdrawals, and fund transfers while ensuring all data is accessed through controlled interfaces.

# Features

Encapsulated Bank Accounts

Account numbers and balances stored as private members

Accessed only through getters, setters, and transaction methods

Nested Transaction Class

Handles deposits and withdrawals within BankAccount

Ensures transaction logic remains tightly coupled to account behavior

Prints clear transaction summaries and updated balances

Bank Management System

Manages multiple accounts using a dynamic vector

Creates and stores new accounts

Finds accounts by account number

Transfers funds securely between accounts

Secure Fund Transfers

Transfers validated through account lookup and balance checks

Returns status codes for transfer outcomes:

1 – Transfer successful

2 – Account not found

3 – Insufficient funds

Test & Demonstration

Demonstrates deposits, withdrawals, and transfers

Displays transaction logs and success/error messages

Project Structure
.
├── BankAccount.hpp
├── BankAccount.cpp
├── Bank.hpp
├── Bank.cpp
└── main.cpp

How It Works

BankAccount

Represents an individual bank account

Stores account number and balance privately

Uses a nested Transaction class to process deposits and withdrawals

Transaction (Nested Class)

Performs balance updates in a controlled manner

Prevents invalid withdrawals

Outputs transaction details

Bank

Manages a collection of BankAccount objects

Creates accounts and locates them by account number

Transfers funds using Transaction objects

Example Output
Deposited: 1000 | New Balance: 6000
Withdrew: 500 | New Balance: 2500
Withdrew: 1000 | New Balance: 5000
Deposited: 1000 | New Balance: 3500
Transfer successful.

Concepts Demonstrated

Encapsulation and data protection

Nested classes

Object interaction through references

Status-code–based error handling

Clean separation of responsibilities

Objective

To build a secure and well-structured banking system where:

Sensitive data is never accessed directly

All operations are performed through controlled methods

Classes are modular, readable, and maintainable

Author

Built as part of a C++ learning project focused on object-oriented design and encapsulation principles.
