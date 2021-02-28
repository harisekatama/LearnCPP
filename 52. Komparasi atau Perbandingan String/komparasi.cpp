#include<iostream>
#include<array>
using namespace std;

int main()
{
	string input;
	string secretname("HARIS");
	
	while (true)
	{
		cout << "TEBAK NAMA : ";
		cin >> input;
		if (input == secretname)
		{
			cout << "TEBAKAN ANDA BENAR !\n";
			break;
		}
		else
		{
			cout << "CLUE : MAHASISWA TEKNIK KOMPUTER ITS ANGKATAN 2019\n\n";
		}
	}

	cin.get();
	return 0;
}
