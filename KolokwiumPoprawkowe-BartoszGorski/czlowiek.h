#ifndef CZLOWIEK_H
#define CZLOWIEK_H

#include<stdio.h>
#include<stdlib.h>

/*
Zdefiniuj stałą MAX_LEN równą 50, a następnie zdefiniuj C-strukturę Czlowiek o polach
* imie typu char[MAX_LEN-1],
* nazwisko typu char[MAX_LEN-1]
* adres typu char[MAX_LEN-1]
* pesel typu unsigned long long.
Zdefiniuj następujące funkcje:
*/
#define MAX_LEN 50

typedef struct Czlowiek {
    char imie[MAX_LEN-1];
    char nazwisko[MAX_LEN-1];
    char adres[MAX_LEN-1];
    unsigned long long pesel;
    }Czlowiek;

Czlowiek init (const char *imie, const char *nazwisko, const char *adres, const unsigned long long pesel);

void show(const Czlowiek *komp);
#endif
