#ifndef __DAY6_HPP__
#define __DAY6_HPP__

class Employee
{
	public:
		Employee(int _age, int _year, int _salary)	{ age = _age; yearsOfService = _year; Salary = _salary;}
		~Employee() {}
		int getAge() const {return age;}
		int getYear() const{return yearsOfService;}
		int getSalary() const{return Salary;}
		void setAge(int i) {age = i;}
		void setYear(int i ) { yearsOfService = i;}
		void setSalary(int i) { Salary = i; }
		int roundSalary() const { int buf; buf = Salary/1000; return buf*1000;}
	private:
		int age, yearsOfService, Salary;
};


#endif
