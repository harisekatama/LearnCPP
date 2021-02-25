#include<iostream>
using namespace std;

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

	cout << "MATRIKS\n";
	cout << "[ " << matriks[0][0] << " " << matriks[0][1] << " ]" << endl;
	cout << "[ " << matriks[1][0] << " " << matriks[1][1] << " ]" << endl;

	cout << "\nADDRESS ARRAY : \n";
	cout << "Address matriks[0][0] : " << &matriks[0][0] << endl;
	cout << "Address matriks[0][1] : " << &matriks[0][1] << endl;
	cout << "Address matriks[1][0] : " << &matriks[1][0] << endl;
	cout << "Address matriks[1][1] : " << &matriks[1][1] << endl;

	cout << "\nADDRESS ARRAY : \n";
	for (int i = 0; i < baris; i++)
	{
		for (int j = 0; j < kolom; j++)
		{
			cout << "Address matriks[" << i << "][" << j << "] : " << &matriks[i][j] << endl;
		}
	}
	cin.get();
	return 0;
}
