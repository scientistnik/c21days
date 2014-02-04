#include <iostream>

using namespace std;

class Rocket
{};

class Airplane
{
};

class Jatplane : public Rocket, public Airplane
{};

class _747: public Jatplane
{};

int main(void)
{
	_747 pr;
	return 0;
}
