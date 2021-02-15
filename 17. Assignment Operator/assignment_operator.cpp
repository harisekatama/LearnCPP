#include<iostream>
using namespace std;

int main()
{
	int a = 5;

	cout << "Nilai dari a : " << a << endl;

	/*
		ASSIGNMENT OPERATOR!

		variabel = variabel operator ekspresi
			a	 =	  a		   -		2

		variabel operator = ekspresi
			a		-	  =	   2

		Jadi :
		( a = a - 2 ) itu sama aja kayak ( a -= 2 )
	*/

	//Pengurangan
	a -= 2;
	cout << "a dikurangi dengan 2 menjadi : " << a << endl;

	//Penambahan
	a += 2;
	cout << "a ditambah dengan 2 menjadi : " << a << endl;

	//Perkalian
	a *= 2;
	cout << "a dikali dengan 2 menjadi : " << a << endl;

	//Pembagian
	a /= 2;
	cout << "a dibagi dengan 2 menjadi : " << a << endl;

	//Modulasi
	a %= 2;
	cout << "a dimodulasi dengan 2 menjadi : " << a << endl;

	cin.get();
	return 0;

}
