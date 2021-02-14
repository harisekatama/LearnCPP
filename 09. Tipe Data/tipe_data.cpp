#include<iostream>
using namespace std;

int main()
{
	/*
		unsigned //untuk variabel yang tidak memiliki tanda negatif atau bernilai positif
		signed	 //untuk variabel yang memiliki tanda negatif atau tidak bernilai positif
	*/
	
	//Bilangan Bulat
	int a = 2;	//4 byte
	long long b = 5;//8 byte
	short c = 9;	//2 byte
	
	//Bilangan Desimal
	float d = 2.5;	//4 Byte
	double e = 5.2;	//8 Byte

	//Character
	char f = 'x';	//1 bit sebenernya tapi system ngitungnya jadi 1 byte

	//Boolean
	bool g = true;	//1 Byte dan hanya bisa bernilai True atau False

	cout << "Integer a : " << a << endl;
	cout << "Ukuran Integer : " << sizeof(a) << " Byte" << endl;
	cout << "Nilai Maksimal : " << numeric_limits<int>::max() << endl;
	cout << "Nilai Minimal : " << numeric_limits<int>::min() << endl << endl;

	cout << "Long Long b : " << b << endl;
	cout << "Ukuran Long Long : " << sizeof(b) << " Byte" << endl;
	cout << "Nilai Maksimal : " << numeric_limits<long long>::max() << endl;
	cout << "Nilai Minimal : " << numeric_limits<long long>::min() << endl << endl;

	cout << "Short c : " << c << endl;
	cout << "Ukuran Short : " << sizeof(c) << " Byte" << endl;
	cout << "Nilai Maksimal : " << numeric_limits<short>::max() << endl;
	cout << "Nilai Minimal : " << numeric_limits<short>::min() << endl << endl;

	cout << "Float d : " << d << endl;
	cout << "Ukuran Float : " << sizeof(d) << " Byte" << endl;
	cout << "Nilai Maksimal : " << numeric_limits<float>::max() << endl;
	cout << "Nilai Minimal : " << numeric_limits<float>::min() << endl << endl;

	cout << "Double e : " << e << endl;
	cout << "Ukuran Double : " << sizeof(e) << " Byte" << endl;
	cout << "Nilai Maksimal : " << numeric_limits<double>::max() << endl;
	cout << "Nilai Minimal : " << numeric_limits<double>::min() << endl << endl;

	cout << "Char f : " << f << endl;
	cout << "Ukuran Char : " << sizeof(f) << " Byte" << endl;
	cout << "Nilai Maksimal : " << numeric_limits<char>::max() << endl;
	cout << "Nilai Minimal : " << numeric_limits<char>::min() << endl << endl;

	cout << "Boolean g : " << g << endl;
	cout << "Ukuran Boolean : " << sizeof(bool) << " Byte" << endl;
	cout << "Nilai Maksimal : " << numeric_limits<bool>::max() << endl;
	cout << "Nilai Minimal : " << numeric_limits<bool>::min() << endl << endl;
	
	cin.get();
	return 0;
}
