#include<iostream>
#include<string>

int main()
{
	std::string inputan;

	//GETLINE\
	getline(cin, nama_string);

	std::cout << "Input  : ";
	std::getline(std::cin, inputan);

	std::cout << "Output : ";
	std::cout << inputan << std::endl;
	
	std::cin.get();
	return 0;
}
