#include <stdio.h>
#include <stdlib.h>
void ciagkopia(char[],char[]);
int main()
{
    char wyraz1[]="agssasgag";
    char wyraz2[50];
    ciagkopia(wyraz1,wyraz2);
    printf("%s",wyraz2);
    return 0;
}
void ciagkopia(char tab[],char tab2[])
{
    int i=0;
    while(tab[i]!='\0')
    {
        tab2[i]=tab[i];
        i++;
    }
    tab2[i]='\0';

}
