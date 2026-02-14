#include <iostream>
using namespace std;

int main() {
    int prev, curr;
    int diff_iniziale, diff;
    int count = 0;
    bool costante = true;

    cout << "Inserisci numeri (999 per terminare):" << endl;

    cin >> prev;
    if (prev == 999) {
        cout << "Numeri inseriti: 0" << endl;
        return 0;
    }
    count = 1;

    cin >> curr;
    if (curr == 999) {
        cout << "Numeri inseriti: 1" << endl;
        return 0;
    }
    count = 2;

    diff_iniziale = curr - prev;

    while (true) {
        prev = curr;
        cin >> curr;
        if (curr == 999) break;

        count++;
        diff = curr - prev;
        if (diff != diff_iniziale)
            costante = false;
    }

    if (costante)
        cout << "La differenza e' costante: " << diff_iniziale << endl;
    else
        cout << "La differenza NON e' costante." << endl;

    cout << "Numeri inseriti: " << count << endl;

    return 0;
}
