#include<iostream>
#include<array>
#include<algorithm>

const size_t arraySize = 10;

void printArray(std::array<int, arraySize> angka)
{
	std::cout << "Array : ";
	for (int a : angka)
	{
		std::cout << a << " ";
	}
	std::cout << std::endl;
}

int main()
{
	std::array<int, arraySize> angka = { 9,1,8,2,7,3,6,4,5,0 };
	printArray(angka);

	int cariAngka;
	bool ketemu;

	std::cout << "\nMasukkan angka yang mau dicari : ";
	std::cin >> cariAngka;

	std::sort(angka.begin(), angka.end());

	/*
		METHOD MENCARI VALUE PADA ARRAY !
		binary_search(nama_array.begin(), nama_array.end(), value_yang_mau_dicari);
	*/
	ketemu = std::binary_search(angka.begin(), angka.end(), cariAngka);

	if (ketemu)
	{
		std::cout << "\nAngka " << cariAngka << " ditemukan pada array !\n";
	}
	else
	{
		std::cout << "\nAngka " << cariAngka << " tidak ditemukan pada array!\n";
	}

	std::cin.get();
	return 0;
}
