#include <iostream>
using namespace std;
int main()
{
    int tablica[4];
    for (int i = 0; i < 4; i++) {
        cout << "Podaj liczbe dla " << i << " elementu" << endl;
        cin >> tablica[i];
    }
    cout << tablica[0] + tablica[1] + tablica[2] + tablica[3] << endl;
}

