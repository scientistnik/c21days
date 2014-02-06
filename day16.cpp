#include <iostream>
#include <fstream>

using namespace std;

int main(int argc, char *argv[])
{
	char name[80];
	if(argc == 1)
	{
		cout << "Input your Name: ";
		cin.get(name, 80);
	}
	else 
	{
		for(int i=0; *(argv[1]+i)!='\0'; i++,name[i]= '\0') 
			name[i]= argv[1][i];
	}
	cerr << name<< endl;
	clog << name << endl;
	cout<< name << endl;
	for(int i=0; i < argc-1; i++) cout<< argv[argc-i-1] << " ";
	cout << endl;

	ofstream fout(name);
	fout << "Hello World!";
	fout.close();

	ifstream fin(name);
	if(!fin) return 1;
	fin.get(name, 80);

	for(int i=0; name[i]!= '\0'; i++)
		if(name[i] >= '0' && name[i] <= 'z') cout << name[i];
	
	fin.close();
	return 0;
}
