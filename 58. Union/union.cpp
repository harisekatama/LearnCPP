//STRUCT ITU 1 DATA PUNYA BEBERAPA KOMPONEN\
  UNION ITU 1 DATA PUNYA BEBERAPA BENTUK

#include <iostream>
using namespace std;

union name
{
	int a;
	char b[4];
};

int main()
{
	name nama;

	nama.a = 12345642;
	cout << "Data Integer : " << nama.a << endl;
	cout << "Data Char    : " << nama.b << endl;

	nama.b[0] = 'a';
	nama.b[1] = 'b';
	nama.b[2] = 'c';
	nama.b[3] = 'd';
	cout << "\nData Integer : " << nama.a << endl;
	cout << "Data Char    : " << nama.b << endl;

	cin.get();
	return 0;
}
