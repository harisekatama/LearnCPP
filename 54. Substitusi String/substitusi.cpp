#include<iostream>
#include<string>
using namespace std;

int main()
{
	string kalimat1("VIKTORI ELEKTRO ITS");
	string kalimat2("TEKNIK KOMPUTER ITS ANGKATAN 2019");
	string kata;
	int index, panjang;
	char pilih;

	cout << "1 : " << kalimat1 << endl;
	cout << "2 : " << kalimat2 << endl;

	//SWAP STRING, MENUKAR ISI DARI STRING\
	string_pertama.swap(string_kedua);

	kalimat1.swap(kalimat2);
	cout << "\nSWAP STRING !\n";
	cout << "1 : " << kalimat1 << endl;
	cout << "2 : " << kalimat2 << endl;

	//REPLACE, MENGUBAH ISI DARI SUATU STRING\
	nama_string.replace(index, panjang, "KATA YANG MAU DIMASUKKAN !");

	cout << "\nREPLACE STRING !\n";
	cout << "Masukkan index   : ";
	cin >> index;
	cout << "Masukkan panjang : ";
	cin >> panjang;
	cout << "Masukkan kata    : ";
	cin >> kata;
	
	while (true)
	{
		cout << "String yang mau diubah ? (1/2)\n";
		cout << "Pilihan       : ";
		cin >> pilih;

		cout << "Hasil replace : ";
		if (pilih == '1')
		{
			kalimat1.replace(index, panjang, kata);
			cout << kalimat1 << endl;
			break;
		}
		else if (pilih == '2')
		{
			kalimat2.replace(index, panjang, kata);
			cout << kalimat2 << endl;
			break;
		}
		else
		{
			cout << "Warning : Input yang anda masukkan salah !\n";
		}
	}

	//INSERT STRING\
	nama_string.insert(index, "KATA YANG MAU DIMASUKKAN !");

	kalimat1.insert(index, kata);
	kalimat2.insert(index, kata);
	cout << "\nINSERT STRING\n";
	cout << kalimat1 << endl;
	cout << kalimat2 << endl;

	cin.get();
	return 0;
}
