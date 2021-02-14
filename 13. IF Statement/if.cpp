#include<iostream>
using namespace std;

void main()
{
	int a;
	cout << "Masukkan nilai a : ";
	cin >> a;
	
  
        //Jika kondisi bernilai true, maka statement akan dijalankan! Begitupun sebalikanya!
        //Kondisi dalam bentuk boolean
  
	/*
		if (kondisi) 
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
	else
	{
		cout << "Angka yang anda masukkan bukan 5\n";
	}
  
	cout << "Program selesai dijalankan";
	cin.get();
}
