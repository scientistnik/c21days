#include <iostream>

using namespace std;

class Variable
{
	public:
		Variable(int i):itsVar1(i){ itsStaticVar++;}
		~Variable(){itsStaticVar--;}
		int GetVar2() const { return itsVar2; }
		int GetVar3() const { return itsVar3; }
		int GetVar1() const { return itsVar1; }
		static int GetStaticVar(void) { return itsStaticVar;}
	private:
		int itsVar1, itsVar2, itsVar3;
		static int itsStaticVar;
};

int Variable::itsStaticVar = 0;

int main(void)
{
	Variable *abs[3];
	int (Variable::*pGet)()const = 0;


	for(int i=0; i< 3; i++)
	{
		abs[i] = new Variable(i+1);
		pGet = &Variable::GetVar1;
		cout<< "Dinamic var1: " << (abs[i]->*pGet)() << endl;
		pGet = &Variable::GetVar2;
		cout<< "Dinamic var2: " << (abs[i]->*pGet)() << endl;
		pGet = &Variable::GetVar3;
		cout<< "Dinamic var3: " << (abs[i]->*pGet)() << endl;
	}
	
	cout<< "Quantity objects Variable: " << (abs[0]->GetStaticVar)() << endl;

	for(int i=0; i<3; i++)
	{
		Variable *buf = abs[i];
		cout << "\nAnd now: " << buf->GetStaticVar() << endl;
		delete buf;
	}

	return 0;
}
