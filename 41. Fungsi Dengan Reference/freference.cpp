#include<iostream>
using namespace std;

//Prototipe
void kuadrat(int&);
void fungsiRef(int&);

int main()
{
	int n;
	cout << "Masukkan nilai n : ";
	cin >> n;
	
	cout << "\nNilai dari n   : " << n << endl;
	cout << "Address dari n : " << &n << endl;

	fungsiRef(n);
	cout << "\nNilai dari n   : " << n << endl;
	cout << "Address dari n : " << &n << endl;

	cin.get();
	return 0;
}

void kuadrat(int& valRef)
{
	valRef *= valRef;
}

void fungsiRef(int& valRef)
{
	cout << "\nNilai dari valRef   : " << valRef << endl;
	cout << "Address dari valRef : " << &valRef << endl;
	kuadrat(valRef);
}
