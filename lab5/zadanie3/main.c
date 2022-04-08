#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void generatorfrajdy2(short [],int);
int main()
{
    int n;
    int const N=1000;
    short tablica[N];
    printf("daj n\n");
    while(!(n>0&&n<N))
        scanf("%d",&n);
    printf("\nDAJ min i maks");
    generatorfrajdy2(tablica,n);
    return 0;
}
void generatorfrajdy2(short tab[],int n)
{
    srand(time(0));
    for(int i=0;i<n;++i)
    {
        tab[i]=rand()%(99+1+99)-99;
        printf("%d ",tab[i]);
    }
}
