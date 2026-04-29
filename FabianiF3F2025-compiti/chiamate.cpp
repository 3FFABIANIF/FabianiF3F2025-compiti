#include <iostream>
using namespace std;

int funzione (int n) {
    if (n == 0) {
        return 0;
    }
    else {
        return n + funzione(n-1);
    }
}
int main () {
    int n;
    cout << "inserisci un numero" << endl;
    cin >> n;
    
    int risultato = funzione(n);
    
    cout << "il fattoriale di " << n << " è: " << risultato << endl;
}
