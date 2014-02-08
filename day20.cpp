#include <iostream>

using namespace std;

class Beep
{
	public:
		Beep(int i=10):itsBeep(i){}
		void GetThrow(){ cout << "Beep №" << itsBeep << endl;}
	private:
		int itsBeep;
};

class BeepChild : public Beep
{
	public:
		BeepChild(int i=20):Beep(i){}
};

int main(int agrc, char *argv[])
{
	try
	{
		throw BeepChild();
	}
	catch(Beep& Exception)
	{
		Exception.GetThrow();
	}
	catch(...)
	{
		cout << "BeepChild...";
	}
	return 0;
}
