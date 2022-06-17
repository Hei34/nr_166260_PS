#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "zwierze.h"
#include "pies.h"
int main()
{
    char gatunek[]="Canisfamiliarus domesticus";
    char imie1[]="dlugi";
    char rasa[]="jamknik";
    char dane[]="Wielki Mi³osnik Psów z Wielkiej Brytanii ale antyczipowiec";
    bool zaczipowany = false;
    double maasa=20.45;
    unsigned int wiek1=15;
    Zwierze przkladoweZwierze = initZwierze(gatunek,maasa,wiek1);
    showZwierze(&przkladoweZwierze);
    przkladoweZwierze = tycieZwierzecia(&przkladoweZwierze,5.25);
    showZwierze(&przkladoweZwierze);
    Pies przykladowyNiezaczipowanyPies = initPies(&przkladoweZwierze,rasa,imie1,dane,zaczipowany);
    showPies(&przykladowyNiezaczipowanyPies);
    return 0;
}
