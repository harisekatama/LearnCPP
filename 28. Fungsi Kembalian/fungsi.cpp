#include<iostream>
using namespace std;

//INI FUNGSINYA!
int kuadrat(int x)
{
	return x * x;
}

int jumlah(int x, int y)
{
	return x + y;
}

int jumlahkuadrat(int a, int b)
{
	return kuadrat(a) + kuadrat(b);
}

int main()
{
	int a, b;
	cout << "Masukkan nilai a : ";
	cin >> a;
	cout << "Masukkan nilai b : ";
	cin >> b;

	cout << "\nNilai kuadrat dari a : " << kuadrat(a) << endl;
	cout << "Nilai kuadrat dari b : " << kuadrat(b) << endl;
	cout << "Jumlah kuadratnya    : " << jumlahkuadrat(a, b) << endl;
	cout << "Jumlah dari a + b    : " << jumlah(a, b) << endl;

	cin.get();
	return 0;
}
