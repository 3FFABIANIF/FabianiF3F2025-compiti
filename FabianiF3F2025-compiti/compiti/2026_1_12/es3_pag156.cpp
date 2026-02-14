#include <iostream>
using namespace std;

int main() {

    double numero;
    double minimo, massimo;

    cout << "Inserisci 10 numeri:\n";

    for (int i = 0; i < 10; i++) {
        cin >> numero;

        if (i == 0) {
            minimo = massimo = numero;
        } else {
            if (numero < minimo)
                minimo = numero;
            if (numero > massimo)
                massimo = numero;
        }
    }

    cout << "Valore minimo: " << minimo << endl;
    cout << "Valore massimo: " << massimo << endl;

    return 0;
}

