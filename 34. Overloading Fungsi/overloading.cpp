#include<iostream>
using namespace std;

int Luas(int panjang, int lebar)
{
	return panjang * lebar;
}

int Luas(int sisi)
{
	return sisi * sisi;
}

double Luas(double sisi)
{
	return sisi * sisi;
}

int main()
{
	cout << "Luas Kotak 2x5     : " << Luas(2, 5) << endl;
	cout << "Luas Kotak 2x2     : " << Luas(2) << endl;
	cout << "Luas Kotak 2.5x2.5 : " << Luas(2.5) << endl;
	
	cin.get();
	return 0;
}
