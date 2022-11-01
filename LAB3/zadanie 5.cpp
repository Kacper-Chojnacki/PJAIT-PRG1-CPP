#include <iostream>
using namespace std;
int main()
{
    char kategoria;
    double godziny, stawka, podatek;
    cout << "Program obliczajacy tygodniowe zarobki brutto i netto pracownika \n";
    cout << "Podaj kategorie zaszeregowania : ";
    cin >> kategoria;
    cout << "Podaj liczbe przepracowanych godzin: ";
    cin >> godziny;
    switch (kategoria) {
    case 'A':
        if (godziny < 40)
            stawka = godziny * 15;
        else {
            stawka = godziny * 15 + ((godziny - 40)*30);
        }
        break;
    case 'B':
        if (godziny < 40)
            stawka = godziny * 25;
        else {
            stawka = godziny * 25 + ((godziny - 40) * 50);
        }
        break;
    case 'C':
        if (godziny < 40)
            stawka = godziny * 30;
        else {
            stawka = godziny * 30 + ((godziny - 40) * 60);
        }
        break;
    case 'D':
        if (godziny < 40)
            stawka = godziny * 35;
        else {
            stawka = godziny * 35 + ((godziny - 40) * 70);
        }
        break;
    default:
        cout << "Nieprawidlowa kategoria. ";
        break;
    }
    if (stawka <= 700) {
        podatek = 0.85;
        cout << "Zarobek brutto:" << stawka << endl;
        cout << "Zarobek netto:" << stawka * podatek << endl;
    }
    else if (stawka > 700 && stawka <=1200) {
        podatek = 0.8;
        cout << "Zarobek brutto:" << stawka << endl;
        cout << "Zarobek netto:" << stawka * podatek << endl;
    }
    else if (stawka > 1200) {
        podatek = 0.75;
        cout << "Zarobek brutto:" << stawka << endl;
        cout << "Zarobek netto:" << stawka * podatek << endl;
    }
}