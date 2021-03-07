#include<iostream>
#include<bitset>
#include<string>
using namespace std;

/*
	BITWISE OPERATOR
	&  AND Bitwise AND
	|  OR  Bitwise OR
	^  XOR Bitwise XOR
	~  NOT Bitwise NOT
	<< SHL Shift bits Left
	>> SHR Shift bits Right
*/

void printBinary(unsigned short val, string name)
{
	cout << name << " : " << bitset<8>(val) << endl;
	/*
	bitset<jumlah_bit>(nama_variabel);
	*/
}

int main()
{
	unsigned short x,y,z;
	cout << "Masukkan nilai x : ";
	cin >> x;
	cout << "Masukkan nilai y : ";
	cin >> y;

	cout << "\n<< Bitwise SHL\n";
	z = y << 2; //Menggeser binary dari z ke kiri sebanyak 2 kali
	printBinary(y, "y");
	printBinary(z, "z");
	cout << "Nilai dari z : " << z << endl;

	cout << "\n>> Bitwise SHR\n";
	z = y >> 2; //Menggeser binary dari z ke kanan sebanyak 2 kali
	printBinary(y, "y");
	printBinary(z, "z");
	cout << "Nilai dari z : " << z << endl;

	cout << "\n& Bitwise AND\n";
	z = x & y;
	printBinary(x, "x");
	printBinary(y, "y");
	printBinary(z, "z");
	cout << "Nilai dari z : " << z << endl;

	cout << "\n| Bitwise OR\n";
	z = x | y;
	printBinary(x, "x");
	printBinary(y, "y");
	printBinary(z, "z");
	cout << "Nilai dari z : " << z << endl;

	cout << "\n~ Bitwise NOT\n";
	z = ~y;
	printBinary(y, "y");
	printBinary(z, "z");
	cout << "Nilai dari z : " << z << endl;

	cout << "\n^ Bitwise XOR\n";
	z = x ^ y;
	printBinary(x, "x");
	printBinary(y, "y");
	printBinary(z, "z");
	cout << "Nilai dari z : " << z << endl;

	cin.get();
	return 0;
}
