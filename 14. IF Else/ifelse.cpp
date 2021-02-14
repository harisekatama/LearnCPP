#include<iostream>
using namespace std;

void main()
{
	int a;
	cout << "Masukkan nilai a : ";
	cin >> a;
	
	/*
		if (kondisi) //Jika kondisi bernilai true, maka statement akan dijalankan ! Begitupun sebalikanya
		{
			statement;
		}
		else if (kondisi)
		{
			statement;
		}
		else
		{
			statement;
		}
	*/

	if (a == 5)
	{
		cout << "Angka yang anda masukkan bernilai 5\n";
	}
	else if (a == 2)
	{
		cout << "Angka yang anda masukkan bernilai 2\n";
	}
	else
	{
		cout << "Angka yang anda masukkan bukan bernilai 2 maupun 5\n";
	}

	cout << "Program selesai dijalankan";
	cin.get();
}
