#include <iostream>
using namespace std;

void caricaPremi(float p[], int n) {
    for (int i = 0; i < n; i++) {
        cout << "Premio " << i + 1 << ": ";
        cin >> p[i];
    }
}

void stampaInIntervallo(float p[], int n, float min, float max) {
    for (int i = 0; i < n; i++) {
        if (p[i] >= min && p[i] <= max) {
            cout << p[i] << endl;
        }
    }
}

int main() {
    int N;
    float premi[100];
    float v_min, v_max;

    cout << "Numero premi: ";
    cin >> N;

    caricaPremi(premi, N);

    cout << "Valore minimo: ";
    cin >> v_min;

    cout << "Valore massimo: ";
    cin >> v_max;

    cout << "Premi compresi nell'intervallo:" << endl;
    stampaInIntervallo(premi, N, v_min, v_max);

    return 0;
}