#include<iostream>
using namespace std;

long long fibonacci(long n)
{
	if (n <= 1)
	{
		cout << " " << n;
		return n;
	}
	else
	{
		cout << " " << n;
		return fibonacci(n - 1) + fibonacci(n - 2);
	}
}

int main()
{
	int n;
	cout << "Masukkan nilai n : ";
	cin >> n;

	cout << "\nFibonacci dari " << n << " adalah : " << fibonacci(n) << endl;

	cin.get();
	return 0;
}
