#include <iostream>

using namespace std;

void menu(char znak){
    cout<<"Wybierz dzialanie matematyczne wpisujac odpowiedni znak"<<endl;
    cout<<"Dodawanie: +"<<endl;
    cout<<"Odejmowanie: -"<<endl;
    cout<<"Mnozenie: *"<<endl;
    cout<<"Dzielenie: /"<<endl;
}
float dodawanie(float a, float b){
    char znak;
    cout<<"Podaj dwie liczby"<<endl;
    cin>>a;
    cin>>b;
    cout<<"Wynik = "<<a+b<<endl;
    return 0;
}
float odejmowanie(float a, float b){
        char znak;
    cout<<"Podaj dwie liczby"<<endl;
   cin>>a;
    cin>>b;
    cout<<"Wynik = "<<a-b<<endl;
    return 0;
}
float mnozenie(float a, float b){
        char znak;
    cout<<"Podaj dwie liczby"<<endl;
    cin>>a;
    cin>>b;
    cout<<"Wynik = "<<a*b<<endl;
    return 0;
}
float dzielenie(float a, float b){
    char znak;
    cout<<"Podaj dwie liczby"<<endl;
   cin>>a;
    cin>>b;
    if(a == 0 || b==0){
        cout<<"Nie dziel przez 0"<<endl;
        return 0;
    }
    cout<<"Wynik = "<<a/b<<endl;
    return 0;
}

int main()
{
    int a, b;
        char znak;
    menu(znak);
    cin>>znak;
    switch(znak){
    case '+':
        dodawanie(a, b);
        break;
    case '-':
        odejmowanie(a, b);
        break;
    case '*':
        mnozenie(a, b);
        break;
    case '/':
        dzielenie(a, b);
        break;
    default:
        cout<<"Zly znak"<<endl;
        break;

    }
    return 0;
}
