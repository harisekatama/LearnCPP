#include<iostream>
using namespace std;

int volume(int panjang = 1, int lebar = 1, int tinggi = 1);

/*
int volume(int panjang = 1, int lebar = 1, int tinggi = 1)
{
	return panjang * lebar * tinggi;
}
*/

int main()
{
	cout << "Volume : " << volume(5, 2, 10) << endl;
	cout << "Volume : " << volume(5, 2) << endl;
	cout << "Volume : " << volume(5) << endl;
	cout << "Volume : " << volume() << endl;
}

int volume(int panjang, int lebar, int tinggi)
{
	return panjang * lebar * tinggi;
}
