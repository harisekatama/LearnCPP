#include<iostream>
using namespace std;

//Reporter, fungsi kembalian yang mengembalikan nilai yang telah diolah pada fungsi
int kuadrat(int x)
{
	return x * x;
}

int jumlah(int x, int y)
{
	return x + y;
}

int jumlahkuadrat(int a, int b)
{
	return kuadrat(a) + kuadrat(b);
}

//Worker, fungsi yang tidak mengembalikan nilai tapi fungsi ini mengerjakan sesuatu
void tampilkan(int nilai)
{
	cout << "\nNilai ini ditampilkan dengan void !\n";
	cout << "Nilainya adalah : " << nilai << endl << endl;
}

int main()
{
	int a, b, hasil;
	cout << "Masukkan nilai a : ";
	cin >> a;
	cout << "Masukkan nilai b : ";
	cin >> b;

	cout << "\nNilai kuadrat dari a : " << kuadrat(a) << endl;
	cout << "Nilai kuadrat dari b : " << kuadrat(b) << endl;
	cout << "Jumlah kuadratnya    : " << jumlahkuadrat(a, b) << endl;
	cout << "Jumlah dari a + b    : " << jumlah(a, b) << endl;

	hasil = kuadrat(a);
	tampilkan(hasil);
	hasil = kuadrat(b);
	tampilkan(hasil);
	hasil = jumlahkuadrat(a, b);
	tampilkan(hasil);
	hasil = jumlah(a, b);
	tampilkan(hasil);

	cin.get();
	return 0;
}
