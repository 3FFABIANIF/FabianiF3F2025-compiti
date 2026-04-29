#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void generaCasuali(int v[], int n, int freq[]) {
    for (int i = 0; i < n; i++) {
        v[i] = rand() % 20 + 1;
        freq[v[i]]++;
    }
}

void stampaVettore(int v[], int n) {
    for (int i = 0; i < n; i++) {
        cout << v[i] << " ";
    }
    cout << endl;
}

void stampaFrequenze(int freq[], int limite) {
    for (int i = 1; i <= limite; i++) {
        cout << "Numero " << i << ": " << freq[i] << " volte" << endl;
    }
}

int main() {
    int v[100];
    int frequenza[21] = {0};

    srand(time(0));

    generaCasuali(v, 100, frequenza);

    cout << "Vettore generato:" << endl;
    stampaVettore(v, 100);

    cout << "\nStatistiche frequenza:" << endl;
    stampaFrequenze(frequenza, 20);

    return 0;
}