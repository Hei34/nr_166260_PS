#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "zwierze.h"
#include "pies.h"
int main()
{
    char gatunek[]="asd";
    char imie1[]="maxio";
    char dane[]="dane - asd12";
    bool takzaczipowany = true;
    int maasa=100;
    unsigned int wiek1=99;
    Zwierze zwierze1 = initZwierze(gatunek,maasa,wiek1);
    zwierze1 = tycieZwierzecia(&zwierze1,20);
    showZwierze(&zwierze1);
    Pies pies1 = initPies(&zwierze1,gatunek,imie1,dane,takzaczipowany);
    return 0;
}
