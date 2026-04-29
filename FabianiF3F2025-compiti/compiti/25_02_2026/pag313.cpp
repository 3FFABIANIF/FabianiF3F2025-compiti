#include <iostream>
using namespace std;

const int N = 4;

void stampa(int m[N][N]) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cout << m[i][j] << "\t";
        }
        cout << endl;
    }
}

int sommaDiagonale(int m[N][N]) {
    int s = 0;
    for (int i = 0; i < N; i++) {
        s += m[i][i];
    }
    return s;
}

void trasposta(int m[N][N], int t[N][N]) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            t[j][i] = m[i][j];
        }
    }
}

int main() {
    int mat[N][N];
    int tr[N][N];
    int scelta;

    cout << "Inserisci i valori della matrice:" << endl;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cin >> mat[i][j];
        }
    }

    do {
        cout << "\n1. Somma diagonale\n2. Trasposta\n3. Stampa\n0. Esci\nScelta: ";
        cin >> scelta;

        if (scelta == 1) {
            cout << "Somma: " << sommaDiagonale(mat) << endl;
        } 
        else if (scelta == 2) {
            trasposta(mat, tr);
            stampa(tr);
        } 
        else if (scelta == 3) {
            stampa(mat);
        }
    } while (scelta != 0);

    return 0;
}