#include "gestore.h"
#include <iostream>
#include <cstring>
#include <fstream>

using namespace std; 



GestoreRAMOrdinata::GestoreRAMOrdinata() : size(0) {}

bool GestoreRAMOrdinata::inserisci(const Contatto& c) {
    if (size >= MAX_CAPACITY) return false;

    int i = size - 1;
    while (i >= 0 && strcmp(rubrica[i].getCognome(), c.getCognome()) > 0) {
        rubrica[i + 1] = rubrica[i];
        i--;
    }
    rubrica[i + 1] = c;
    size++;
    return true;
}

int GestoreRAMOrdinata::cerca(const char* cognome) const {
    int inizio = 0;
    int fine = size - 1;

    while (inizio <= fine) {
        int medio = inizio + (fine - inizio) / 2;
        int comparazione = strcmp(rubrica[medio].getCognome(), cognome);

        if (comparazione == 0) return medio; 
        if (comparazione < 0) inizio = medio + 1; 
        else fine = medio - 1; 
    }
    return -1; 
}

void GestoreRAMOrdinata::stampaRubrica() const {
    if (size == 0) {
        cout << "Rubrica vuota." << endl;
        return;
    }
    for (int i = 0; i < size; i++) {
        cout << "[" << i << "] ";
        rubrica[i].stampa();
    }
}



GestoreMirroredRAM::GestoreMirroredRAM(const char* file) {
    strncpy(nomeFile, file, 99);
    nomeFile[99] = '\0';
    caricaDaFile();
}

GestoreMirroredRAM::~GestoreMirroredRAM() {
    ofstream f(nomeFile);
    if (f.is_open()) {
        for (int i = 0; i < size; i++) {
            f << rubrica[i].getNome() << " " << rubrica[i].getCognome() << "\n";
        }
        f.close();
        cout << "Dati salvati con successo su " << nomeFile << "!" << endl;
    }
}

void GestoreMirroredRAM::caricaDaFile() {
    ifstream f(nomeFile);
    if (!f.is_open()) {
        cout << "File non trovato. Genero contatti di default..." << endl;
        creaContattiDefault();
        return;
    }

    char n[50];
    char c[50];
    while (f >> n >> c) {
        inserisci(Contatto(n, c));
    }
    f.close();
}

void GestoreMirroredRAM::creaContattiDefault() {
    inserisci(Contatto("Mario", "Rossi"));
    inserisci(Contatto("Luigi", "Verdi"));
    inserisci(Contatto("Giulia", "Bianchi"));
    inserisci(Contatto("Anna", "Neri"));
    inserisci(Contatto("Paolo", "Gialli"));
    inserisci(Contatto("Laura", "Marrone"));
    inserisci(Contatto("Marco", "Blu"));
    inserisci(Contatto("Sofia", "Viola"));
    inserisci(Contatto("Luca", "Rosa"));
    inserisci(Contatto("Elena", "Grigi"));
}