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

	bool validateName(const char* n);
	int charlen(const char* n);
public:
	void setName(const char* fName,const char* lName);
	void setWork(int h, double s);

	char* getName();
	Work getWork();
	int getHours();
	double getSalary();

	double calcSalary();
};

