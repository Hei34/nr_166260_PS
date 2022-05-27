#include <stdio.h>
#include <stdlib.h>
char* kopiuj(char[],char*);
int main()
{
    char napis1[]="tablicaznakow";
    char napis2[]="dowskaznika";
    char* wskaznik=&napis2;
    kopiuj(napis1,wskaznik);
    printf("\n%s",napis2);
    return 0;
}
char* kopiuj(char tab1[],char* wskaznik)
{
    char temp[50];
    int i=0;
    while(tab1[i]!='\0')
    {
        temp[i]=tab1[i];
        ++i;
    }
    temp[i]='\0';
    *temp=wskaznik;
    printf("%s",temp);
    return temp;
}
