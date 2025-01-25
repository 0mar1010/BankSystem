#pragma once
#include "Empleyee.h"

class Admin : public Empleyee {
public:
	Admin() {

	}
	Admin(string name, string password, int id, double salary) {
		this->name = name;
		this->password = password;
		this->id = id;
		this->salary = salary;

	}

	void Display() {
		Empleyee::Display();
	}

};
