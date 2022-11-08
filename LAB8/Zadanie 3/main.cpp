#include <iostream>
using namespace std;
int liczba;
int tablica [5][5];
void czytaj_dane(){
    cout << "Podaj liczbe" << endl;
    cin>>liczba;
}
void licz_dane(){
for(int wiersze = 0; wiersze<5; wiersze++){
        for(int kolumny = 0; wiersze<5; wiersze++){
            if(wiersze == kolumny){
                for(int z = 5; z>0; z--){
                    z=wiersze;
                }
            }
            else{
                liczba=kolumny;
            }
            cout<<endl;
                    cout<<tablica[wiersze][kolumny]<<endl;
        }
    }
}
int main()
{
    czytaj_dane();
    licz_dane();


}

