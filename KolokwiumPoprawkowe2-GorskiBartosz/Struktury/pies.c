#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "pies.h"
Zwierze initPies(const Zwierze *z,const char *rasa,const char *imie,const char *dane)
{
    Pies temp;
    strcpy(temp.zwierze.gatunek,z->gatunek);
    temp.zwierze.masa = z->masa;
    temp.zwierze.wiek = z->wiek;
    strcpy(temp.rasa,rasa);
    strcpy(temp.imie,imie);
    strcpy(temp.daneWlasciciela,dane);

    return temp;
}
void showPies(const Pies *z){
    showZwierze(&z->zwierze)
    printf("\nRasa: %s",z->rasa);
    printf("\nImie: %s",z->imie);
    printf("\nDane w³aœciciela: %s",z->daneWlasciciela);
}
Zwierze tycieZwierzecia(const Zwierze *z,int dodajkg){
    Zwierze temp;
    strcpy(temp.gatunek,z->gatunek);
    temp.masa = z->masa + dodajkg;
    temp.wiek = z->wiek;
    return temp;
}
