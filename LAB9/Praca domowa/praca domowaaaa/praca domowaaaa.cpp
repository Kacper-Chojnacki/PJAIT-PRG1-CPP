#include<iostream>
#include<iomanip>
#include<cstdlib>
#include<cmath>
using namespace std;
void dane(int A[10][10], int n) {
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            A[i][j] = 1 + rand() % 100 ;
        }
    }
}
void pisz_tab(int A[10][10], int n) {
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            if (A[i][j] < 10) {
                cout << " ";
            }
            cout << A[i][j]<<" ";
        }
        cout << endl;
    }
}
void sort(int A[10][10], int n) {
    do {
        for (int i = 0; i < 10; i++) {
            for (int j = 0; j < 10; j++) {
                if (i == j && A[i][j] > A[i + 1][j + 1]) {
                    swap(A[i][j], A[i + 1][j + 1]);
                }
            }
        }
        n--;
    } while (n>0);


    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            if (A[i][j] < 10) {
                cout << " ";
            }
            cout << A[i][j] << " ";
        }
        cout << endl;
    }
}

int main(){
    int A[10][10];
    srand(time(NULL));
    dane(A, 10);
    cout << "Tablica pierwotna:" << endl;
    pisz_tab(A, 10);
    cout << "Tablica po sortowaniu: " << endl;
    sort(A, 10);
}

