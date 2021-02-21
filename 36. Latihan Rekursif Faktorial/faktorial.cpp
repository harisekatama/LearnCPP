#include<iostream>
using namespace std;

int faktorial(int n)
{
	if (n <= 1)
	{
		return n;
	}
	return n * faktorial(n - 1);
}

int main()
{
	int n;
	cout << "Masukkan nilai n : ";
	cin >> n;

	cout << "\nFaktorial dari " << n << " adalah : " << faktorial(n) << endl;

	cin.get();
	return 0;
}
