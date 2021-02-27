#include<iostream>
#include<string>
using namespace std;

int main()
{
	string kata("ITS");
	cout << kata << endl;

	string data;
	cout << "\nMasukkan satu kata : \n";
	cin >> data;

	cout << "\nKata yang dimasukkan adalah : \n" << data << endl;

	cin.get();
	return 0;
}
