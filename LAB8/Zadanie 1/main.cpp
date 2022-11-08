#include <iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int main()
{
    srand((int)time(NULL));
    cout << "Zgadnij liczbe!" << endl;
    int liczba;
    int nWylosowana = 1+ rand() %100;
    cin>>liczba;
    while(liczba!=nWylosowana){
    if(liczba>nWylosowana){
        cout<<"Za duzo!"<<endl;
    }
    if(liczba<nWylosowana){
        cout<<"Za malo!"<<endl;
    }
    cin>>liczba;
    }
        cout<<"Brawo zgadles!!"<<endl;
    return 0;
}
