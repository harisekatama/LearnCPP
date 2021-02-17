#include<iostream>
using namespace std;

int main()
{
	/*
	        //Jika kondisi tidak terpenuhi maka for loop akan dilewati/statement tidak dijalankan
		//Jika kondisi terpenuhi maka statement akan dijalankan hingga kondisi tersebut tidak terpenuhi
		for ( inisialisasi ; kondisi ; increment/decrement )
		{
			statement;
		}
	*/
	int n;
	cout << "Masukkan nilai n : ";
	cin >> n;
	cout << "\nAwal dari for loop !\n";

	for (int i = 1; i <= n; i++)
	{
		cout << "For Loop 1 : Iterasi ke => " << i << endl;
	}
	cout << endl;
	for (int i = 10; i >= 1; i--)
	{
		cout << "For Loop 2 : Iterasi ke => " << i << endl;
	}
	cout << endl;
	for ( /*ini dikosongin karena n nya sudah diinisialisasi*/ ;n <= 10; n += 2)
	{
		cout << "For Loop 3 : Iterasi n ke => " << n << endl;
	}
	cout << endl;

	int total = 0;
	for (int i = 1; i <= 10; i++, total += i)
	{
		cout << "For Loop 4 : Iterasi ke => " << i << " || Nilai total : " << total << endl;
	}
	
	/*
		LOGIKA INI SAMA SEPERTI LOOP 4

		for (int i = 0; i <= 10; i++)
		{
			total += i;
			cout << "Something";
		}
	*/

	cout << "\nAkhir dari program\n";
	cin.get();
	return 0;
}
