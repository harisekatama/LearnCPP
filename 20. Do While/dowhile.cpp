#include<iostream>
using namespace std;

int main()
{
	int a;
	cout << "Masukkan nilai a : ";
	cin >> a;

	/*
		//Pada do while at least akan menjalankan statement minimal 1 kali walaupun kondisi tidak terpenuhi
		//Jikapun kondisi terpenuhi maka statemen akan terus dijalankan sampai kondisi tidak terpenuhi

		do
		{
			statement;
		}
		while (kondisi);
	*/

	do
	{
		cout << "Halloo ini iterasi ke : " << a << endl;
		a++;
	} 
	while (a <= 5);
	
	cout << "\nProgram selesai dijalankan !\n";
	cin.get();
	return 0;
}
