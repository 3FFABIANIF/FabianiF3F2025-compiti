#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double numero1, numero2;
    double rispostaUtente, sommaCorretta;

    cout << "Scrivi il primo numero: ";
    cin >> numero1;

    cout << "Scrivi il secondo numero: ";
    cin >> numero2;

    cout << "Quanto fa la loro somma? ";
    cin >> rispostaUtente;

    sommaCorretta = numero1 + numero2;

    if (fabs(rispostaUtente - sommaCorretta) < 0.0001) {
        cout << "Risposta esatta! Ottimo lavoro!" << endl;
    } else {
        cout << "Risposta sbagliata. La somma corretta è: " 
             << sommaCorretta << endl;
    }

    return 0;
}
