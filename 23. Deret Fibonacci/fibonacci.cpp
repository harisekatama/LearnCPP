#include<iostream>
using namespace std;

int main()
{
	/*
		fn1 = f(n-1);
		fn2 = f(n-2);
	*/

	int n, fn1, fn2, hasil;
	fn1 = 0;
	fn2 = 1;

	cout << "DERET FIBONACCI !\n";
	cout << "Masukkan nilai n : ";
	cin >> n;
	cout << endl;

	for (int i = 1; i <= n; i++)
	{
		hasil = fn1 + fn2;
		fn2 = fn1;
		fn1 = hasil;
		cout << hasil << " ";
	}

	cout << "\n\nDeret Fibonacci ke " << n << " adalah " << hasil << endl;

	cin.get();
	return 0;
}
