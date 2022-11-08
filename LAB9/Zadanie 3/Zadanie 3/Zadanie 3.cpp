#include <iostream>
#include<cstdlib>
#include<cmath>
using namespace std;
//-------------------------------
void dane(int &n, int &m, int A[][15]) {
    //dane tablicy
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m;j ++) {
            A[i][j] = 1 + rand() % 10;
        }
    }
}
//-------------------------------
void pisz_tab(/*char napis[]*/int n, int m, int A[][15]) { //nie korzystałem z argumentu "charnapis[10]", ponieważ nie widziałem do czego by miała służyć
    //wypisanie aktualnej tablicy
    cout << "Aktualna tablica: " << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (A[i][j] < 10) {
                cout << " ";
            }
            cout << A[i][j] << " ";
        }
        cout << endl;
    }
}
//-------------------------------
//sortowanie tablicy
void sort_tab(int n, int m, int A[][15]) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            for (int k = 0; k < m - j - 1; k++) { //pętla służąca do zamiany elementów
                if (A[i][k] < A[i][k + 1]) {
                    swap(A[i][k], A[i][k + 1]);
                }
            }
        }
    }
     //wyświetlenie posortowanej tablicy
    cout << "Posortowana tablica: " << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (A[i][j] < 10) {
                cout << " ";
            }
            cout << A[i][j] << " ";
        }
        cout << endl;
    }
}



int main()
{
    srand(time(NULL));
    int n; // wiersze
    int m; //kolumny
    int A[10][15];
   cout << "Podaj liczbe wierszy: ";
   cin >> n;
   cout << "Podaj liczbe kolumn: ";
   cin >> m;
    dane(n, m, A); 
    pisz_tab(n,m,A);
    sort_tab(n,m,A);
}
