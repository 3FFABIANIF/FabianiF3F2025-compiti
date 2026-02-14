#include <iostream>
#include <iomanip>
using namespace std;

int main() {

    const double PI = 3.141592653589793;

    cout << fixed << setprecision(2);
    cout << "Calcolo di circonferenza e area dei cerchi (raggio 1-20)\n";
    cout << "---------------------------------------------------------\n";
    cout << "Raggio" << setw(18) << "Circonferenza"
         << setw(15) << "Area\n";
    cout << "---------------------------------------------------------\n";

    for (int r = 1; r <= 20; r++) {
        double circ = 2 * PI * r;
        double area = PI * r * r;

        cout << setw(6) << r
             << setw(18) << circ
             << setw(15) << area << endl;
    }

    return 0;
}
