#include <iostream>
using namespace std;
int main()
{
    for (int i=1 ;i<=10;i++){
        for (int j=1 ;j<=10-i;j++)
            cout << " ";
        for (int z=1; z<=i*2-1 ; z++)
            cout << "*";
            cout<<endl;
    }
    return 0;
}