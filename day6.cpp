#include "day6.hpp"
#include <iostream>

using namespace std;

int main(void)
{
	Employee empl1(23,4,5000), empl2(31,14,12500);
	int i;
	
	cout << "First employee\nEnter Age: ";
	cin >> i;
	empl1.setAge(i);
	cout << "Enter year of service: ";
	cin >> i;
	empl1.setYear(i);
	cout << "Enter salary: ";
	cin >> i;
	empl1.setSalary(i);
	
	cout << "\nSecond employee\nEnter Age: ";
	cin >> i;
	empl2.setAge(i);
	cout << "Enter year of service: ";
	cin >> i;
	empl2.setYear(i);
	cout << "Enter salary: ";
	cin >> i;
	empl2.setSalary(i);
	
	cout << "\nFirst employee: \nAge " << empl1.getAge();
	cout << "\nYear of service " << empl1.getYear();
	cout << "\nSalary " << empl1.getSalary();

	cout << "\nSecond employee:\nAge " << empl2.getAge();
	cout << "\nYear of service " << empl2.getYear();
	cout << "\nSalary " << empl2.getSalary();

	return 0;
}
