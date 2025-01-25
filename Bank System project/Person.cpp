#include "Person.h"



//=====person.cpp====//

#include "Validation.h"

Person::Person() :id(0) {}
Person::Person(string name, string password, int id) :id(id) {
	if (Validation::val_name(name)) {
		this->name = name;
	}
	else {
		cout << "name is not right\n";
	}

	if (Validation::val_password(password)) {
		this->password = password;
	}
	else {
		cout << "password is not right\n";
	}

}


void Person::set_name(string name) {
	if (Validation::val_name(name)) {
		this->name = name;
	}
	else {
		cout << "name is not right\n";
	}
}
void Person::set_password(string password)
{
	if (Validation::val_password(password)) {
		this->password = password;
	}
	else {
		cout << "password is not right\n";
	}
}
void Person::set_id(int id)
{
	this->id = id;
}
string Person::get_name()
{
	return name;
}
string Person::get_password()
{
	return password;
}
int Person::get_id()
{
	return id;
}


