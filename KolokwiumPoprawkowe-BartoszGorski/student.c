#include <stdio.h>
#include <string.h>
#include "student.h"
#include "czlowiek.h"

// inicjalizuje strukture student
Student initStudent(const Czlowiek *g, const int nrIndeksu,const char *kierunek) {
    Student temp;
    temp.a=*g;
    temp.nrIndeksu=nrIndeksu;
    strcpy(temp.kierunek,kierunek);
}


/*
Nie powielaj kodu, wykorzystaj funkcje z innego pliku. Cialo funkcji showStudent powinno miec max 3 linijki.

Imię: Anna.
Nazwisko: Kowalski.
Adres: Konwaliowa 5/10.
Pesel: 90061201801.
Numer indeksu: 12345.
Kierunek: informatyka.
*/
void showStudent(const Student *s) {
    Czlowiek temp2=s->a;
    show(&temp2);
    printf("\nNumer indeksu: %d",s->nrIndeksu);
    printf("\nKierunek: %s",s->kierunek);
}
