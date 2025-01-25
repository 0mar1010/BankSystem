#pragma once
#include "Person.h"

class Empleyee : public Person {
protected:
	double salary;
public:
	Empleyee() {
		salary = 0;
	}
	Empleyee(string name, string password, int id, double salary) {
		this->name = name;
		this->password = password;
		this->id = id;
		this->salary = salary;

	}

	void set_salary(double salary) {
		this->salary = salary;
	}
	double get_salary() {
		return salary;
	}

	void Display() {
		Person::Display();
		cout << "salary: " << salary << endl;
		cout << "========================" << endl;
	}

};


