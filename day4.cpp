#include <iostream>

using namespace std;

int main()
{
	int a, b, c;
	cout << "Please enter three numbers\n";
	cout << "a: ";
	cin >> a;
	cout << "\nb: ";
	cin >> b;
	cout << "\nc: ";
	cin >> c;
	
	if(c = (a-b))
	{
		cout << a;
		cout << "minus b: ";
		cout << b;
		cout << "equals c: ";
		cout << c << endl;
	}
	else
		cout << "a-b does not equal c: " << endl;
	return 0;
}
