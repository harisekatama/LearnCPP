#include <iostream>
using namespace std;

void main()
{
	/*
		Jenis Jenis Logika Digital !
		&& untuk Logika and
		|| untuk logika or
		!  untuk logika not
	*/

	int a = 2;
	int b = 5;
	bool hasil;

	cout << "Nilai a = " << a << endl;
	cout << "Nilai b = " << b << endl << endl;

	//Logika NOT
	hasil = !(a == b);
	cout << "!(" << a << " == " << b << " ) ? Jawaban : " << hasil << endl << endl;

	//Logika AND
	cout << "LOGIKA AND !\n";
	hasil = (a == 2) && (b == 5);	//True && True
	cout << "True && True   : " << hasil << endl;
	hasil = (a == 2) && (b == 9);	//True && False
	cout << "True && False  : " << hasil << endl;
	hasil = (a == 5) && (b == 5);	//False && True
	cout << "False && True  : " << hasil << endl;
	hasil = (a == 5) && (b == 2);	//False && False
	cout << "False && False : " << hasil << endl << endl;

	//Logika OR
	cout << "LOGIKA OR !\n";
	hasil = (a == 2) || (b == 5);	//True && True
	cout << "True || True   : " << hasil << endl;
	hasil = (a == 2) || (b == 9);	//True && False
	cout << "True || False  : " << hasil << endl;
	hasil = (a == 5) || (b == 5);	//False && True
	cout << "False || True  : " << hasil << endl;
	hasil = (a == 5) || (b == 2);	//False && False
	cout << "False || False : " << hasil << endl << endl;

	cin.get();

}
