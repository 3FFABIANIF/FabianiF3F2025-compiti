#include <iostream>
using namespace std;

void caricaVettore(int v[], int n) {
    for (int i = 0; i < n; i++) {
        cout << "Elemento " << i << ": ";
        cin >> v[i];
    }
}

int eliminaElemento(int v[], int n, int x, int nuovo[]) {
    int j = 0;
    for (int i = 0; i < n; i++) {
        if (v[i] != x) {
            nuovo[j] = v[i];
            j++;
        }
    }
    return j;
}

void stampaVettore(int v[], int n) {
    for (int i = 0; i < n; i++) {
        cout << v[i] << " ";
    }
    cout << endl;
}

int main() {
    int n, x;
    int v[100], nuovo[100];

    cout << "Dimensione vettore: ";
    cin >> n;

    caricaVettore(v, n);

    cout << "Numero da eliminare: ";
    cin >> x;

    int nuovaDimensione = eliminaElemento(v, n, x, nuovo);

    cout << "Nuovo vettore:" << endl;
    stampaVettore(nuovo, nuovaDimensione);

    return 0;
}