#include<iostream>
#include<string>
using namespace std;

int main()
{
	string kata("VIKTORI");
	string ptn("ITS");

	//MENAMPILKAN DATA STRING
	cout << kata << " " << ptn << "\n\n";

	//MENGAMBIL KARAKTER BERDASARKAN INDEX
	cout << "Index kata ke 0 : " << kata[0] << endl;
	cout << "Index kata ke 1 : " << kata[1] << endl;
	cout << "Index kata ke 2 : " << kata[2] << endl;
	cout << "Index kata ke 3 : " << kata[3] << endl;
	cout << "Index kata ke 4 : " << kata[4] << endl;
	cout << "Index kata ke 5 : " << kata[5] << endl;
	cout << "Index kata ke 6 : " << kata[6] << endl;
	cout << "Index kata ke 7 : " << kata[7] << endl; //INI MEMANG KOSONG KARENA KARAKTERNYA CUMA 7 !
	cout << endl;
	cout << "Index ptn ke 0  : " << ptn[0] << endl;
	cout << "Index ptn ke 1  : " << ptn[1] << endl;
	cout << "Index ptn ke 2  : " << ptn[2] << endl;

	//MENGUBAH KARAKTER BERDASARKAN INDEX
	ptn[2] = 'B';
	cout << endl;
	for (int i = 0; i < 7; i++)
	{
		cout << "Index kata ke " << i << " : " << kata[i] << endl;
	}
	cout << endl;
	for (int i = 0; i < 3; i++)
	{
		cout << "Index ptn ke " << i << "  : " << ptn[i] << endl;
	}
	ptn[2] = 'S';

	//MENYAMBUNG atau CONCATENATION
	string kata2(kata + " ELEKTRO!"); //INI CARA PERTAMA
	cout << endl << kata2 << endl;

	kata2.append(" " + ptn);          //INI CARA KEDUA
	cout << endl << kata2 << endl;

	string kata3("SURABAYA");
	kata2 += " " + kata3;             //INI CARA KETIGA
	cout << endl << kata2 << endl;

	cin.get();
	return 0;
}
