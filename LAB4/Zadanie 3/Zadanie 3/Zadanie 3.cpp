#include <iostream>
using namespace std;
int main()
{
    int liczba, a, b;
    a = 1;
    cout << "Program wyznaczający wszystkie dzielniki liczby\n";
    cout << "podaj liczbe ";
    cin >> liczba;

    while (a <= liczba) {
        if (liczba % a == 0) {
            cout << a << endl;
        }
        a++;
    }
}
