#include <iostream>
#include <string>
using namespace std;

void caricaVettore(string v[], int n) {
    for (int i = 0; i < n; i++) {
        cout << "Inserisci nome " << i + 1 << ": ";
        cin >> v[i];
    }
}

bool cercaNome(string v[], int n, string nomeDaCercare) {
    for (int i = 0; i < n; i++) {
        if (v[i] == nomeDaCercare) {
            return true;
        }
    }
    return false;
}

int main() {
    int n1, n2;
    string a1[100], a2[100], nome;

    cout << "Quanti nomi nel primo vettore? ";
    cin >> n1;
    caricaVettore(a1, n1);

    cout << "Quanti nomi nel secondo vettore? ";
    cin >> n2;
    caricaVettore(a2, n2);

    cout << "Inserisci il nome da cercare: ";
    cin >> nome;

    bool inA1 = cercaNome(a1, n1, nome);
    bool inA2 = cercaNome(a2, n2, nome);

    if (inA1 && inA2) {
        cout << "Il nome compare in entrambi i vettori." << endl;
    } else if (inA1) {
        cout << "Il nome compare solo nel primo vettore." << endl;
    } else if (inA2) {
        cout << "Il nome compare solo nel secondo vettore." << endl;
    } else {
        cout << "Il nome non compare in nessuno dei due vettori." << endl;
    }

    return 0;
}