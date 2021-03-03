#include<iostream>
#include<string>
using namespace std;

struct aktor
{
	string nama;
	int tahun_lahir;
};

struct film
{
	string judul;
	string genre;
	int tahun;

	//NESTING STRUCT
	aktor pemeran1;
	aktor pemeran2;
};

int main()
{
	aktor aktor1, aktor2;
	film film1, film2;

	//UNTUK AKTOR 1
	aktor1.nama = "Haris Rahardian";
	aktor1.tahun_lahir = 2000;
	//UNTUK AKTOR 2
	aktor2.nama = "Setiadi Ekatama";
	aktor2.tahun_lahir = 2001;

	//UNTUK FILM 1
	film1.judul = "Pengabdi Himpunan";
	film1.genre = "Dokumenter";
	film1.tahun = 2021;
	film1.pemeran1 = aktor1;
	film1.pemeran2 = aktor2;

	//UNTUK FILM 2
	film2.judul = "Drama Kaderisasi";
	film2.genre = "Horror";
	film2.tahun = 2020;
	film2.pemeran1 = aktor2;

	cout << "Judul Film   : " << film1.judul << endl;
	cout << "Genre Film   : " << film1.genre << endl;
	cout << "Tahun dibuat : " << film1.tahun << endl;
	cout << "Pemeran : \n" << film1.pemeran1.nama << endl << film1.pemeran2.nama << endl << endl;

	cout << "Judul Film   : " << film2.judul << endl;
	cout << "Genre Film   : " << film2.genre << endl;
	cout << "Tahun dibuat : " << film2.tahun << endl;
	cout << "Pemeran : \n" << film2.pemeran1.nama << endl << endl;

	cin.get();
	return 0;
}
