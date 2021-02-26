#include<iostream>
#include<array>
#include<algorithm>
using namespace std;

const size_t arraySize = 10;

void printArray(array<int, arraySize> angka);
void printArray(array<char, arraySize> huruf);

int main()
{
	array<int, arraySize>angka = { 5,4,6,3,7,2,8,1,9,0 };
	array<char, arraySize>huruf = { 'q','w','e','r','t','y','u','i','o','p' };

	cout << "SEBELUM DI SORT !\n";
	printArray(angka);
	printArray(huruf);

	sort(angka.begin(), angka.end());
	sort(huruf.begin(), huruf.end());
	
	cout << "\nSETELAH DI SORT !\n";
	printArray(angka);
	printArray(huruf);

	cin.get();
	return 0;
}

/*
void nama_fungsi(array<int, ukuran_array> nama_array)
{
	statement;
	for (jenis_variabel nama_variabel : nama_array)
	{
		statement;
	}
	statement;
}
*/

void printArray(array<int, arraySize> angka)
{
	cout << "Array : ";
	for (int a : angka)
	{
		cout << a << " ";
	}
	cout << "\n";
}

void printArray(array<char, arraySize> huruf)
{
	cout << "Array : ";
	for (char a : huruf)
	{
		cout << a << " ";
	}
	cout << "\n";
}
