#include<iostream>
using namespace std;

void printData(int val)
{
	cout << &val << " bernilai : " << val << endl;
}

int main()
{
	int a;
	int b;
	int c;

	//INI MENGGUNAKAN COMMA OPERATOR
	a = (b = 2, printData(b), c = 5, printData(c), c - b);
	printData(a);

	cin.get();
	return 0;
}
