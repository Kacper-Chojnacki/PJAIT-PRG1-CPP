#include <iostream>
using namespace std;

int main()
{
    int size;
    cout<<"Podaj rozmiar"<<endl;
    cin>>size;
    for(int wiersze=1; wiersze<=size;wiersze++){
        for(int kolumny=1; kolumny<=size;kolumny++){
        if (wiersze==kolumny || kolumny == (size-wiersze)+1){
            cout<<" *";
        }
            else{
                cout<<" ";
            }

        }
        cout<<endl;
    }
    return 0;
}
