#ifndef CONTATTO_H
#define CONTATTO_H

class Contatto {
private:
    char nome[50];
    char cognome[50];

public:
    Contatto(const char* n = "", const char* c = "");

    const char* getNome() const;
    const char* getCognome() const;

    void setNome(const char* n);
    void setCognome(const char* c);

    void stampa() const;
};

#endif

