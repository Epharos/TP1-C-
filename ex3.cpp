#include <iostream>

using namespace std;

int input();
int ask();
int max(int a, int b);
int min(int a, int b);

int main()
{
	cout << "Donnez le nombre de nombres : " << endl;
	int n = input();

	double d = ask();

	double average(d), mini(d), maxi(d);

	for(int i = 1 ; i < n ; i++)
	{
		d = ask();

		average = (average + d) / 2;

		mini = min(mini, d);
		maxi = max(maxi, d);
	}

	cout << "Mini : " << mini << endl;
	cout << "Maxi : " << maxi << endl;
	cout << "Moyenne : " << average << endl;

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
			cout << "Désolé, n est négatif" << endl;
		}
	} while(n <= 0);

	return n;
}

int ask()
{
	double d(0);

	cout << "Entrez une valeur : " << endl;
	cin >> d;

	return d;
}

int max(int a, int b)
{
	if(a > b)
	{
		return a;
	}

	return b;
}

int min(int a, int b)
{
	if(a < b)
	{
		return a;
	}

	return b;
}
