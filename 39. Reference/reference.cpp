#include<iostream>
using namespace std;

int main()
{
	int a = 5;

	//Reference
	int &b = a;
	//---------

	cout << "Nilai dari a   : " << a << endl;
	cout << "Address dari a : " << &a << endl << endl;
	cout << "Nilai dari b   : " << b << endl;          //cara mengeluarkan nilai dari reference
	cout << "Address dari b : " << &b << endl << endl; //cara mengeluarkan address dari reference

	a = 2;
	cout << "Nilai dari a   : " << a << endl;
	cout << "Address dari a : " << &a << endl << endl;
	cout << "Nilai dari b   : " << b << endl;
	cout << "Address dari b : " << &b << endl << endl;

	b = 9;
	cout << "Nilai dari a   : " << a << endl;
	cout << "Address dari a : " << &a << endl << endl;
	cout << "Nilai dari b   : " << b << endl;
	cout << "Address dari b : " << &b << endl << endl;

	cin.get();
	return 0;
}
