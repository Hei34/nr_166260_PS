#ifndef ZWIERZE_H
#define ZWIERZE_H
#define MAX_LEN 20
typedef struct Zwierze{
    char gatunek[MAX_LEN - 1];
    double masa;
    unsigned int wiek;
}Zwierze;
Zwierze initZwierze(const char *gatunek,const double masa,const unsigned int wiek);
Zwierze tycieZwierzecia(const Zwierze *z,double dodajkg);
void showZwierze(const Zwierze *z);
#endif
