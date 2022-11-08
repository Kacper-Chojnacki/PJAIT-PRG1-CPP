#include <iostream>
using namespace std;
int main()
{
	int a, b, a1, b1, nww;
	cout << "Podaj pierwsza liczbe";
	cin >> a;
	cout << "Podaj druga liczbe";
	cin >> b;
	if (a > 0 && b > 0) {
		a1 = a;
		b1 = b;
	}
	else {
		nww = 0;
		cout << nww;
		return 0;
	}
	if (a1 != b1) {
		while (a1 != b1) {
			if (a1 > b1) {
				b1 = b1 + b;
			}
			else {
				a1 += a;
			}
		}
	}
	else {
		nww = a1;
		cout << a1;
		return 0;
	}
}
