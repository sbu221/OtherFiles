#include "Student.h"

Student::Student()
{
}

Student::Student(int id, string n, int age)
{
	_id = id;
	name = n;
	_age = age;
}

Student::~Student()
{
}

void Student::Print()
{
	cout << endl;
	cout << "Id: " << _id << endl;
	cout << "Имя: " << name << endl;
	cout << "Возраст: " << _age << endl;
}

int Student::GetAge()
{
	return _age;
}

void Student::SetAge(int age)
{
	_age = age;
}
