#include <iostream>

using namespace std;

int input();

int main()
{
	int l(0), h(0);

	cout << "Entrez une longueur : " << endl;
	l = input();
	cout << "Entrez une hauteur : " << endl;
	h = input();

	for(int j = 0 ; j < h ; j++)
	{
		for(int i = 0 ; i < l ; i++)
		{
			if(j == 0 || j == (h - 1) || i == 0 || i == (l - 1))
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
	} while(n <= 0);

	return n;
}
