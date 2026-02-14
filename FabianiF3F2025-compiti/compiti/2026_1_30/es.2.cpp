#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    double somma = 0;

    cout << "Quanti numeri? ";
    cin >> n;

    if (n <= 0) return 1;

    vector<double> numeri(n);

    for (int i = 0; i < n; i++) {
        cout << "Numero " << i + 1 << ": ";
        cin >> numeri[i];
        somma += numeri[i];
    }

    double massimo = numeri[0];
    for (int i = 1; i < n; i++) {
        if (numeri[i] > massimo)
            massimo = numeri[i];
    }

    if (somma != 0) {
        double percentuale = (massimo / somma) * 100;
        cout << "Massimo: " << massimo << endl;
        cout << "La percentuale sul totale è: " << percentuale << "%" << endl;
    }

    return 0;
}
