#ifndef PRACOWNIK_H
#define PRACOWNIK_H


#include <stdbool.h>

/*
Zdefiniuj stałą MAX_LEN równą 50, a następnie zdefiniuj C-strukturę Pracownik o polach nazwisko typu char[MAX_LEN-1], imie typu char[MAX_LEN-1], wzrost typu float, pensja typu double oraz czyManager typu bool. Zdefiniuj następujące funkcje:
*/

typedef struct Pracownik{
    char nazwisko[49];
    char imie[49];
    float wzrost;
    double pensja;
    bool czyMenager;
}Pracownik;

// Tworzy strukturę Pracownik
Pracownik makePracownik(const char *nazwisko, const char *imie, float wzrost, double pensja, bool czyMenager);

// Tworzy kopię Pracownika
Pracownik makePracownikCopy(const Pracownik *prac);

// Zwiększa pensję danego pracownika o inflację 12,3%
void podwyzka(Pracownik *prac, float inflacja);

// Wyświetla dane Pracownika
void show(const Pracownik *prac);

#endif
