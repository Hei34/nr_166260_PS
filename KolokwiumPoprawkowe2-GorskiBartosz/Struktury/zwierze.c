#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "zwierze.h"
Zwierze initZwierze(const char *gatunek,const double masa,const unsigned int wiek){
    Zwierze temp;
    strcpy(temp.gatunek,gatunek);
    temp.masa = masa;
    temp.wiek = wiek;
    return temp;
}
void showZwierze(const Zwierze *z){
    printf("\nGatunek: %s",z->gatunek);
    printf("\nMasa: %f",z->masa);
    printf("\nWiek: %d",z->wiek);
}
Zwierze tycieZwierzecia(const Zwierze *z,double dodajkg){
    Zwierze temp;
    strcpy(temp.gatunek,z->gatunek);
    temp.masa = z->masa + dodajkg;
    temp.wiek = z->wiek;
    return temp;
}

