#include <iostream>
using namespace std;

int main() {
    int N;
    double val, max, min, somma = 0;

    cout << "Numero misurazioni: ";
    cin >> N;

    for (int i = 0; i < N; i++) {
        cin >> val;
        if (i == 0) max = min = val;
        if (val > max) max = val;
        if (val < min) min = val;
        somma += val;
    }

    double m = somma / N;
    double ea = (max - min) / 2;
    double er = ea / m;

    cout << "Err. Assoluto: " << ea 
         << ", Relativo: " << er 
         << ", Percentuale: " << er * 100 << "%" << endl;

    return 0;
}

