#include <iostream>

using namespace std;

class CAT
{
	public:
		CAT(int age) { itsAge = age;}
		~CAT(){}
		int GetAge() const {return itsAge;}
	private:
		int itsAge;
};

CAT * MakeCat(int age);

int main(void)
{
	int i;
	int *p = &i;
	int &r = i;
	int age = 7;
	CAT *Boots = MakeCat(age);
	if(Boots != NULL)
	cout << "Boots is " << Boots->GetAge() << " years old!\n";

	return 0;
}

CAT * MakeCat(int age)
{
	CAT * pCat = new CAT(age);
	return pCat;
}
