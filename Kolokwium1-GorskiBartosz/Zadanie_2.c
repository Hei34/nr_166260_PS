#include <stdio.h>
#include <stdlib.h>
double dzialanienmp(int,int,int);
int main()
{
    int n=0,m=0,p=0;
    printf("Podaj n,m i p\n");
    while(!(p!=0||n!=0||m!=0))
    {
        scanf("%d %d %d",&n,&m,&p);
    }
    printf("\nwynik: %f",dzialanienmp(n,m,p));
    return 0;
}
double dzialanienmp(int n,int m,int p)
{
    double wynik=1;
    for(int i=0;i<m;++i)
    {
        wynik*=n;
    }
    wynik=wynik/p;
    return wynik;
}
