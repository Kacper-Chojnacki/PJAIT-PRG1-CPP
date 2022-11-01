#include <iostream>
using namespace std;
int main(){
    double suma = 0, pi;

    for(int i=1; i<=100000000; i++){
        suma = suma + 1.0 / i*i;
    } 
    
    pi=sqrt(suma * 6);
    cout<<pi;



}