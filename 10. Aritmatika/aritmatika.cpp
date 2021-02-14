#include <iostream>
using namespace std;

void main()
{
	/*
		Jenis Jenis Aritmatika !
		+ untuk penjumlahan
		- untuk pengurangan
		/ untuk pembagian
		* untuk perkalian
		% untuk modulus atau sisa dari pembagian
	*/

	int a = 5;
	int b = 2;

	//Penjumlahan
	cout << "Penjumlahan : " << a << " + " << b << " = " << a + b << endl << endl;

	//Pengurangan
	cout << "Pengurangan : " << a << " - " << b << " = " << a - b << endl << endl;

	//Pembagian
	cout << "Pembagian : " << a << " / " << b << " = " << a / b << endl << endl;
	//Hasil pembagiannya adalah 2 karena bertipe data integer

	//Perkalian
	cout << "Perkalian : " << a << " * " << b << " = " << a * b << endl << endl;

	//Modulus
	cout << "Modulus : " << a << " % " << b << " = " << a % b << endl << endl;
	//Modulus cuma bisa digunakan untuk tipe data integer

	cin.get();
}
