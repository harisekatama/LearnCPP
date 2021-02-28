#include<iostream>
#include<string>
using namespace std;

int main()
{
	string kalimat1("VIKTORI! VIKTORI! VIKTORI! KAMI BISA KARENA KAMI BIASA TAK KENAL KATA LELAH TEGAR HADAPI SEMUA");
	string kalimat2("DISINI BERSAMA MENGGAPAI CITA - CITA KOBARKAN SEMANGATMU DERAP LANGKAH MENUJU SATU ARAH");
	string kalimat3("LUAPKAN RASA BANGGA JUNJUNG TINGGI ETIKA KARENA KAMI MEMBAWA SATU NAMA ELEKTRO JURUSANKU");
	string kalimat4("ELEKTRO ELEKTRO BERJUANG DEMI NEGERI");
	string kalimat5("MENGHADAPI TANTANGAN MEWUJUDKAN KEMENANGAN MAINKAN DAN HABISI");
	string findword;
	int index, panjang;

	cout << kalimat1 << kalimat2 << kalimat3 << kalimat4 << kalimat5 << endl;

	cout << "\nOPERASI STRING !\n";
	cout << "Masukkan index   : ";
	cin >> index;
	cout << "Masukkan panjang : ";
	cin >> panjang;
	
	//SUBSTRING, MENGAMBIL STRING DI TENGAH - TENGAH\
        nama_string.substr(nilai_index, panjang_kata);\
        --------------------------------------------------
  
	cout << kalimat1.substr(index, panjang) << endl;
	cout << kalimat2.substr(index, panjang) << endl;
	cout << kalimat3.substr(index, panjang) << endl;
	cout << kalimat4.substr(index, panjang) << endl; 
	cout << kalimat5.substr(index, panjang) << endl;

	//MENCARI POSISI INDEX SUBSTRING DARI DEPAN\
        nama_string.find("kata_yang_mau_dicari");\
        --------------------------------------------  
  
	cout << "\nMasukkan kata yang ingin dicari : ";
	cin >> findword;
	cout << "Kata " << findword << " berada pada index : " << kalimat1.find(findword) << endl;
	cout << "Kata " << findword << " berada pada index : " << kalimat2.find(findword) << endl;
	cout << "Kata " << findword << " berada pada index : " << kalimat3.find(findword) << endl;
	cout << "Kata " << findword << " berada pada index : " << kalimat4.find(findword) << endl;
	cout << "Kata " << findword << " berada pada index : " << kalimat5.find(findword) << endl;
	
	//MENCARI POSISI INDEX SUBSTRING DARI BELAKANG\
        nama_string.rfind("kata_yang_mau_dicari");\
        -----------------------------------------------
  
	cout << endl;
	cout << "Kata " << findword << " berada pada index : " << kalimat1.rfind(findword) << endl;
	cout << "Kata " << findword << " berada pada index : " << kalimat2.rfind(findword) << endl;
	cout << "Kata " << findword << " berada pada index : " << kalimat3.rfind(findword) << endl;
	cout << "Kata " << findword << " berada pada index : " << kalimat4.rfind(findword) << endl;
	cout << "Kata " << findword << " berada pada index : " << kalimat5.rfind(findword) << endl;

	cin.get();
	return 0;
}
