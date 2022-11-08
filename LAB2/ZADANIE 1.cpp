#define _USE_MATH_DEFINES
#include <iostream>
#include<cmath>
using namespace std;
int main()
{
    float kat, promien, F;
    cout << "Podaj wartosc promienia \n";
    cin >> promien;
    cout << "podaj wartosc kata \n";
    cin >> kat;
    float radian = (M_PI * kat) / 180;
    float x = sin(radian);
    F = promien * promien / 2 * (radian - x);
    cout << "pole odcinka kolowego wynosi: " << F << endl;
    return 0;
}