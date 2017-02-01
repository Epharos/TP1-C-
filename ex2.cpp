#include <iostream>
#include <math.h>

using namespace std;

int input();
bool prime(int value);

int main()
{
	int n(0);

	cout << "Donnez la valeur maximale à tester : " << endl;
	n = input();
	cout << "Calcul de primalité sur ]1;" << n << "]" << endl;

	for(int i = 2 ; i <= n ; i += 2) //incrément de deux pour tester tous les nombres impairs (les nombres pairs étant non premiers)
	{
		if (i >= 5)
		{
			cout << (i - 1) << " n'est pas premier" << endl;
		}

		if(prime(i))
		{
			cout << i << " est premier" << endl;
		}
		else
		{
			cout << i << " n'est pas premier" << endl;
		}

		if(i == 2) //si i vaut 2 (premier tour de boucle)
		{
			i--; //on enlève 1 pour que i soit égal à 1 (pour l'incrément de 2 et donc passer à 3)
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

		if(n < 0)
		{
			cout << "Désolé, n est négatif" << endl;
		}
		else if(n <= 1)
		{
			cout << "n doit être supérieur à 1 !" << endl;
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
