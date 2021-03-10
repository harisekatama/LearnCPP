#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main()
{
	ifstream myFile;
	string output, buffer, name;
	bool isData = false;
	int number, jumlahData = 0;
	
	/*
		ios::in		= default
		ios::ate	= memulai dari akhir file
		ios::binary	= untuk membaca file biner
	*/

	myFile.open("data.txt", ios::in);
	getline(myFile, buffer);
	output.append(buffer);

	while (!isData)
	{
		getline(myFile, buffer);
		output.append("\n" + buffer);
		if (buffer == "data")
		{
			isData = true; //pakai break; juga boleh sih sebenernya
		}
	}

	getline(myFile, buffer);
	output.append("\n" + buffer);

	cout << output << endl;

	while (!myFile.eof()) //eof = end of file
	{
		myFile >> number;
		myFile >> name;
		cout << number << "\t" << name << endl;
		jumlahData++;
	}
	
	cout << "\nJumlah Data : " << jumlahData << endl;

	cin.get();
	return 0;
}
