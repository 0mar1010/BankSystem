#pragma once
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <string>
using namespace std;

template <typename Iterator, typename Predicate>
bool every(Iterator begin, Iterator end, Predicate pred)
{
	return every(begin, end, pred);
}

class Validation {
public:
	static bool isAlphabetic(const string& name) {
		return every(name.begin(), name.end(), isAlphabetic);
	}

	static bool isPasswordValid(const string& password) {
		return password.length() >= 8 && password.length() <= 20;
	}

	static bool isBalanceValid(double balance) {
		return balance >= 1500;
	}

	static bool isSalaryValid(double salary) {
		return salary >= 5000;
	}
};

//class Validation {
//
//public:
//	static bool val_name(string name);
//	static bool val_password(string password);
//	static bool val_salary(double salary);
//	static bool val_balance(double balance);
//};
