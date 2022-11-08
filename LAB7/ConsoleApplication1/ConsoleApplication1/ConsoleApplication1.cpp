#include <iostream>
using namespace std;
int liczba;
int tablica[5][5];
void czytaj_dane() {
    cout << "Podaj liczbe" << endl;
    cin >> liczba;
}
void licz_dane() {
    int z = 5;
    int suma = 0;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (i == j) {
                suma += z;
                    tablica[i][j] = z;
                    z--;
              
            }
            else {
                tablica[i][j] = liczba;
            }
            cout << tablica[i][j];
        }
        cout << endl;
    }
    cout << "suma = " << suma << endl;
}
int main()
{
    czytaj_dane();
    licz_dane();


}

