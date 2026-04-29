#include <iostream>
using namespace std;

void caricaVettore(char v[], int n) {
    for (int i = 0; i < n; i++) {
        cout << "Inserisci carattere " << i + 1 << ": ";
        cin >> v[i];
    }
}

int contaOccorrenze(char v[], int n, char daCercare) {
    int c = 0;
    for (int i = 0; i < n; i++) {
        if (v[i] == daCercare) {
            c++;
        }
    }
    return c;
}

int main() {
    int N;
    char v[100];
    char cerca;

    cout << "Quanti caratteri vuoi inserire? ";
    cin >> N;

    caricaVettore(v, N);

    cout << "Quale carattere vuoi cercare? ";
    cin >> cerca;

    int risultato = contaOccorrenze(v, N, cerca);

    cout << "Il carattere '" << cerca << "' compare " << risultato << " volte." << endl;

    return 0;
}