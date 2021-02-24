#include<iostream>
#include<array> //STANDARD LIBRARY UNTUK ARRAY
using namespace std;

int main()
{
	/*
		CARA MEMBUAT ARRAY DENGAN MENGGUNAKAN STANDARD LIBRARY
		array < int, jumlah_array > nama_array
	*/
	
	array<int, 5>nilai;
	
	for (int i = 0; i < 5; i++)
	{
		nilai[i] = i + 2;
		cout << "Value dari nilai[" << i << "] : " << nilai[i] << " , Address : " << &nilai[i] << endl;
	}

	//UKURAN DARI ARRAY
	cout << "\nUkuran array : " << nilai.size() << " Byte\n";
	
	//ADDRESS AWAL DARI ARRAY
	cout << "\nAddress awal  : " << nilai.begin() << endl;

	//ADDRESS AKHIR DARI ARRAY
	cout << "\nAddress akhir : " << nilai.end() << endl;

	//COUT VALUE DENGAN INDEX
	cout << "Value array ke 2 : " << nilai.at(2) << endl;

	cin.get();
	return 0;
}
