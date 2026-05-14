#ifndef GESTORE_H
#define GESTORE_H

#include "contatto.h"

const int MAX_CAPACITY = 100;

class GestoreContattiABC {
public:
    virtual ~GestoreContattiABC() {}
    virtual bool inserisci(const Contatto& c) = 0;
    virtual int cerca(const char* cognome) const = 0;
    virtual void stampaRubrica() const = 0;
};

class GestoreRAMOrdinata : public GestoreContattiABC {
protected:
    Contatto rubrica[MAX_CAPACITY];
    int size;

public:
    GestoreRAMOrdinata();
    bool inserisci(const Contatto& c) override;  
    int cerca(const char* cognome) const override; 
    void stampaRubrica() const override;
};

class GestoreMirroredRAM : public GestoreRAMOrdinata {
private:
    char nomeFile[100];
    void caricaDaFile();
    void creaContattiDefault();

public:
    GestoreMirroredRAM(const char* file);
    ~GestoreMirroredRAM(); 
};

#endif