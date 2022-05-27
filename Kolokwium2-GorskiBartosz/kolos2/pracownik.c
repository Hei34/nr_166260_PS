#include <stdio.h>
#include <string.h>
#include "pracownik.h"

Pracownik makePracownik(const char *nazwisko, const char *imie, float wzrost, double pensja, bool czyMenager) {
    Pracownik temp;
    strcpy(temp.nazwisko,nazwisko);
    strcpy(temp.imie,imie);
    temp.wzrost = wzrost;
    temp.pensja = pensja;
    temp.czyMenager = czyMenager;
    return temp;
}

Pracownik makePracownikCopy(const Pracownik *prac) {
    Pracownik temp;
    strcpy(temp.nazwisko,prac->nazwisko);
    strcpy(temp.imie,prac->imie);
    temp.wzrost=prac->wzrost;
    temp.pensja=prac->pensja;
    temp.czyMenager=prac->czyMenager;
    return temp;
}

void podwyzka(Pracownik *prac, float inflacja) {
    prac->pensja=prac->pensja*inflacja;
}

// Wyświetla dane Pracownika
void show(const Pracownik *prac) {
    if(prac->czyMenager==false){
        printf("\nNazwisko: %s",prac->nazwisko);
        printf("\nImie: %s",prac->imie);
        printf("\nPensja: %lf",prac->pensja);
        printf("\nWzrost: %lf m",prac->wzrost);
        printf("\nStanowisko: Szeregowy");
    }
    /* Funkcja powinna wyświetlac:
    Nazwisko: Kowalski
    Imię: Jan
    Pensja: 3500 zł
    Wzrost: 2,01 m
    Stanowisko: Manager

    albo

    Nazwisko: Kowalski
    Imię: Jan
    Pensja: 3500 zł
    Wzrost: 2,01 m
    Stanowisko: Szeregowy

    W zaleznosci od pola czyManager
    */
}



