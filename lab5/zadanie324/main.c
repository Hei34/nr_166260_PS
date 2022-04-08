#include <stdio.h>
#include <stdlib.h>
int ktorywienkszy(int*,int*);
int main()
{
    int licz1,licz2;
    int* wskaz1=&licz1;
    int* wskaz2=&licz2;
    printf("podaj jakies liczby\n");
    scanf("%d %d",&licz1,&licz2);
    ktorywienkszy(wskaz1,wskaz2);
    printf("%d %d",licz1,licz2);
    return 0;
}
ktorywienkszy(int* a,int* b)
{
    int temp1=*a;
    int temp2=*b;
    if(*a>*b)
    {
        *a=temp2;
        *b=temp1;
    }
    return 0;
}
