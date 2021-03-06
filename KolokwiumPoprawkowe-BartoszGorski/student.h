#ifndef STUDENT_H
#define STUDENT_H
#include "czlowiek.h"
#define MAX_LEN 50
/*
Zdefiniuj C-strukturę Student o polach
* a typu Czlowiek,
* nrIndeksu typu int
* kierunek typu char[MAX_LEN-1]
Zdefiniuj następujące funkcje:
*/

typedef struct Student {
    Czlowiek a;
    int nrIndeksu;
    char kierunek[MAX_LEN-1];
} Student;

Student initStudent(const Czlowiek *s, const int nrIndeksu,const char *kierunek);

void showStudent(const Student *s);


#endif
