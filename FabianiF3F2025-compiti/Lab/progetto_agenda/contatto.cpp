#include "contatto.h"
#include <iostream>
#include <cstring>

using namespace std; 

Contatto::Contatto(const char* n, const char* c) {
    setNome(n);
    setCognome(c);
}

const char* Contatto::getNome() const { return nome; }
const char* Contatto::getCognome() const { return cognome; }

void Contatto::setNome(const char* n) {
    strncpy(nome, n, 49);
    nome[49] = '\0';
}

void Contatto::setCognome(const char* c) {
    strncpy(cognome, c, 49);
    cognome[49] = '\0';
}

void Contatto::stampa() const {
    cout << "Nome: " << nome << "\tCognome: " << cognome << endl;
}