#include <iostream>
using namespace std;

int Keliling(int panjang, int lebar)
{
	return 2 * (panjang + lebar);
}

int Luas(int panjang, int lebar)
{
	return panjang * lebar;
}

void tampilkan(int nilai)
{
	cout << nilai << endl;
}

int main()
{
	int panjang, lebar, hasil;
	cout << "Masukkan nilai panjang   : ";
	cin >> panjang;
	cout << "Masukkan nilai lebar     : ";
	cin >> lebar;

	hasil = Luas(panjang, lebar);
	cout << "Luas persegi panjang     : ";
	tampilkan(hasil);

	hasil = Keliling(panjang, lebar);
	cout << "Keliling persegi panjang : ";
	tampilkan(hasil);
	

	cin.get();
	return 0;
}
