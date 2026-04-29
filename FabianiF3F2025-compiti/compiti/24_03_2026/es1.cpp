#include <iostream>
#include <string>
using namespace std;

void caricaVettore(string v[], int n) {
    for (int i = 0; i < n; i++) {
        cout << "Cognome " << i + 1 << ": ";
        cin >> v[i];
    }
}

void bubbleSort(string v[], int n) {
    bool scambiato;
    for (int i = 0; i < n - 1; i++) {
        scambiato = false;
        for (int j = 0; j < n - i - 1; j++) {
            if (v[j] > v[j + 1]) {
                // Scambio (Swap)
                string temp = v[j];
                v[j] = v[j + 1];
                v[j + 1] = temp;
                scambiato = true;
            }
        }
        // Se non ci sono stati scambi, l'array è già ordinato
        if (!scambiato) break;
    }
}

void stampaVettore(string v[], int n) {
    for (int i = 0; i < n; i++) {
        cout << v[i] << endl;
    }
}

int main() {
    int n;
    string v[100];

    cout << "Numero studenti: ";
    cin >> n;

    caricaVettore(v, n);
    bubbleSort(v, n);

    cout << "\nOrdine alfabetico finale:" << endl;
    stampaVettore(v, n);

    return 0;
}