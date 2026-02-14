#include <iostream>
using namespace std;

int main() {

    int numero;

    cout << "Inserisci numeri tra 2 e 20 ( digitare numero maggiore di 20 per usciue30):\n";

    while (true) {
        cout << "> ";
        cin >> numero;

        if (numero < 2 || numero > 20)
            break;

        cout << "Multipli: ";
        for (int i = numero; i < 100; i += numero) {
            cout << i << " ";
        }
        cout << endl;
    }

    return 0;
}
