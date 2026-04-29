#include <iostream>
using namespace std;

void generaPitagorica(int mat[][100], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {            
            mat[i][j] = (i + 1) * (j + 1);
        }
    }
}

void stampaMatrice(int mat[][100], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << mat[i][j] << "\t"; 
        }
        cout << endl;
    }
}

int main() {
    int n;
    int tabella[100][100];

    cout << "Inserisci l'ordine della tavola pitagorica: ";
    cin >> n;

    if (n > 100) {
        cout << "Errore: dimensione troppo grande" << endl;
        return 1;
    }

    generaPitagorica(tabella, n);
    
    cout << "\nTavola Pitagorica di ordine " << n << ":" << endl;
    stampaMatrice(tabella, n);

    return 0;
}