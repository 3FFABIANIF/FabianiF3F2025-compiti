#include <iostream>
using namespace std;

int main (){
    int righe,colonne;
    int matrice[100][100];
    cout << "inserisci numero di righe: ";
    cin >> righe;
    cout << "inserisci numero di colonne: ";
    cin >> colonne;
    for (int i=0;i<righe;i++){
        for (int b=0;b<colonne;b++){
           matrice [i][b]=i+b;
        }
        cout<<endl;
        
    }
    for(int i=0;i<righe;i++){
        for(int b=0;b<colonne;b++){
            cout<<matrice[i][b]<<" ";
        }
        cout<<endl;
    }
    return 0;
}