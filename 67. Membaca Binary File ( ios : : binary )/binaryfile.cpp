#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main()
{
	fstream myFile;
	int value;

	myFile.open("data.bin", ios::in | ios::binary);
	myFile.read(reinterpret_cast<char*>(&value), sizeof(value));

	cout << "Besar Integer : " << sizeof(value) << " Byte" << endl;
	cout << "Nilai Integer : " << value;
	
	cin.get();
	return 0;
}
