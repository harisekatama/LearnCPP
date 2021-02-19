#include<iostream>
#include<cstdlib> //Mengandung fungsi rand (fungsi untuk random)
using namespace std;

int main()
{
	char lanjut;
	while (true)
	{
		cout << "Lempar dadu ? (y/n) \n";
		cout << "Jawaban : ";
		cin >> lanjut;
		if (lanjut == 'y')
		{
			cout << "Nilai dadu : " << 1 + rand() % 6 << "\n\n";
		}
		else if (lanjut == 'n')
		{
			break;
		}
		else
		{
			cout << "Peringatan : Inputan yang anda masukkan salah !\n\n";
		}
	}
	cout << "\nProgram selesai dijalankan !\n";
	cin.get();
	return 0;
}
