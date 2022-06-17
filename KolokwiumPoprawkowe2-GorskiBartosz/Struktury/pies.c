#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include "pies.h"
#include "zwierze.h"
Pies initPies(const Zwierze *z,const char *rasa,const char *imie,const char *dane,const bool czyZaczipowany)
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
    showZwierze(&z->zwierze);
    printf("\nRasa: %s",z->rasa);
    printf("\nImie: %s",z->imie);
    printf("\nDane w�a�ciciela: %s",z->daneWlasciciela);
}
Pies tyciePsa(const Pies *z,double dodajkg){
    Pies temp = *z;
    temp.zwierze.masa = z->zwierze.masa + dodajkg;
    return temp;
}
