

#include <iostream>
using namespace std;
int main()
{
    int a, b, a1, b1;
    cout << "program sprawdzajacy nwd dwoch liczb" << endl;
    cout << "podaj a: ";
        cin >> a;
    cout << "podaj b: ";
    cin >> b;
    if (a > 0 && b > 0) {
        a1 = a;
        b1 = b;
        while (a1 != b1) {
            if (a1 > b1) {
                a1 -= b1;
            }
            else
                b1 -= a1;
        }
        cout << a1;
    }
    else
        cout << "brak rozwiazan" << endl;

}

