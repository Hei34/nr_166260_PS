#include <stdio.h>
#include <stdlib.h>
int blok(int);
int main()
{
    int n=0;
    printf("Podaj n\n");
    scanf("%d",&n);
    printf("%d",blok(n));
    return 0;
}
int blok(n)
{
    double* blok=malloc(n*sizeof(double));
    return blok;
}
