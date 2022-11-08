#include <iostream>
#include <string>
using namespace std;

int main()
{
    cout << "Podaj swoje imie :)" << endl;
    string imie;
    cin>>imie;
    for(int i = imie.length() -1; i >=0; i--){
        cout<<imie[i];
    }
    return 0;
}
