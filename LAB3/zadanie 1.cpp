#include <iostream>
using namespace std;
int main()
{
    int x, y;
    cout<<"Wprowadz dwie liczby"<<endl;
    cin>>x;
    cin>>y;
    cout<<"Wybierz znak: +, -, /, *"<<endl;
    char znak;
    cin>>znak;
    int wynik;
    switch(znak)
    {
        case ('+'):
            wynik=x+y;
            cout<<"Liczba jest rowna "<<wynik<<endl;
            break;
        case ('-'):
            wynik=x-y;
            cout<<"liczba jest rowna "<<wynik<<endl;
            break;
        case ('/'):
            wynik=x/y;
            cout<<"Liczba jest rowna "<<wynik<<endl;
            break;
        case ('*'):
            wynik=x*y;
            cout<<"Liczba jest rowna "<<wynik<<endl;
            break;
        default:
            cout<<"Nie mozna wykonac dzialan"<<endl;
            break;
    }
}