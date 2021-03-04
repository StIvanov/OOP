#include <iostream>;
#include "Absolute.h";
#include "Angle.h";
#include "Employee.h";
#include "List.h";


using namespace std;

int main() {
	cout << "Test Absolute Class\n\n";

	Absolute a;

	cout << a.ab(-10) << endl;
	cout << a.ab(-2.3) << endl;

	cout << "\n\nTest Angle Class\n\n";

	Angle angle;
	angle.setValue(90);

	cout << angle.getCos() << endl;
	cout << angle.getSin() << endl;
	cout << angle.getTan() << endl;

	cout << "\n\nTest Employee Class\n\n";

	Employee emp;

	emp.setName("Petar", "Petrov");
	emp.setWork(10, 14.5);

	cout << emp.getName() << endl;
	cout << emp.calcSalary() << endl;

	cout << "\n\nTest List Class\n\n";

	List l;

	l.add(2);
	l.add(3);
	l.add(4);

	l.print();
}