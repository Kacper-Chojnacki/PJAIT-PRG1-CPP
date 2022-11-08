#include <iostream>
using namespace std;
int main()
{
	int tablica[5][5];
	for (int i = 0; i < 5; i++)
		for (int j = 0; j < 5; j++)
			tablica[i][j] = 7;

	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
			cout << tablica[i][j];
		cout << endl;
	}
}

