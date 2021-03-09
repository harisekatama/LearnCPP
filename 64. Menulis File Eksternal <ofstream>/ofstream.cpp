#include<iostream>
#include<fstream> //library file stream, <fstream> sudah include <ofstream> dan <ifstream>
using namespace std;

int main()
{
	ofstream myFile;
	int val = 25;
	/*
		ios::out   = default, operasi output/membuat file baru jika tidak ada;
		ios::trunc = default, membuat file jika tidak ada dan jika ada maka file tersebut akan di recreate;
		iod::app   = append, menuliskan pada akhir baris
	*/

	myFile.open("data1.txt",ios::out);
	myFile << "\nIni file data1.txt";
	myFile.close();

	myFile.open("data2.txt", ios::trunc);
	myFile << "Ini file data2.txt";
	myFile << endl << val << endl;
	myFile.close();

	myFile.open("data3.txt", ios::app);
	myFile << "ini file data3.txt";
	myFile.close();

	cin.get();
	return 0;
}
