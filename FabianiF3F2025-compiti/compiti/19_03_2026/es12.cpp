#include <iostream>
using namespace std;

bool esPrimo(int numero) {
    if (numero <= 1) return false;
    
    int divisori = 0;
    for (int i = 1; i <= numero; i++) {
        if (numero % i == 0) {
            divisori++;
        }
    }
    
    return (divisori == 2);
}

void caricaVettore(int v[], int n) {
    for (int i = 0; i < n; i++) {
        cout << "Numero " << i + 1 << ": ";
        cin >> v[i];
    }
}

int main() {
    int n;
    int v[100];

    cout << "Quanti numeri vuoi inserire? ";
    cin >> n;

    caricaVettore(v, n);

    cout << "Numeri primi trovati: " << endl;
    for (int i = 0; i < n; i++) {
        if (esPrimo(v[i])) {
            cout << v[i] << " ";
        }
    }
    cout << endl;

    return 0;
}