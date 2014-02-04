#include <iostream>

using namespace std;

class Vehicle
{
	public:
		virtual void Move()=0;
		virtual void Stop()=0;
};

void Vehicle::Move()
{
	cout<< "Move vehicle...";
};

class Car : public Vehicle
{
	public:
		void Move(){ Vehicle::Move();}
};

class Bus : public Vehicle
{
	public:
		void Move(){ cout << "baxbaxbax....";}
		void Stop(){ cout<< "Stop bus...";}
};

class SportCar : public Car
{
	public:
		void Stop(){ cout<< "Stop sportcar...";}
};

class Wagon : public Car
{
	public:
		void Stop(){ cout<< "Stop wagon....";}
};

class Coupe : public Car
{
	public:
		void Stop(){ cout<< "Stop coupe...";}
};

int main(void)
{
	SportCar car;
	Wagon car1;
	Coupe car2;

	return 0;
}
