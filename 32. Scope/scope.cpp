#include<iostream>
using namespace std;


int x = 2; //Ini Global Scope

int scope()
{
	int x = 5; //Ini Local Scope dari fungsi scope
	return x;
}

int main()
{
	cout << "1. Ini Global Scope : " << x << endl;
	cout << "2. Ini Local Scope dari Fungsi : " << scope() << endl;
	int x = 9;
	cout << "3. Ini Local Scope dari Main : " << x << endl;
	{
		cout << "4. Ini Local Scope dari Main : " << x << endl;
		int x = 10; //Ini Bloack Scope
		cout << "5. Ini Block Scope : " << x << endl;
		cout << "6. Ini Global Scope : " << ::x << endl;
		cout << "7. Ini Local Scope dari Fungsi : " << scope() << endl;
	}
	cout << "8. Ini Local Scope dari Main : " << x << endl;
	cout << "9. Ini Global Scope : " << ::x << endl;

	cin.get();
	return 0;
}
