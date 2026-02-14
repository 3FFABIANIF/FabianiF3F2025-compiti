#include <iostream>
using namespace std;

int main() {

    double numero;
    double massimo;

    cout << "Inserisci 4 numeri:\n";

    for (int i = 0; i < 4; i++) {
        cin >> numero;

        if (i == 0) {
            massimo = numero;
        } else if (numero > massimo) {
            massimo = numero;
        }
    }

    cout << "Il numero maggiore inserito è: " << massimo << endl;

    return 0;
}
