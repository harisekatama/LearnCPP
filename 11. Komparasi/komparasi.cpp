#include <iostream>
using namespace std;

void main()
{
	/*
		Jenis Jenis Komparasi !
		== untuk sebanding atau sama dengan
		!* untuk tidak sebanding atau tidak sama dengan
		<  untuk kurang dari
		>  untuk lebih dari
		<= untuk kurang dari atau sama dengan
		>= untuk lebih dari atau sama dengan
	*/

	int a = 5;
	int b = 2;

	bool hasil;

	cout << "Nilai a = " << a << endl;
	cout << "Nilai b = " << b << endl << endl;

	//Sebanding
	hasil = a == b;
	cout << "Apakah " << a << " == " << b << " ? Jawabannya : " << hasil << endl;

	//Tidak Sebanding
	hasil = a != b;
	cout << "Apakah " << a << " != " << b << " ? Jawabannya : " << hasil << endl;

	//Kurang dari
	hasil = a < b;
	cout << "Apakah " << a << " < " << b << " ?  Jawabannya : " << hasil << endl;

	//Lebih dari
	hasil = a > b;
	cout << "Apakah " << a << " > " << b << " ?  Jawabannya : " << hasil << endl;

	//Kurang dari atau sama dengan
	hasil = a <= b;
	cout << "Apakah " << a << " <= " << b << " ? Jawabannya : " << hasil << endl;

	//Lebih dari atau sama dengan
	hasil = a >= b;
	cout << "Apakah " << a << " >= " << b << " ? Jawabannya : " << hasil << endl;

	cin.get();
}
