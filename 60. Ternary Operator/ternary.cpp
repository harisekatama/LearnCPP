#include<iostream>
#include<string>
using namespace std;

//TERNARY OPERATOR\
kondisi ? hasil1 (jika true) : hasil2 (jika false);

/*
TERNARY OPERATOR EKUIVALEN DENGAN IF ELSE
if (true)
{
	output = hasil1;
}
else
{
	output = hasil2;
}
*/


int main()
{
	int a, b;
	string hasil1, hasil2, output;

	hasil1 = "VIKTORI";
	hasil2 = "ELEKTRO ITS";

	cout << "Masukkan nilai a : ";
	cin >> a;
	cout << "Masukkan nilai b : ";
	cin >> b;
	
	cout << "Hasilnya adalah ";
	output = (a < b) ? hasil1 : hasil2;
	
	/*
	if (a < b)
	{
		output = hasil1;
	}
	else
	{
		output = hasil2;
	}
	*/

	cout << output << endl;

	cin.get();
	return 0;
}
