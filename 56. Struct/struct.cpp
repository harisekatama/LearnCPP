#include<iostream>
#include<string>
using namespace std;

//STRUCT ADALAH DATA YANG DIBENTUK OLEH BEBERAPA DATA
struct mahasiswa 
{
	string nama;
	string prodi;
	string nrp;
	int semester;
};

int main()
{
	mahasiswa x;

	cout << "INPUT DATA !\n";
	cout << "Nama     : ";
	getline(cin, x.nama);
	cout << "Prodi    : ";
	getline(cin, x.prodi);
	cout << "NRP      : ";
	cin >> x.nrp;
	cout << "Semester : ";
	cin >> x.semester;

	cout << "\nOUTPUT DATA !\n";
	cout << "Nama     : " << x.nama << endl;
	cout << "Prodi    : " << x.prodi << endl;
	cout << "NRP      : " << x.nrp << endl;
	cout << "Semester : " << x.semester << endl;

	cin.get();
	return 0;
}
