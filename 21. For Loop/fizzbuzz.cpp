#include<iostream>
using namespace std;

void main()
{
	int n;
	
	cout << "Masukan nilai n : ";
	cin >> n;

	for (int i = 1; i <= n; i++)
	{
		if (i % 15 == 0)
		{
			cout << "\nFizz Buzz";
		}
		else if (i % 3 == 0 and i % 15 != 0)
		{
			cout << "\nFizz";
		}
		else if (i % 5 == 0 and i % 15 != 0)
		{
			cout << "\nBuzz";
		}
		else
			cout << endl << i;
	}
}
