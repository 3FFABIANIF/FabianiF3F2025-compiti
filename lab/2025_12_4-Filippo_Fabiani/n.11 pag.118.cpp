#include <iostream>
using namespace std;
int main() {
    double a, b;
    cout << "Inserisci il valore di a: ";
    cin >> a;
    cout << "Inserisci il valore di b: ";
    cin >> b;

    if (a != 0) {
        double x = -b / a;
        cout << "La soluzione dell'equazione " << a << "x + " << b << " = 0 è x = " << x << endl;
    
        }
    }
