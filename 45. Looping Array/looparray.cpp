#include<iostream>
#include<array>
using namespace std;

int main()
{
	/*
		LOOPING UNTUK ARRAY
		for(variabel nama_variabel : nama_array)
		{
			statement;
		}
	*/
	
	array<int, 10>arrayNilai = { 0,1,2,3,4,5,6,7,8,9 };

	cout << "LOOPING ARRAY\n";
	for (int nilai : arrayNilai)
	{
		nilai += 10;//INI TIDAK AKAN MENGUBAH VALUE ASLINYA DARI ARRAY, INI HANYA MENGUBAH VALUE DI LOOPING INI
		cout << "Address : " << &nilai << " , Value : " << nilai << endl;
		nilai -= 25;//INI TIDAK AKAN BERPENGARUH KE APAPUN ALIAS USELESS
	}

	cout << "\nMANIPULASI VALUE DARI ARRAY !\n";
	//MEMANIPULASI/MENGUBAH VALUE ARRAY MENGGUNAKAN LOOPING
	for (int& nilaiRef : arrayNilai)
	{
		nilaiRef *= 2;//INI AKAN MENGUBAH VALUE ASLINYA DARI ARRAY
		cout << "Address : " << &nilaiRef << " , Value : " << nilaiRef << endl;
		nilaiRef -= 25;//INI JUGA AKAN MEMPENGARUHI VALUE ASLINYA DARI ARRAY
	}

	cout << "\nBUKTI BAHWA VALUE DARI ARRAY TELAH BERUBAH !\n";
	//PEMBUKTIAN BAHWA VALUE DARI ARRAY TELAH BERUBAH
	for (int nilai : arrayNilai)
	{
		cout << "Address : " << &nilai << " , Value : " << nilai << endl;
	}

	cin.get();
	return 0;
}
