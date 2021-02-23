#include<iostream>
using namespace std;

int main()
{
	/*
	//CARA DEKLARASI ARRAY
	int nilai[5];

	//CARA INISIALISASI ARRAY
	nilai[0] = 1;
	nilai[1] = 2;
	nilai[2] = 3;
	nilai[3] = 4;
	nilai[4] = 5;
	*/
	
	//BISA JUGA SEPERTI INI !
	int nilai[5] = { 1,2,3,4,5 };
	

	cout << "Nilai Array ke 1 : " << nilai[0] << " || Address Array nilai[0] : " << &nilai[0] << endl;
	cout << "Nilai Array ke 2 : " << nilai[1] << " || Address Array nilai[1] : " << &nilai[1] << endl;
	cout << "Nilai Array ke 3 : " << nilai[2] << " || Address Array nilai[2] : " << &nilai[2] << endl;
	cout << "Nilai Array ke 4 : " << nilai[3] << " || Address Array nilai[3] : " << &nilai[3] << endl;
	cout << "Nilai Array ke 5 : " << nilai[4] << " || Address Array nilai[4] : " << &nilai[4] << endl;

	//CARA MEMANIPULASI/MENGUBAH NILAI DARI ARRAY DENGAN POINTER
	int* ptr = nilai;
	*(ptr + 2) = 8;

	//CARA MEMANIPULASI/MENGUBAH NILAI DARI ARRAY TANPA POINTER
	nilai[3] = 9;

	cout << "\nNilai Array ke 1 : " << nilai[0] << " || Address Array nilai[0] : " << &nilai[0] << endl;
	cout << "Nilai Array ke 2 : " << nilai[1] << " || Address Array nilai[1] : " << &nilai[1] << endl;
	cout << "Nilai Array ke 3 : " << nilai[2] << " || Address Array nilai[2] : " << &nilai[2] << endl;
	cout << "Nilai Array ke 4 : " << nilai[3] << " || Address Array nilai[3] : " << &nilai[3] << endl;
	cout << "Nilai Array ke 5 : " << nilai[4] << " || Address Array nilai[4] : " << &nilai[4] << endl;

	//CARA MENCARI UKURAN DARI ARRAY
	cout << "\nUkuran dari array        : " << sizeof(nilai) << " Byte" << endl;

	//CARA MENCARI JUMLAH MEMBER DARI ARRAY
	cout << "Jumlah member dari array : " << sizeof(nilai) / sizeof(int) << " Buah" << endl;

	cin.get();
	return 0;
}
