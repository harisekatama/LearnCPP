//Pattern Segitiga Sama Kaki
#include <iostream>
using namespace std;

int main()
{
	int n;

	cout << "Masukkan nilai n : ";
	cin >> n;

	cout << "\nPola 1 : \n";
	for (int i = 1; i <= n; i++)
	{
		for (int j = n; j >= i; j--)
		{
			cout << "  ";
		}
		for (int k = 1; k <= (2*i-1); k++)
		{
			cout << "* ";
		}
		cout << "\n";
	}

	/*
	cout << "\nPola 2 : \n";
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j < i; j++)
		{
			cout << "* ";
		}
		for (int k = n; k >= (2 * i - n); k--)
		{
			cout << "* ";
		}
		cout << endl;
	}
	*/

	cin.get();
	return 0;
}
