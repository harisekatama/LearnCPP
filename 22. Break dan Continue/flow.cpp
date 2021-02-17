#include<iostream>
using namespace std;

int main()
{
	cout << "PEMBAHASAN BREAK; DAN CONTINUE;\n";

	cout << "\nIni menggunakan break;\n";
	for (int i = 1; i <= 10; i++)
	{
		if (i == 5)
		{
			break; //Jika i==5, maka for loop ini akan dihentikan dan tidak mengeluarkan cout yang ke 5,6,7, dan seterusnya!
		}
		cout << "Nilai dari i : " << i << endl;
	}
	cout << "\nIni menggunakan continue;\n";
	for (int i = 1; i <= 10; i++)
	{
		if (i == 5)
		{
			continue; //Jika i==5, maka hanya nilai 5 yang dilewati sedangkan yang ke 6,7,8 dan seterusnya tetap dijalankan !
		}
		cout << "Nilai dari i : " << i << endl;
	}

	cout << "\nAkhir dari program\n";
	cin.get();
	return 0;
}
