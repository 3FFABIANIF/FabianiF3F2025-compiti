#include <iostream>
using namespace std;
void biglietto(float peso_bagaglio)
{
    int prezzo = 50;
    if (peso_bagaglio <= 20)
    {
        cout << "Il costo del biglietto e' di 50 euro." << endl;
    }
    else
    {
        float peso_extra = peso_bagaglio - 20;
        float costo_extra = peso_extra *(prezzo*0.02) ;
        float costo_totale = 50 + costo_extra;
        cout << "Il costo del biglietto e' di " << costo_totale << " euro." << endl;
    }
}
    