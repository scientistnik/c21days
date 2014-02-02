#include <iostream>

using namespace std;

class Shape
{
	public:
		Shape(){}
		Shape(const Shape& rhs){}
		virtual ~Shape(){}
		virtual void Function(int i);
};

class Rectangle : public Shape
{
	public: 
		Rectangle(int length, int width):itsLength(length),itsWidth(width){}
		Rectangle(const Rectangle& rhs):Shape(rhs){}
		virtual ~Rectangle(){}
		virtual Shape* Clone(){ return new Rectangle(*this);}
	protected:
		int itsLength, itsWidth;
};

class Square : public Rectangle
{
	public:
		Square(int length):Rectangle(length,5){}
		virtual ~Square(){}
		Square(const Square& rhs):Rectangle(rhs){}
		virtual Rectangle* Clone(){ return new Square(*this);}
};

int main(void)
{
	return 0;
}
