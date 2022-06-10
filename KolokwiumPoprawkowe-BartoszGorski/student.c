#include <stdio.h>
#include <string.h>
#include "czlowiek.h"
#include "student.h"


// inicjalizuje strukture student
Student initStudent(const Czlowiek *s, const int nrIndeksu, char *kierunek) {
    Student temp;
    temp.a=*s;
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
    show(&s->a);
    printf("\nNumer indeksu: %lld",s->nrIndeksu);
    printf("\nKierunek: %s",s->kierunek);
}
