#include <iostream>
#include <cmath>
using namespace std;

int	main()
{
	/*
	library cmath : referensi www.cppreference.com
	ceil(x) 	<- pembulatan ke atas ( ceil = langit" )
	cos(x) 		<- cosinus
	exp(x) 		<- eksponen
	fabs(x) 	<- nilai absolut dalam float
	floor(x) 	<- pembulatan ke bawah ( floor = lantai )
	fmod(x) 	<- modulus dalam float
	log(x) 		<- logaritma dengan basis natural
	log10(x) 	<- logaritma dengan basis 10
	pow(x,y) 	<- x pangkat y
	sin(x) 		<- sinus
	sqrt(x) 	<- akar kuadrat
	tan(x) 		<- tangen
	*/

	int a;
	cout << "Masukkan nilai a : ";
	cin >> a;

	cout << "Akar kuadrat dari a : " << sqrt(a) << endl;
	cin.get();
	return 0;
}
