#include <stdio.h>
#include <stdlib.h>
void wstaw(int,int*);
int main()
{
    int liczba;
    int* w=&liczba;
    int n;
    printf("Podaj liczbe n\n");
    scanf("%d",&n);
    wstaw(n,w);
    printf("%d",liczba);
    return 0;
}
void wstaw(int x,int* wskasnik)
{
    *wskasnik=x;
}
