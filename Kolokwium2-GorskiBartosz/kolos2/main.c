#include <stdio.h>
#include "pracownik.h"
#include <string.h>
#include <stdbool.h>

bool czyPrawidlowaPensja (double pensja);
bool czyPrawidlowyWzrost (float wzrost);

int main(int argc, char *argv[])
{
    // 1) Popro� u�ytkownika o wpisanie danych pracownika. Zabezpiecz dane! Zak�adamy, �e czlowiek moze miec wzrost z zakresu 1.40-2.20 m, a pensja minimalna powinna by� nie mniejsza niz 3010 zl . Napisz odpowiednie funkcje sprawdzaj�ce poprawno�� danych.
    char tempnazw[49];
    char tempim[49];
    float tempwzrost=1;
    double temppensja=10;
    bool tempczymen;
    bool ok=false;
    float infloacja=12.3;
    printf("Podaj imie ");
    scanf("%s",&tempim);
    printf("Podaj nazwisko ");
    scanf("%s",&tempnazw);
    printf("Podaj wzrost w m ");
    scanf("%f",&tempwzrost);

    printf("Podaj pensje ");
    scanf("%lf",&temppensja);

    printf("Czy menager ");
    scanf("%d",&tempczymen);
     // 2) Zainicjalizuj struktur� o nazwie prac1 wprowadzonymi danymi.
    if(czyPrawidlowaPensja(temppensja)&&czyPrawidlowyWzrost(tempwzrost))
        ok=true;
    Pracownik prac1 = makePracownik(tempnazw,tempim,tempwzrost,temppensja,tempczymen);
    // 3) Stw�rz struktur� o nazwie prac2 kopiuj�c obiekt prac1.
    Pracownik prac2 = makePracownikCopy(&prac1);
    // 4) Stw�rz struktur� o nazwie prac3 kopiuj�c obiekt prac1.
    Pracownik prac3 = makePracownikCopy(&prac1);
    // 5) Zmie� nazwisko pracownika prac1 na Kowalski
    strcpy(prac1.nazwisko,"Kowalski");
    // 6) Zmie� nazwisko pracownika prac2 na Nowak
    strcpy(prac2.nazwisko,"Nowak");
    // 7) Zmie� nazwisko pracownika prac3 na Nowakowski
    strcpy(prac1.nazwisko,"Nowakowski");
    // 8) Zmie� wzrost pracownika na prac2 na 2.02
    prac2.wzrost=2.02;
    // 9) Zmie� czyManager pracownika prac3 na true
    prac3.czyMenager=true;
    // 10) Podnie� pensj� pracownika prac1 o inflacj�
    prac1.pensja+=infloacja;
    // 11) Wypisz informacje o obiektach prac1, prac2, prac3
    show(&prac1);
    show(&prac2);
    show(&prac3);
    // 12) stw�rz tablic� o nazwie tab trzech Pracownik�w


    // 13) W p�tli for do przechodzenia tablicy zamiast indeks�w nale�y u�y� wska�nik�w, a ka�dy operator indeksowania nale�y zastapi� operatorem dereferencji!!
    // Przejd� tablic� i wype�nij j� Pracownikami uzywaj�c odpowiedniej funkcji.

    // 14) W p�tli for do przechodzenia tablicy zamiast indeks�w nale�y u�y� wska�nik�w, a ka�dy operator indeksowania nale�y zastapi� operatorem dereferencji!!
    // Wypisz informacje o wszystkich obiektach typu Pracownik znajduj�cych sie w tablicy tab
}
bool czyPrawidlowaPensja (double pensja)
{
    if(pensja>=3010)
        return true;
    else
        return false;
}
bool czyPrawidlowyWzrost (float wzrost){
    if((wzrost>=1.40)&&(wzrost<=2.20))
        return true;
    else
        return false;
}
