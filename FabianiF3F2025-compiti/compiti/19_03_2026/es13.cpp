#include <iostream>
using namespace std;

int convertiInBinario(int n, int bin[]) {
    if (n == 0) {
        bin[0] = 0;
        return 1;
    }

    int i = 0;
    while (n > 0) {
        bin[i] = n % 2;
        n = n / 2;
        i++;
    }
    return i;
}

void stampaBinario(int bin[], int dimensione) {
    cout << "Binario: ";
    for (int j = dimensione - 1; j >= 0; j--) {
        cout << bin[j];
    }
    cout << endl;
}

int main() {
    int n;
    int binario[100];

    cout << "Inserisci un numero intero positivo: ";
    cin >> n;

    int cifre = convertiInBinario(n, binario);
    
    stampaBinario(binario, cifre);

    return 0;
}