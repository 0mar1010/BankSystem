#pragma once
#include "Person.h"

class Client :public Person {
private:
	double balance;
public:
	Client() {
		balance = 0;
	}
	Client(string name, string password, int id, double balance) {
		this->name = name;
		this->password = password;
		this->id = id;
		this->balance = balance;
	}

	void set_balance() {
		this->balance = balance;
	}
	double get_balance() {
		return balance;
	}

	void Display() {
		Person::Display();
		cout << "balance: " << balance << endl;
		cout << "========================" << endl;
	}

	double deposit(double amount) {
		balance += amount;
		return balance;
	}
	double withdraw(double amount) {
		if (balance < amount) {
			cout << "Amount exceeds\n" << endl;
		}
		else {
			balance -= amount;
		}
		return balance;
	}
	double transferTo(double amount, Client& recipient) {
		if (balance < amount) {
			cout << "Amount exceeds\n" << endl;
		}
		else {
			balance -= amount;
			recipient.deposit(amount);
		}
		return balance;
	}

};


