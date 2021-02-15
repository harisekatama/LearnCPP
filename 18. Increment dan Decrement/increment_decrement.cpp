#include<iostream>
using namespace std;

int main()
{
	/*
		Increment (++) dan Decrement (--)
		Pre dan Post

		a++ //ini berarti dipakai dulu a nya baru ditambah
		++a //ini berarti ditambah dulu a nya baru dipakai
	*/

	int a = 2;
	int b = 5;

	cout << "Nilai dari a : " << a << endl;
	cout << "Nilai dari b : " << b << endl << endl;

	//Preincrement
	cout << "Nilai dari a   : " << a << endl;
	cout << "Nilai dari ++a : " << ++a << endl;
	cout << "Nilai dari a   : " << a << endl << endl;

	//Postincrement
	cout << "Nilai dari b   : " << b << endl;
	cout << "Nilai dari b++ : " << b++ << endl;
	cout << "Nilai dari b   : " << b << endl;
	
	cin.get();
	return 0;
}
