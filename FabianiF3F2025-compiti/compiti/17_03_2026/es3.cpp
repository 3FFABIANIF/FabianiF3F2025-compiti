#include <iostream>
using namespace std;

void caricaVettore(int v[], int n) {
    for (int i = 0; i < n; i++) {
        cout << "Elemento " << i << ": ";
        cin >> v[i];
    }
}

bool controllaOrdine(int v[], int n) {
    for (int i = 1; i < n; i++) {
        if (v[i] < v[i - 1]) {
            return false;
        }
    }
    return true;
}

int main() {
    int N;
    int v[100];

    cout << "Quanti elementi? ";
    cin >> N;

    caricaVettore(v, N);

    if (controllaOrdine(v, N)) {
        cout << "L'array e' ordinato." << endl;
    } else {
        cout << "L'array NON e' ordinato." << endl;
    }

    return 0;
}