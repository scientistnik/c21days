#include <iostream>

using namespace std;

float Div( unsigned int i, unsigned int j);

int main()
{
	unsigned int i, j;
	float k;
	cout << "Enter quetient: ";
	cin >> i;
	cout << "Enter divider: ";
	cin >> j;
	k = Div(i,j);
	cout << "Result: " << k;

	return 0;
}

float Div( unsigned int i, unsigned int j)
{
	if(j)	return (float)i/j;
	else return 0;
}
