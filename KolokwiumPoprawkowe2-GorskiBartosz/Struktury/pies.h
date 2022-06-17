#ifndef PIES_H
#define PIES_H
#include <stdbool.h>
#include "zwierze.h"
typedef struct Pies{
    Zwierze zwierze;
    char rasa[MAX_LEN - 1];
    char imie[MAX_LEN - 1];
    char daneWlasciciela[MAX_LEN + 10];
    bool czyZaczipowany;
}Pies;

Pies initPies(const Zwierze *z,const char *rasa,const char *imie,const char *dane,const bool czyZaczipowany);

void showPies(const Zwierze *z);

#endif
