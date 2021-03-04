#include<iostream>
using namespace std;

enum warna
{
	merah, jingga, kuning, hijau = 5, biru, nila, ungu
};

int main()
{
	warna baju;

	baju = biru;

	if (baju == 0)
	{
		cout << "Baju merah berada pada index ke : " << baju << endl;
	}
	else if (baju == 1)
	{
		cout << "Baju jingga berada pada index ke : " << baju << endl;
	}
	else if (baju == 2)
	{
		cout << "Baju kuning berada pada index ke : " << baju << endl;
	}
	else if (baju == 5)
	{
		cout << "Baju hijau berada pada index ke : " << baju << endl;
	}
	else if (baju == 6)
	{
		cout << "Baju biru berada pada index ke : " << baju << endl;
	}
	else if (baju == 7)
	{
		cout << "Baju nila berada pada index ke : " << baju << endl;
	}
	else if (baju == 8)
	{
		cout << "Baju ungu berada pada index ke : " << baju << endl;
	}

	cin.get();
	return 0;
}
