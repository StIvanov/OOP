#include "Employee.h"

bool Employee::validateName(char* n)
{
	int i = 0;
	for (i; n[i] != '\0'; i++) {
		if (n[i] >= 'A' && n[i] <= 'Z') continue;
		if (n[i] >= 'a' && n[i] <= 'z') continue;
		return false;
	}
	return i > 0;
}

int Employee::charlen(char* n)
{
	int size = 0;

	while (n[size] != '\0') size++;

	return size;
}

void Employee::setName(char* fName, char* lName)
{
	if (!validateName(fName)) return;
	if (!validateName(lName)) return;

	name.first = fName;
	name.last = lName;
}

void Employee::setWork(int h, double s)
{
	if (h < 0) h = 0;
	if (s < 0) s = 0;

	work.hours = h;
	work.salary = s;
}

char* Employee::getName()
{
	int sizeFName = charlen(this->name.first);
	int sizeLName = charlen(this->name.last);

	int newSize = sizeFName + sizeLName + 2;
	char* fullName = new char[newSize];

	// fName = Ivan
	// lName = Ivanov

	// fullName = Ivan Ivanov

	int idx = 0; 
	for (int i = 0; i < sizeFName; i++) {
		fullName[idx++] = this->name.first[i];
	}

	fullName[idx++] = ' ';

	for (int i = 0; i < sizeLName; i++) {
		fullName[idx++] = this->name.last[i];
	}

	fullName[idx] = '\0';

	return fullName;
}

Work Employee::getWork()
{
	return work;
}

int Employee::getHours()
{
	return work.hours;
}

double Employee::getSalary()
{
	return work.salary;
}

double Employee::calcSalary()
{
	return work.hours * work.salary;
}
