#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int rok;
    cout << "Program sprawdzajacy czy rok jest przestepny\n";
    cout << "Podaj rok: \n";
    cin >> rok;
    if ((rok % 4 == 0) && (rok % 100 != 0) || (rok % 400 == 0)) {
        cout << "Rok jest przestepny \n";
        return 0;
    }
    else {
        cout << "Rok nie jest przestepny \n";
        return 0;
    }
}
