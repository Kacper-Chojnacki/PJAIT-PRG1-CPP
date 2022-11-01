#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main(){
    srand(time(NULL));
    int p, q;
    p = (1 + rand()%6);
    q = (1 + rand()%6);
    cout<<"pierwsza liczba to: "<<p<<endl;
    cout<<"druga liczba to: "<<q<<endl;
    int wynik;
    if(p%2==0){
        if(q==2 || q==4 || q==5){
            wynik=p+3*q;
            cout<<"Wynik to: "<<wynik<<endl;
        }
        else{
            wynik = 2*q;
                  cout<<"Wynik to: "<<wynik<<endl;

        }
    }

        else{
            if(q==1||q==3||q==6){
                if(p==q){
                    wynik= 5*p+4;
                       cout<<"Wynik to: "<<wynik<<endl;

                }
                else{
                    wynik = 2*q+p;
                     cout<<"Wynik to: "<<wynik<<endl;

                }
            }
                else{
                    int mniejsza;
                    mniejsza = min(p,q);
                    wynik = mniejsza+4;
                    cout<<"Wynik to: "<<wynik<<endl;

                }
            
        }
                cout<<"jesli chcesz kontynuowac wpisz t lub T"<<endl;
        char znak;
        cin>>znak;
        if(znak=='t'||znak=='t'){
            return main();
        }
        else{
            return 0;
        }
    }
