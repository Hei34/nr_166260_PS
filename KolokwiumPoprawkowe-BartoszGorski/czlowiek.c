#include <stdio.h>
#include <string.h>
#include "czlowiek.h"

//inicjalizuje strukture Czlowiek
Czlowiek init(const char *imie, const char *nazwisko, const char *adres, const unsigned long long pesel) {
    Czlowiek temp;
    strcpy(temp.imie,imie);
    strcpy(temp.nazwisko,nazwisko);
    strcpy(temp.adres,adres);
    temp.pesel=pesel;
    return temp;
}

/*wyswietla dane o czlowieku w formacie:
Imię: Jan.
Nazwisko: Kowalski.
Adres: Konwaliowa 5/10.
Pesel: 90061201801.
* */
void show(const Czlowiek *czlowiek) {
    printf("\n");
    printf("\nImie: %s",czlowiek->imie);
    printf("\nNazwisko: %s",czlowiek->nazwisko);
    printf("\nAdres: %s",czlowiek->adres);
    printf("\nPesel: %lld",czlowiek->pesel);
}

