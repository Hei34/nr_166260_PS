#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
void tablicagenerator(short [],int);
int main()
{
    int const N=1000;
    int n=-1;
    int liczba;
    int ujemne=0;
    int sufity3=0;
    short tab[N];
    printf("Podaj n(wieksze od 0)\n");
    while(n<0)
    {
        scanf("%d",&n);
    }
    tablicagenerator(tab,n);

    for(int i=0;i<n;++i)
    {
        if(tab[i]<0)
            ujemne++;
        liczba=ceil(tab[i]);
        if(liczba%3==0)
            sufity3++;
    }
    printf("\nJest %d ujemnych oraz %d takich ktorych sufit jest podzielny przez 3",ujemne,sufity3);
    return 0;
}
void tablicagenerator(short tab[],int n)
{
    srand(time(0));
    for(int i=0;i<n;++i)
    {
        tab[i]=rand()%51-20;
        printf("%d ",tab[i]);
    }
}
