#include <stdio.h>
#include <stdlib.h>
double* jakasfunkcja();
int main()
{
    printf("%p",jakasfunkcja());
    return 0;
}
double* jakasfunkcja()
{
    double* wsumietonawetniewiemcoto=malloc(420*sizeof(double));
    return wsumietonawetniewiemcoto;
}
