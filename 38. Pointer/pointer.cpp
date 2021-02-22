#include<iostream>
using namespace std;

int main()
{
	int a = 5; //integer a memiliki nilai (value) dan alamat (address)
	int* aPtr = &a; //pointer akan selalu bertipe data integer!

	cout << "Nilai dari a  : " << a << endl;  //ini merupakan cara mengeluarkan nilai dari variabel a
	cout << "Alamat dari a : " << &a << endl; //ini merupakan cara mengeluarkan alamat dari variabel a

	cout << "\nAlamat dari aPtr : " << aPtr << endl; //ini merupakan cara mengeluarkan alamat dari pointer aPtr

	//Dereferencing, yaitu mengambil data dari sebuah pointer
	cout << "Nilai dari aPtr  : " << *aPtr << endl; //ini merupakan cara mengeluarkan nilai dari pointer aPtr

	cin.get();
	return 0;
}
