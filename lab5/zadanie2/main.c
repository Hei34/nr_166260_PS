#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void generatorfrajdy2(short [],int,int,int);
int main()
{
    int n,min=0,maks=0;
    int const N=1000;
    short tablica[N];
    printf("daj n\n");
    while(!(n>0&&n<N))
        scanf("%d",&n);
    printf("\nDAJ min i maks");
    while(!(maks>min))
        scanf("%d %d",&min,&maks);
    generatorfrajdy2(tablica,n,min,maks);
    return 0;
}
void generatorfrajdy2(short tab[],int n,int min,int maks)
{
    srand(time(0));
    for(int i=0;i<n;++i)
    {
        tab[i]=rand()%(maks+1-min)+min;
        printf("%d ",tab[i]);
    }
}
