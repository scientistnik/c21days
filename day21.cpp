#ifndef __DAY20_CPP__
#define __DAY20_CPP__

#include <iostream>

using namespace std;

#define DEBAG_LEVEL	2

#if DABAG_LEVEL < 1
#define assert()	cout << "Error in file: " << __FILE__ << " in line: "<< __LINE__;
#else
#if DEBAG_LEVEL == 1
#define assert()	cout << "Error ";
#else
#define assert()
#endif
#endif

#ifdef DABAG
#define DPrint(x)	\
#else
#define DPrint(x)
#endif

int main(int argc, char *argv[])
{
	int a, b, c=0;
	assert();

	cout << "\nEnter number a: ";
	cin >> a;
	cout << "\nEnter number b: ";
	cin >> b;

	while( (a^b) != (a|b) )
	{
		c = (a&b)<<1;
		b = a^b;
		a = c;
	}
	c = a|b;
	cout << "a + b = " << c;

	return 0;
}

#endif
