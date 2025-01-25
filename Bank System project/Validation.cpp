#include "Validation.h"


//=====validation.cpp====//
///////#include "Validation.h"//

bool Validation::val_name(string name){

	if(name.size() < 5 || name.size() > 20) {
		return false;
	}
	for (int i = 0; i < name.size(); i++) {
		if ((name[i] >= 'a' && name[i] <= 'z')
			|| (name[i] >= 'A' && name[i] <= 'Z')) {
			continue;
		}
		else {
			return false;
		}
	}
	return true;
}

bool Validation::val_password(string password){

	if (password.size() < 8 || password.size() > 20) {
		return false;
	}
	else {
		for (int i = 0; i < password.size(); i++) {
			if (password[i] == ' ') {
				return false;
			}
		}
		return true;
	}
}

bool Validation::val_salary(double salary){

	return salary >= 5000;
}

bool Validation::val_balance(double balance){

	return balance>=1500;
}
//