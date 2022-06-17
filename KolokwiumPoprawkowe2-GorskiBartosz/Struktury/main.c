#include <stdio.h>
#include <stdlib.h>
#include "zwierze.h"
int main()
{
    char gatunek[]="asd";
    int maasa=100;
    unsigned int wiek1=99;
    Zwierze zwierze1 = initZwierze(gatunek,maasa,wiek1);
    zwierze1 = tycieZwierzecia(&zwierze1,20);
    showZwierze(&zwierze1);
    return 0;
}
