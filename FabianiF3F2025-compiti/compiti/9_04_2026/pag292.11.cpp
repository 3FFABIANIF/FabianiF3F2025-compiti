#include <iostream>
#include <string>
using namespace std;

void caricaDati(string cogn[], string cit[], string tel[], int gg[], int mm[], int n) {
    for (int i = 0; i < n; i++) {
        cout << "\nPersona " << i + 1 << ":" << endl;
        cout << "Cognome: "; cin >> cogn[i];
        cout << "Citta': "; cin >> cit[i];
        cout << "Telefono: "; cin >> tel[i];
        cout << "Giorno nascita: "; cin >> gg[i];
        cout << "Mese nascita: "; cin >> mm[i];
    }
}

void cercaPerCittaMese(string cogn[], string cit[], int mm[], int n, string c, int m) {
    bool trovato = false;
    for (int i = 0; i < n; i++) {
        if (cit[i] == c && mm[i] == m) {
            cout << "- " << cogn[i] << endl;
            trovato = true;
        }
    }
    if (!trovato) cout << "Nessun risultato." << endl;
}

void cercaPerTelefono(string cogn[], string cit[], string tel[], int gg[], int mm[], int n, string t) {
    for (int i = 0; i < n; i++) {
        if (tel[i] == t) {
            cout << "Trovato: " << cogn[i] << " di " << cit[i] << " nato il " << gg[i] << "/" << mm[i] << endl;
            return;
        }
    }
    cout << "Numero non trovato." << endl;
}

int main() {
    int N;
    string cognome[100], citta[100], telefono[100];
    int giorno[100], mese[100];

    cout << "Inserisci numero persone: ";
    cin >> N;

    caricaDati(cognome, citta, telefono, giorno, mese, N);

    string c_ricerca;
    cout << "\nCitta' da cercare (per nati in agosto): ";
    cin >> c_ricerca;
    cercaPerCittaMese(cognome, citta, mese, N, c_ricerca, 8);

    string t_ricerca;
    cout << "\nTelefono da cercare: ";
    cin >> t_ricerca;
    cercaPerTelefono(cognome, citta, telefono, giorno, mese, N, t_ricerca);

    int g_oggi, m_oggi;
    cout << "\nGiorno e mese di oggi (separati da spazio): ";
    cin >> g_oggi >> m_oggi;

    for (int i = 0; i < N; i++) {
        if (giorno[i] == g_oggi && mese[i] == m_oggi) {
            cout << "Auguri a " << cognome[i] << "!" << endl;
        }
    }

    return 0;
}