#include <stdio.h>
#include <stdlib.h>
void ciagkopian(char[],char[],int);
int main()
{
    int n=5;
    char wyraz1[]="wakacje";
    char wyraz2[50];
    ciagkopian(wyraz1,wyraz2,n);
    printf("%s",wyraz2);
    return 0;
}
void ciagkopian(char tab[],char tab2[],int n)
{
    for(int i=0;i<n;++i)
    {
        tab2[i]=tab[i];
    }
    tab2[n]='\0';
}
