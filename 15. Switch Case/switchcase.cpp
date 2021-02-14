#include<iostream>
using namespace std;

int main()
{
	int a;
	
	cout << "Masukkan nilai a : ";
	cin >> a;

	/*
	switch (variabel)
	{
		case Sesuatu1:
			statement;
			break;
		case Sesuatu2:
			statement;
			break;
		default:
			statement;
	*/

	switch (a)
	{
		/*
		break; selalu ditambahkan pada statement. Jika tidak ditambahkan maka case yang berada dibawahnya akan diproses juga !
		default akan dijalankan jika tidak terdapat case yang sesuai atau case diatasnya tidak terdapat break !
		*/
		case 1:
			cout << "a bernilai 1\n";
			break;
		case 2:
			cout << "a bernilai 2\n";
			break;
		case 3:
			cout << "a bernilai 3\n";
			break;
		case 4:
			cout << "a bernilai 4\n";
			break;
		case 5:
			cout << "a bernilai 5\n";
			break;
		default:
			cout << "Nilai yang anda masukkan tidak termasuk didalam range!\n";
	}
	cout << "Program selesai dijalankan !";
	cin.get();
	return 0;
}
