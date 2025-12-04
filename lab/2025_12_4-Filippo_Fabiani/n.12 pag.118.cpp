#include <iostream>
using namespace std;
int main() {
    int età1, età2, età3;

    cout << "Inserisci l'età del primo fratello: ";
    cin >> età1;
    cout << "Inserisci l'età del secondo fratello: ";
    cin >> età2;
    cout << "Inserisci l'età del terzo fratello: ";
    cin >> età3;

    int maxetà = max(età1, max(età2, età3));
    int minetà = min(età1, min(età2, età3));

    cout << "La differenza di età tra il fratello maggiore e il fratello minore è: " << maxetà - minetà << endl;

    return 0;
}