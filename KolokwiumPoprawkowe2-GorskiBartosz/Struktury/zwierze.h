#ifndef ZWIERZE_H
#define ZWIERZE_H
#define MAX_LEN 20
typedef struct Zwierze{
    char gatunek[MAX_LEN - 1];
    int masa;
    unsigned int wiek;
}Zwierze;
Zwierze initZwierze(const char *gatunek,const int masa,const unsigned int wiek);
Zwierze tycieZwierzecia(const Zwierze *z,int dodajkg);
void showZwierze(const Zwierze *z);
#endif
