#include <iostream>

using namespace std;

int input();

int main()
{
	int l(0);

	cout << "Entrez la taille du carré : " << endl;
	l = input();

	for(int i = 0 ; i < l ; i++)
	{
		for(int j = 0 ; j < l ; j++)
		{
			cout << "*";
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