#pragma once
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <string>
using namespace std;

class Person {
protected:
	string name, password;
	int id;
public:
	Person() {
		id = 0;

	}
	Person(string name, string password, int id) {
		this->name = name;
		this->password = password;
		this->id = id;

	}
	void set_name(string name) {
		this->name = name;
	}
	void set_password(string password) {
		this->password = password;
	}
	void set_id(int id) {
		this->id = id;
	}


	string get_name() {
		return name;
	}

	string get_password() {
		return password;
	}
	int get_id() {
		return id;
	}
	void Display() {
		cout << "Name: " << name << endl;
		cout << "password: " << password << endl;
		cout << "id: " << id << endl;
		cout << "========================" << endl;
	}

	~Person() {

	}

};
