#include<iostream>
using namespace std;

int main()
{
	double a, b;
	char aritmatika;

	cout << "PROGRAM KALKULATOR SEDERHANA\n\n";

	cout << "Masukkan nilai pertama : ";
	cin >> a;
	cout << "Masukkan nilai kedua : ";
	cin >> b;
	cout << "Masukkan operator aritmatika : ";
	cin >> aritmatika;

	switch (aritmatika)
	{
		case '+':
			cout << "Hasil dari : " << a << " + " << b << " = " << a + b << endl;
			break;
		case '-':
			cout << "Hasil dari : " << a << " - " << b << " = " << a - b << endl;
			break;
		case '*':
			cout << "Hasil dari : " << a << " * " << b << " = " << a * b << endl;
			break;
		case '/':
			cout << "Hasil dari : " << a << " / " << b << " = " << a / b << endl;
			break;
		default:
			cout << "Peringatan : Operator aritmatika yang anda masukkan salah !\n";
	}

	cin.get();
	return 0;
}
