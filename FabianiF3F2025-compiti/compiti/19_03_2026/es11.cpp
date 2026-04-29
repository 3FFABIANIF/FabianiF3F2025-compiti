#include <iostream>
using namespace std;

void caricaVettore(int v[], int n) {
    for (int i = 0; i < n; i++) {
        cout << "Elemento " << i << ": ";
        cin >> v[i];
    }
}

bool controllaPariInPosizioniPari(int v[], int n) {
    for (int i = 0; i < n; i += 2) {
        if (v[i] % 2 != 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int v[10];

    caricaVettore(v, 10);

    if (controllaPariInPosizioniPari(v, 10)) {
        cout << "Nelle posizioni pari ci sono solo numeri pari." << endl;
    } else {
        cout << "Nelle posizioni pari NON ci sono solo numeri pari." << endl;
    }

    return 0;
}