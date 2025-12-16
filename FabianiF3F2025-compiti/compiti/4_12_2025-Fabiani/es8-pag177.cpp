#include <bits/stdc++.h>
using namespace std;

int main() {
    double a, b, c;
    if (!(cin >> a >> b >> c)) return 0; // legge tre numeri

    const double eps = 1e-9; // tolleranza per numeri in floating point
    if (fabs(2.0 * b - (a + c)) < eps)
        cout << "Sono in progressione aritmetica\n";
    else
        cout << "Non sono in progressione aritmetica\n";

    return 0;
}