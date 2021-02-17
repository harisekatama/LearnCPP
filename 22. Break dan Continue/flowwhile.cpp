#include<iostream>
using namespace std;

int main()
{
	cout << "PEMBAHASAN BREAK; DAN CONTINUE;\n";

	cout << "\n menggunakan break;\n";
	int a = 1;
	while (a <= 10)
	{
		if (a == 5)
		{
			break;
		}
		cout << "While iterasi ke : " << a << endl;
		a++;
	}

	cout << "\n menggunakan continue;\n";
	int b = 0;
	while (b <= 10)
	{
		b++;
		if (b == 5)
		{
			continue;
		}
		cout << "While iterasi ke : " << b << endl;
		//b++; //Jika b++ nya dibawah, maka while ini akan berputar ditempat karena nilai tetap 5 dan akan dicontinue terus
		       //Maka daripada itu b++ harus dipindahkan ke atas! Minimal diatas break;
	}

	cout << "\nIni akhir dari program !\n";
	cin.get();
	return 0;
}
