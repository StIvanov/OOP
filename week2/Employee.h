#pragma once

struct Name {
	char* first;
	char* last;
};

struct Work {
	int hours;
	double salary;
};

class Employee
{
private:
	Name name;
	Work work;

	bool validateName(char* n);
	int charlen(char* n);
public:
	void setName(char* fName, char* lName);
	void setWork(int h, double s);

	char* getName();
	Work getWork();
	int getHours();
	double getSalary();

	double calcSalary();
};

