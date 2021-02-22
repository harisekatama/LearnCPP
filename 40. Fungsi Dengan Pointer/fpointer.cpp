#include<iostream>
using namespace std;

//Prototipe
void fungsiPtr(int*);
void kuadrat(int*);
void fungsiRef(int&);

int main()
{
	int a;
	cout << "Masukkan nilai a : ";
	cin >> a;

	cout << "\nNilai dari a   : " << a << endl;
	cout << "Address dari a : " << &a << endl;

	fungsiPtr(&a);
	kuadrat(&a);
	fungsiRef(a);

	cin.get();
	return 0;
}

void fungsiPtr(int* aPtr) //Kenapa void? karena dia pointer dan tidak perlu mengembalikan hasilnya
{
	cout << "\nNilai dari aPtr   : " << *aPtr << endl; //Dereferencing
	cout << "Address dari aPtr : " << aPtr << endl;
}

void kuadrat(int* valPtr)
{
	cout << "\nKuadrat dari " << *valPtr << " adalah ";
	*valPtr *= *valPtr;
	cout << *valPtr << endl;
}

void fungsiRef(int& valRef)
{
	cout << "\nNilai dari b   : " << valRef << endl;
	cout << "Address dari b : " << &valRef << endl;
}
