#include <stdio.h>
#include "czlowiek.h"
#include "student.h"
#include <string.h>


int main(int argc, char *argv[])
{

    //ten kod sluzy przetestowaniu struktury Czlowiek i funkcji z nia zwiazanych - nie zmieniaj go
    Czlowiek przykladowy = init("Jan", "Kowalski", "Konwaliowa 5/10", 90061201801);
    show(&przykladowy);
    Czlowiek test = init("test","test","test",1111);

    //1) Zainicjalizuj strukture Student o nazwie student1 danymi:
    //czlowiek - przykladowy,
    //nr indeksu 12345
    //kierunek informatyka
    Student student1 = initStudent(&przykladowy,12345,"Informatyka");
    Student student2 = initStudent(&test,333,"Geodezja");

    //2) Wypisz informacje nt student1 za pomoca odpowiedniej funkcji
    showStudent(&student1);

    //3) Zmien nazwisko czlowieka na Nowak
    strcpy(przykladowy.nazwisko,"Nowak");
    //4)Wypisz informacje nt czlowieka przykladowego za pomoca odpowiedniej funkcji
    show(&przykladowy);
    //5)Wypisz informacje nt student1 za pomoca odpowiedniej funkcji
    showStudent(&student1);
    //6)Zmien imie studenta1 na Anna
    strcpy(student1.a.imie,"Anna");
    //7) Wypisz informacje nt czlowieka przykladowego za pomoca odpowiedniej funkcji
    show(&przykladowy);
    //8) Wypisz informacje nt student1 za pomoca odpowiedniej funkcji
    showStudent(&student1);
    //9) Stwórz tablicê o nazwie tab trzech Studentow
    Student tab[3];

    //10) W pêtli for do przechodzenia tablicy zamiast indeksów nale¿y u¿yæ wskaŸników, a ka¿dy operator indeksowania nale¿y zastapiæ operatorem dereferencji!!
    // PrzejdŸ tablicê i wype³nij j¹ studentami z damymi wymyslonymi przez Ciebie uzywaj¹c odpowiedniej funkcji.
    for (Student *i = tab; i < tab + 3; ++i)
    {
        *i = initStudent(&przykladowy,15345,"Geodezja");
    }

    //11) W pêtli for do przechodzenia tablicy zamiast indeksów nale¿y u¿yæ wskaŸników, a ka¿dy operator indeksowania nale¿y zastapiæ operatorem dereferencji!!
    // Wypisz informacje o wszystkich obiektach typu Student znajduj¹cych sie w tablicy tab
    for (Student *i = tab; i < tab + 3; ++i)
    {
        show(i);
    }

    return 0;
}
