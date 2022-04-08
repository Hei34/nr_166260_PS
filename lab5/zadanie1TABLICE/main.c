#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void generatorfrajdy(short [],int);
void funkcjaa(short [],int);
void funkcjab(short [],int);
void funkcjac(short [],int,int,int);
void funkcjad(short [],int);
void funkcjae(short [],int);
int main()
{
    int n=1001,lewy=-1,prawy=-1;
    const int N=1000;
    short tablica[N];
    printf("liczba elementow:\n");
    while((n>=N)||(n<0))
    {
        scanf("%d",&n);
    }
    generatorfrajdy(tablica,n);
    /*  TO JEST DO FUNKCJI C
    printf("\npodaj lewy i prawy(wiekszy lub rowny 0 i mniejszy od n)\n");
    while(!((prawy>lewy)&&((lewy>0)&&(lewy<n))&&((prawy>0)&&(prawy<n))))
    {
        scanf("%d %d",&lewy,&prawy);
    }
    */
    funkcjae(tablica,n);
    return 0;
}
void generatorfrajdy(short tab[],int n)
{
    srand(time(0));
    for(int i=0;i<n;++i)
    {
        tab[i]=rand()%101;
        printf("%d ",tab[i]);
    }
}
void funkcjaa(short tab[],int n)
{
    printf("\npozmianie\n");
    for(int i=0;i<n;++i)
    {
        if(tab[i]%2!=0)
            tab[i]=3*tab[i]+1;
        else
        {
            int maks=0;
            for(int j=1;j<tab[i];j+=2)
            {
                if (tab[i]%j==0)
                    maks=j;
            }
            tab[i]=maks;
        }
        printf("%d ",tab[i]);
    }
}
void funkcjab(short tab[],int n)
{
    printf("\npozmianie\n");
    for(int i=0;i<n;++i)
    {
        if(tab[i]%2!=0)
            tab[i]=tab[i]*2;
        else
            tab[i]=tab[i]*(-1);
        printf("%d ",tab[i]);
    }
    printf("\npozmianie 2\n");
    for(int i=0;i<n;++i)
    {
        if(tab[i]>0)
            tab[i]=1;
        else
            tab[i]=-1;
        printf("%d ",tab[i]);
    }
}
void funkcjac(short tab[],int lewy,int prawy,int n)
{
    short temp[n];
    printf("\n");
    for(int i=0;i<n;++i)
    {
        temp[i]=tab[i];
        printf("%d ",temp[i]);
    }
    printf("\n");

    int dlugosc=prawy-lewy;
    for(int i=0;i<=dlugosc;i++)
    {
        tab[lewy+i]=temp[prawy-i];
    }
    for(int i=0;i<n;++i)
    {
        printf("%d ",tab[i]);
    }
}
void funkcjad(short tab[],int n)
{
    int parz=0,nieparz=0;
    for(int i=0;i<n;++i)
    {
        if(tab[i]%2==0)
            parz++;
        else
            nieparz++;
    }
    printf("\nParzyste %d i nieparzyste %d",parz,nieparz);
}
void funkcjae(short tab[],int n)
{
    int maks=0,licznik=1;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if((tab[i]>tab[j])&&(tab[i]>=maks))
            {
                if(tab[i]==maks)
                    licznik++;
                maks=tab[i];
                break;
            }
        }
    }
    printf("\nmaksymalny element: %d , wystapil %d razy",maks,licznik);
}
