#include <iostream>
#include <string>
#include <vector>
using namespace std;
struct Contatto {
    string nome;
    string cognome;
    string numero;
}
void inserimentoAppend (vector<Contatto>&rubrica,string n,string c,string num){
Contatto nuovo;
nuovo.nome=n 
nuovo.cognome=c
nuovo.numero=num
rubrica.push_back(nuovo)
}
void ricercaSequenziale (const vector<Contatto>&rubrica,string cognomeCercato ){
    bool trovato=false
    for(int=0;int i<rubrica.size();i++) {
        if(rubrica [i].cognome==cognomeCercato){
            cout<< "contatto alla posizione"<<i<<":"
            rubrica [i].nome<<""<<
            rubrica [i].cognome<<""<<
            rubrica [i].numero<<endl;
            trovato=true;
        }
    }
    if (!trovato) {
        cout <<"nessun contatto trovato con un cognome:"<<cognome cercato<<endl;
    }
    }
}   



