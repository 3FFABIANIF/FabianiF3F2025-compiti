#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

const int NUMERO_QUOTIDIANI = 3;

float calcola_guadagno(int copie) {
    float commissione;

    if (copie <= 200) {
        commissione = 0.10f;
    } 
    else if (copie < 300) {
        commissione = 0.20f;
    }
    else {
        commissione = 0.30f;
    }

    return copie * commissione;
}

int main() {
    string nomi_quotidiani[NUMERO_QUOTIDIANI];
    int copie_vendute[NUMERO_QUOTIDIANI];
    float guadagno_totale = 0.0f;

    cout << "--- Calcolo del Guadagno dell'Edicolante ---" << endl;
    cout << "Tariffe di commissione:" << endl;
    cout << "- Fino a 200 copie: 0.10 EUR/copia" << endl;
    cout << "- Da 201 a 299 copie: 0.20 EUR/copia" << endl;
    cout << "- 300 o più copie: 0.30 EUR/copia" << endl;
    cout << "--------------------------------------------" << endl;

    for (int i = 0; i < NUMERO_QUOTIDIANI; i++) {
        cout << "\nQuotidiano " << i + 1 << ":" << endl;

        cout << "Inserisci il nome del quotidiano: ";
        cin >> nomi_quotidiani[i];

        cout << "Inserisci il numero di copie vendute: ";
        cin >> copie_vendute[i];

        if (copie_vendute[i] < 0) {
            cout << "Errore: Il numero di copie deve essere non negativo. Uscita." << endl;
            return 1;
        }
    }

    cout << "\n\n--- Riepilogo Vendite e Guadagno ---" << endl;
    cout << "-------------------------------------" << endl;
    cout << left << setw(20) << "QUOTIDIANO"
         << right << setw(10) << "COPIE"
         << setw(15) << "GUADAGNO (€)" << endl;
    cout << "-------------------------------------" << endl;

    for (int i = 0; i < NUMERO_QUOTIDIANI; i++) {
        float guadagno_quotidiano = calcola_guadagno(copie_vendute[i]);

        cout << left << setw(20) << nomi_quotidiani[i]
             << right << setw(10) << copie_vendute[i]
             << setw(15) << fixed << setprecision(2) << guadagno_quotidiano
             << endl;

        guadagno_totale += guadagno_quotidiano;
    }

    cout << "-------------------------------------" << endl;
    cout << left << setw(30) << "GUADAGNO TOTALE COMPLESSIVO:"
         << right << setw(15) << fixed << setprecision(2) << guadagno_totale
         << endl;
    cout << "-------------------------------------" << endl;

    return 0;
}



