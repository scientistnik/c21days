#include <iostream>

using namespace std;

class SimpleCircle
{
	public:
		SimpleCircle();
		SimpleCircle(int radius);
		SimpleCircle(const SimpleCircle&);
		~SimpleCircle();
		void SetRadius(int radius) { *itsRadius = radius;}
		int GetRadius() const { return *itsRadius;}
		const SimpleCircle operator++ ();
		const SimpleCircle& operator++ (int);
		SimpleCircle& operator= (const SimpleCircle&);
	private:
		int *itsRadius;
};

SimpleCircle::SimpleCircle()
{
	itsRadius = new int;	
	*itsRadius = 5;
}


SimpleCircle::SimpleCircle(int radius)
{
	itsRadius = new int;
	*itsRadius = radius;
}

SimpleCircle::SimpleCircle(const SimpleCircle& temp)
{
	itsRadius = new int;
	*itsRadius = *temp.itsRadius;
}
SimpleCircle::~SimpleCircle()
{
	delete itsRadius;
}

const SimpleCircle SimpleCircle::operator++ ()
{
	SimpleCircle temp(*itsRadius);
	(*itsRadius)++;
	return temp;
}

const SimpleCircle& SimpleCircle::operator++ (int)
{
	(*itsRadius)++;
	return *this;
}

SimpleCircle& SimpleCircle::operator= (const SimpleCircle& rhs)
{
	if(this != &rhs)
	{
		*itsRadius = rhs.GetRadius();
	}
	return *this;
}

int main(void)
{
	SimpleCircle circle, circle1(9);

	circle++;
	++circle1;
	cout << circle.GetRadius() << endl;
	cout << circle1.GetRadius() << endl;
	circle = circle1;
	cout << circle.GetRadius() << endl;
	cout << circle1.GetRadius() << endl;

	return 0;
}
