#include<iostream>
#include<array>
using namespace std;

//GLOBAL SCOPE DECLARATION
const int baris = 2;
const int kolom = 3;

void printArray(array<array<int, kolom>, baris> nilaiArray);

int main()
{
	array<array<int, kolom>, baris> matriks = { 1,2,3,4,5,6 };

	printArray(matriks);

	cout << "\nMATRIKS : \n";
	for (int i = 0; i < baris; i++)
	{
		cout << "[ ";
		for (int j = 0; j < kolom; j++)
		{
			cout << matriks[i][j] << " ";
		}
		cout << "]\n";
	}

	cin.get();
	return 0;
}

void printArray(array<array<int, kolom>, baris> nilaiArray)
{
	cout << "MATRIKS DENGAN FUNGSI\n";
	for (array<int, kolom> vektorBaris : nilaiArray)
	{
		cout << "[ ";
		for (int nilaiKolom : vektorBaris)
		{
			cout << nilaiKolom << " ";
		}
		cout << "]\n";
	}
}
