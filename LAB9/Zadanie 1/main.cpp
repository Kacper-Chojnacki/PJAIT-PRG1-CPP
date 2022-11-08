#include <iostream>
using namespace std;
int main()
{
  int n;
    cout<<"Podaj liczbe elementow do posortowania"<<endl;
    cin>>n;
    int x;
    x=n ;
    int A[n];
    for(int i = 0; i<n;i++ ){
        cout<<"Podaj "<<i+1<<" element"<<endl;
        cin>>A[i];
    }
    do{
    for(int i =0; i<n-1;i++){
     if(A[i]>A[i+1]){
        swap(A[i], A[i+1]);
     }
    }
    n--;
    }while(n>1);

    for(int i =0; i<x; i++){
        cout<<A[i]<<endl;
    }

    return 0;
}
