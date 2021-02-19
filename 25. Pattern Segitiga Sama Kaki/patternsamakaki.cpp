#include <iostream>
using namespace std;

int main()
{
	int n;
	cout << "PATTERN SEGITIGA SAMA KAKI !\n\n";
	cout << "Masukkan nilai n : ";
	cin >> n;

	cout << "\nPola 1 : \n";
	for (int i = 1; i <= n; i++)
	{
		for (int j = n; j > i; j--)
		{
			cout << "  ";
		}
		for (int k = 1; k <= (2 * i - 1); k++)
		{
			cout << "* ";
		}
		cout << endl;
	}

	cout << "\nPola 2 : \n";
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j < i; j++)
		{
			cout << "  ";
		}
		for (int k = n; k >= (2 * i - n); k--)
		{
			cout << "* ";
		}
		cout << endl;
	}

	cout << "\nPola 3 : \n";
	for (int i = 1; i <= n; i++)
	{
		for (int j = n; j > i; j--)
		{
			cout << "  ";
		}
		for (int k = 1; k <= (2 * i - 1); k++)
		{
			cout << "* ";
		}
		cout << endl;
	}
	n -= 1;
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			cout << "  ";
		}
		for (int k = n; k >= (2 * i - n); k--)
		{
			cout << "* ";
		}
		cout << endl;
	}

}

/*
CONTOH OUTPUT PROGRAMNYA !

Pola 1 :
        *
      * * *
    * * * * *
  * * * * * * *
* * * * * * * * *

Pola 2 :
* * * * * * * * *
  * * * * * * *
    * * * * *
      * * *
        *

Pola 3 :
        *
      * * *
    * * * * *
  * * * * * * *
* * * * * * * * *
  * * * * * * *
    * * * * *
      * * *
        *
*/
