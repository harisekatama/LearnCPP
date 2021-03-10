#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main()
{
	fstream myFile;
	int value;
	
	cout << "Masukkan nilai : ";
	cin >> value;

	myFile.open("data.bin", ios::out | ios::binary);
	myFile.write(reinterpret_cast<char*>(&value), sizeof(value));
	myFile.close();

	cin.get();
	return 0;
}
