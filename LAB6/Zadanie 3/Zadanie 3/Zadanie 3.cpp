
#include <iostream>
using namespace std;
int main()
{
	int tablica[5];
	int j = 4;
	for (int i = 0; i < 5; i++) {
		tablica[i] = j;
		j--;
	}
	cout << tablica[0] << endl;
	cout << tablica[1] << endl;
	cout << tablica[2] << endl;
	cout << tablica[3] << endl;
	cout << tablica[4] << endl;
}

