
#include <iostream>
using namespace std;
int main()
{
    float a1, b1, c1, a2, b2, c2;
    float W, Wx, Wy, x, y;
    cout << "Program rozwiazujacy uklad dwoch rownan liniowych \n";
    cout << "Podaj wartosc wspolczynnika a1: ";
    cin >> a1;
    if (a1 > 0);
    else {
        cout << "Podaj wartosc wyzsza niz 0! ";
        return 0;
    }
        cout << "Podaj wartosc wspolczynnika b1: ";
        cin >> b1;
        if (b1 > 0);
        else {
            cout << "Podaj wartosc wyzsza niz 0! ";
            return 0;
        }
        cout << "Podaj wartosc wspolczynnika c1: ";
        cin >> c1;
        cout << "Podaj wartosc wspolczynnika a2: ";
        cin >> a2;
        if (a2 > 0);
        else {
            cout << "Podaj wartosc wyzsza niz 0! ";
            return 0;
        }
        cout << "Podaj wartosc wspolczynnika b2: ";
        cin >> b2;
        if (b2 > 0);
        else {
            cout << "Podaj wartosc wyzsza niz 0! ";
            return 0;
        }
        cout << "Podaj wartosc wspolczynnika c2: ";
            cin >> c2;

            W = a1 * b2 - b1 * a2;
            Wx = c1 * b2 - b1 * c2;
            Wy = a1 * c2 - c1 * a2;
            if (W != 0) {
                (x = Wx / W) && (y = Wy / W);
                cout << "x= " << x << endl;
                cout << "y= " << y;
                return 0;
            }
            else if (W == 0 && Wx != 0 || Wy != 0) {
                cout << "Układ jest sprzeczny.";
                return 0;
            }
            else if (W == 0 && Wx == 0 && Wy == 0) {
                cout << "Uklad jest nieoznaczony.";
                return 0;
            }
            else {
                cout << "Sproboj ponownie.";
                return 0;
          
            }

}