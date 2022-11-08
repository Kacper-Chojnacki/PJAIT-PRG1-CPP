#include <iostream>
#include<string>
using namespace std;
void czyt_wyraz(char A[25]) {
	cout << "Podaj wyraz: ";
	cin >> A;
}
void sprawdz_wyraz(char A[25]) {
	int dlugosc = strlen(A) - 1;
	for (int i = 0; i < dlugosc; i++) {
		for (int j = dlugosc; j > 0; j--) {
			if (A[i]!=A[j]) {
				cout << "Podany wyraz nie jest palindromem" << endl;
				break;
			}
			else {
				cout << "Podany wyraz jest palindromem" << endl;
				break;
			}
			break;
		}
		break; //nie chciałem korzystać z 'goto'
	}
}

int main()
{
	char A[25];
	czyt_wyraz(A);
	sprawdz_wyraz(A);

}
