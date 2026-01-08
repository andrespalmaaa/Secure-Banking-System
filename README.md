# The Secure Banking System

# Overview

The Secure Banking System is a C++ project that demonstrates core object-oriented programming (OOP) principles, with a strong emphasis on encapsulation, data security, and modular design.

The system simulates basic banking operations such as creating accounts, depositing and withdrawing funds, and transferring money between accounts—while ensuring that all sensitive data is accessed and modified only through controlled interfaces.

# Key Concepts Demonstrated

Encapsulation using private data members and public methods

Nested classes for logical grouping and tighter coupling of related functionality

Safe data access through getters, setters, and transaction methods

Separation of responsibilities across multiple classes

Status-code–based error handling for banking operations

#Features Implemented
1. BankAccount Class

The BankAccount class represents an individual bank account and is responsible for securely storing and managing account data.

Features:

Stores the account number and balance as private members

Provides getter methods to safely access account details

Provides setter methods to update account information in a controlled manner

Prevents direct external modification of account balance

2. Nested Transaction Class

The Transaction class is implemented as a nested class inside BankAccount, reinforcing encapsulation and logical organization.

Features:

Handles individual deposit and withdrawal operations

Modifies account balances only through controlled transaction methods

Validates sufficient funds before processing withdrawals

Outputs clear transaction messages showing:

Transaction type

Amount involved

Updated account balance

This design ensures that transaction logic remains tightly coupled to the account it affects.

3. Bank Class

The Bank class acts as the system-wide manager for all bank accounts.

Features:

Stores multiple BankAccount objects using a dynamic vector

Creates new accounts with unique account numbers and initial balances

Locates accounts using a findAccount() search method

Transfers funds securely between accounts using a transferMoney() method

4. Secure Fund Transfers

The transferMoney() method enables safe transfers between accounts and returns a status code indicating the outcome.

Transfer Status Codes:

1 – Transfer successful

2 – One or both accounts not found

3 – Insufficient funds in the source account

Transfers are processed using Transaction objects to ensure consistency with deposit and withdrawal operations.

5. Testing & Demonstration

The system includes a test scenario in main.cpp that demonstrates:

Creating a bank instance

Creating multiple accounts with initial balances

Depositing and withdrawing funds using transactions

Transferring money between accounts

Interpreting transfer results and printing appropriate success or error messages

# Project Objective

The goal of this project is to build a secure, encapsulated banking system where:

Each class has a clearly defined responsibility

Sensitive data is never accessed directly

All operations are performed through safe, well-designed methods

The system remains modular, readable, and maintainable

This project mirrors real-world banking interactions, where users interact with accounts only through secure interfaces such as ATMs or online banking platforms.

# Summary

The Secure Banking System showcases practical C++ OOP design by combining:

Encapsulation

Nested classes

Safe transaction handling

Multi-object coordination

It provides a solid foundation for understanding how secure systems are structured and how responsibilities are distributed across interacting components.
