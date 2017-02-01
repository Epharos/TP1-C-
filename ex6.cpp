#include <iostream>

using namespace std;

int input();

int main()
{	
	int size(0);
	cout << "Entrez la taille de la croix (impaire et positive)" << endl;
	size = input();

	for(int i = 0 ; i < size ; i++)
	{
		for(int j = 0 ; j < size ; j++)
		{
			if(i == j || (size - i - 1) == j)
			{
				cout << "*";
			}
			else
			{
				cout << " ";
			}
		}

		cout << endl;
	}

	return 0;
}

int input()
{
	int n(0);

	do
	{
		cin >> n;

		if(n <= 0)
		{
			cout << "Désolé, la taille est négative :(" << endl;
		}
		else if(!(n & 1)) //opérateur binaire bit à bit permettant de vérifier la parité (équivalent de "n % 2 == 0")
		{
			cout << "Désolé, le nombre est pair :(" << endl;
		}
	} while(n <= 0 || !(n & 1));

	return n;
}