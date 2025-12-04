#include <iostream>

using namespace std;

int main() {
    int settimane;
    char supplemento;
    double costisettimanale = 200.0;
    double costisupplemento = 50.0;
    double totale;
    
    double quotafissa; 

    cout << "Inserisci il numero di settimane di soggiorno: ";
    cin >> settimane;

    cout << "Desideri il supplemento lenzuola? (S/N): ";
    cin >> supplemento;

    totale = settimane * costisettimanale;

    if (supplemento == 's' || supplemento == 'S') {
        totale += costisupplemento;
    }

    if (settimane <= 6) {
        quotafissa = 600.0;
    } else if (settimane <= 12) {
        quotafissa = 1100.0;
    } else {
        quotafissa = 0.0;
    }
    
    totale = totale + quotafissa;
    
    std::cout << "Il costo totale del soggiorno e': " << totale << endl;

    return 0;
}