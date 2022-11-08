#include <iostream>
#include<cstdlib>
#include<cmath>
using namespace std;
void dane(int A[5][6]) {
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 6; j++) {
            A[i][j] = 1 + rand() % 100;
        }
    }
}
void pisz_tab(int A[5][6]) {
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 6; j++) {
            if (A[i][j]<10) {
                cout << " ";
            }
            cout << A[i][j] << "  ";
        }
        cout << endl;
    }
}
void zamien(int A[5][6], int x,int k) {
    x--;
    k--;
        for (int i = 0; i < 5; i++) {
            for (int j = 0; j < 6; j++)
                swap(A[x][j], A[k][j]);
        }




    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 6; j++) {
            if (A[i][j] < 10) {
                cout << " ";
            }
            cout << A[i][j] << "  ";
        }
        cout << endl;
    }
}




int main()
{
    srand(time(NULL));
    int x, k;
    cout << "Wpisz i oraz k" << endl;
    cin >> x >> k;
    int A[5][6];
    dane(A);
    cout << "Tablica pierwotna: " << endl;
    pisz_tab(A);
    cout << "Tablica posortowana: " << endl;
    zamien(A, x, k);
}
