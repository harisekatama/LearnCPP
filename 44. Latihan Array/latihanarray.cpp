#include<iostream>
#include<array>
using namespace std;

int main()
{
	array<int, 11>nilai;

	cout << "PERSEBARAN NILAI MAHASISWA !\n\n";
	for (int i = 0; i <= nilai.size(); i++)
	{
		cout << "Jumlah mahasiswa dengan nilai ";
		if (i == 0)
		{
			cout << "0 - 9   : ";
			cin >> nilai[i];
		}
		else if (i == 10)
		{
			cout << "100     : ";
			cin >> nilai[i];
			break;
		}
		else
		{
			cout << i * 10 << " - " << (i * 10) + 9 << " : ";
			cin >> nilai[i];
		}
	}

	cout << "\nGRAFIK NILAI MAHASISWA !";
	for (int i = 0; i <= nilai.size(); i++)
	{
		if (i == 0)
		{
			cout << "\n0 - 9   : ";
		}
		else if (i == 10)
		{
			cout << "\n100     : ";
		}
		else if (i > 10)
		{
			break;
		}
		else
		{
			cout << endl << i * 10 << " - " << (i * 10) + 9 << " : ";
		}

		for (int star = 1; star <= nilai[i]; star++)
		{
			cout << "* ";
		}
	}

	cin.get();
	return 0;
}
