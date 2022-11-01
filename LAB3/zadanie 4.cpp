#include <iostream>
using namespace std;
int main()
{
	int dzien, d , m, r;
   cout<< "Program obliczajacy dzien dla wybranej daty\n";
   cout << "Wprowadz dzien";
   cin >> d;
   cout << "Wprowadz miesiac";
   cin >> m;
   cout << "Wprowadz rok";
   cin >> r;
	if(m<3)
	{
		r = r - 1;
		m = m + 12;
	}
	d = r + r / 4 -r / 100 + r / 400 + 3 * m - (2 * m + 1) / 5 + d + 1; 
	d = d - (d / 7) * 7;
	if (d == 1) {
		cout << "poniedzialek";
	}
	if (d == 2) {
		cout << "wtorek";
	}if (d == 3) {
		cout << "sroda";
	}if (d == 4) {
		cout << "czwartek";
	}if (d == 5) {
		cout << "piatek";
	}if (d == 6) {
		cout << "sobota";
	}if (d ==7) {
		cout << "niedziela";
	}
}

 