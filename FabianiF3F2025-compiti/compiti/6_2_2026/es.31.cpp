

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int sett, copie;
    int max_copie = -1, giorno_max = 0;
    int totale = 0;
    int totale_dom = 0, count_dom = 0;

    for (int i = 1; i <= 31; i++) {
        cout << "Giorno " << i << " (settimana 1=Lun..7=Dom) e copie: ";
        cin >> sett >> copie;

        if (copie > max_copie) {
            max_copie = copie;
            giorno_max = i;
        }

        totale += copie;

        if (sett == 7) {
            totale_dom += copie;
            count_dom++;
        }
    }

    cout << "Massimo vendite il giorno: " << giorno_max << endl;

    double media_giornaliera = static_cast<double>(totale) / 31;
    media_giornaliera = round(media_giornaliera * 100) / 100; // arrotonda a 2 decimali
    cout << "Media giornaliera: " << media_giornaliera << endl;

    if (count_dom > 0) {
        double media_dom = static_cast<double>(totale_dom) / count_dom;
        media_dom = round(media_dom * 100) / 100; // arrotonda a 2 decimali
        cout << "Media domenicale: " << media_dom << endl;
    }

    return 0;
}
