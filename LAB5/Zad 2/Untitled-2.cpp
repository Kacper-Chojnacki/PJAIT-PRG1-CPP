#include <iostream>
using namespace std;
int main(){
    cout<<"podaj liczbe"<<endl;
    int n, x=1;
    cin>>n;
   char znak;
   do{
        while(x<=n){
            for(int i=2; i<=x; i++) {
      if(x%i==0) {
        if (x==i) cout<<x<<endl;
        else break;
      }
    }  
    x++;
  }
    cout<<"Wpisz t lub T jesli chcesz powtorzyc";
    znak = getchar();
   }while(znak == 't' || znak == 'T'); 
}