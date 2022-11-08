#include <iostream>
using namespace std;
int main(){
	int r, x, y, a, b, c, d, f;
	cout << "Podaj rok \n";
	cin >> r;
	if (r >= 1 && r <= 2199) {
			if (r >= 1 && r <= 1582) {
				x = 15;
				y = 6;
			}
			 if (r >= 1583 && r <= 1699) {
				x = 22;
				y = 2;
			}
			 if (r >= 1700 && r <= 1799) {
				x = 23;
				y = 3;
			}
			 if (r >= 1800 && r <=1899) {
				x = 23;
				y = 4;
			}
			 if (r >= 1900 && r <= 2099) {
				x = 24;
				y = 5;
			}
			 if (r >= 2100 && r <= 2199) {
				x = 24;
				y = 6;
			}
			a = r % 19;
			b = r % 4;
			c = r % 7;
			d = ((19 * a + x) % 30);
			f = ((2 * b + 4 * c + 6 * d + y) % 7);
			if (f == 6 && d == 29) {
				cout << "Wielkanoc jest 26 kwietnia \n";
					return 0;
			}
			else if (f == 6 && d == 28 && (((11*x+11)%30)<19)) {
				cout << "Wielkanoc jest 18 kwietnia \n";
					return 0;
			}
			else if (( d + f )<10) {
				cout << "Wielkanoc jest ";
					cout<<(22+d+f);
					cout<<" marca ";
					return 0;
			}
			else if ((d + f) > 9) {
				cout << "Wielkanoc jest ";
				cout << (d + f -9);
				cout << " kwietnia ";
					return 0;
			}
			}
		

	else {
		cout << "nieprawdilowy rok \n";
		return 0;
	}
	}
