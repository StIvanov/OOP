#include "Employee.h"

bool Employee::validateName(const char* n)
{
	int i = 0;
	for (i; n[i] != '\0'; i++) {
		if (n[i] >= 'A' && n[i] <= 'Z') continue;
		if (n[i] >= 'a' && n[i] <= 'z') continue;
		return false;
	}
	return i > 0;
}

int Employee::charlen(const char* n)
{
	int size = 0;

	while (n[size] != '\0') size++;

	return size;
}

void Employee::setName(const char* fName,const char* lName)
{
	if (!validateName(fName)) return;
	if (!validateName(lName)) return;

	int fNameSize = charlen(fName);
	int lNameSize = charlen(lName);

	name.first = new char[fNameSize + 1];
	name.last = new char[lNameSize + 1];

	int idx = 0;
	for (idx = 0; fName[idx]!='\0'; idx++) name.first[idx] = fName[idx];
	name.first[idx] = '\0';

	for (idx = 0; lName[idx] != '\0'; idx++) name.last[idx] = lName[idx];
	name.last[idx] = '\0';
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
