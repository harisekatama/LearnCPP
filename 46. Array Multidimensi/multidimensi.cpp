#include<iostream>
using namespace std;

void printArray(int*, int baris, int kolom);
void addressArray(int*, int baris, int kolom);

int main()
{
	/*
		ARRAY MULTIDIMENSI //array multidimensi itu bentuknya seperti matriks!
		int array [baris] [kolom] = {.....};

		EXAMPLE :
		int matriks[2][2] = { 1,2,3,4 };

		PATTERN :
		[1 2]
		[3 4]
 	*/
	const int baris = 2;
	const int kolom = 2;
	int matriks[baris][kolom] = { 2,3,5,7 };

	printArray(*matriks, baris, kolom);

	cout << "\nMATRIKS\n";
	cout << "[ " << matriks[0][0] << " " << matriks[0][1] << " ]" << endl;
	cout << "[ " << matriks[1][0] << " " << matriks[1][1] << " ]" << endl;

	cout << endl;
	addressArray(*matriks, baris, kolom);

	cout << "\nADDRESS ARRAY : \n";
	cout << "Address matriks[0][0] : " << &matriks[0][0] << endl;
	cout << "Address matriks[0][1] : " << &matriks[0][1] << endl;
	cout << "Address matriks[1][0] : " << &matriks[1][0] << endl;
	cout << "Address matriks[1][1] : " << &matriks[1][1] << endl;

	cin.get();
	return 0;
}

void printArray(int* ptrMatriks, int baris, int kolom)
{
	int index = 0;
	cout << "MATRIKS DENGAN FUNGSI\n";
	for (int i = 0; i < baris; i++)
	{
		cout << "[ ";
		for (int j = 0; j < kolom; j++)
		{
			cout << *(ptrMatriks + index) << " ";
			index++;
		}
		cout << "]\n";
	}
}

void addressArray(int* ptrMatriks, int baris, int kolom)
{
	int index = 0;
	cout << "\nADDRESS ARRAY DENGAN FUNGSI\n";
	for (int i = 0; i < baris; i++)
	{
		for (int j = 0; j < kolom; j++)
		{
			cout << "Address matriks[" << i << "][" << j << "] : " << (ptrMatriks + index) << endl;
			index++;
		}
	}
}
