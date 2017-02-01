#include <iostream>
#include <math.h>

using namespace std;

int input();
bool prime(int value);

int main()
{
	int n(0);

	while(true)
	{
		cout << "Entrez un nombre supérieur à 1" << endl;
		n = input();

		if(prime(n))
		{
			cout << "Le nombre " << n << " est premier" << endl;
		}
		else
		{
			cout << "Le nombre " << n << " n'est pas premier" << endl;
		}
	}

	return 0;
}

int input()
{
	int n(0);

	do
	{
		cin >> n;

		if(n <= 1)
		{
			cout << "Supérieur à 1 !" << endl;
		}
	} while(n <= 1);

	return n;
}

bool prime(int value)
{
	for(int i = 2 ; i <= sqrt(value) ; i++)
	{
		if(value % i == 0)
		{
			return false;
		}
	}

	return true;
}
