#include<iostream>
using namespace std;

int main()
{
	int a;
	
	cout << "Masukkan nilai a : ";
	cin >> a;

	/*
		//Ketika kondisi terpenuhi atau true, maka statement dijalankan dan akan terus dilooping sampai kondisi tidak terpenuhi
		//Jika kondisi tidak terpenuhi atau false, maka statement dilewati
		while (kondisi)
		{
			statement;
		}
	*/

	while (a < 9)
	{
		cout << "Nilai dari a : " << a << endl;
		cout << "MANTAP !\n\n";
		a++;
	}

	cout << "Program selesai";
	cin.get();
	return 0;
}
