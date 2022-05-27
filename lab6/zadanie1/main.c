#include <stdio.h>
#include <stdlib.h>
int ciagdlug(char[]);
void ciagkopia(char[],char[]);
void ciagkopian(char[],char[],int);
void konkat(char[],char[]);
void konkatn(char[],char[],int);
int main()
{
    int n=3;
    char tabica[]="alamakota";
    char tablica2[ciagdlug(tabica)];
    char tablica3[50];
    char wyraz1[]="Witam";
    char wyraz2[]=" swiecie";
    printf("%d\n",ciagdlug(tabica));
    ciagkopia(tabica,tablica2);
    ciagkopian(tabica,tablica3,n);
    for(int i=0;i<ciagdlug(tabica);++i)
    {
        printf("%c",tablica2[i]);
    }
    printf("\n");
    for(int i=0;i<n;++i)
    {
        printf("%c",tablica3[i]);
    }
    konkat(wyraz1,wyraz2);
    konkatn(wyraz1,wyraz2,n);
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
void ciagkopian(char tab[],char tab2[],int n)
{
    for(int i=0;i<n;++i)
    {
        tab2[i]=tab[i];
    }
    tab2[n]='\0';
}
int ciagdlug(char tab[])
{
    int i=0;
    while(tab[i]!='\0')
    {
        i++;
    }
    return i;
}
void konkat(char tab1[],char tab2[])
{
    char konkatowana[30];
    int dlug1=ciagdlug(tab1);
    int dlug2=ciagdlug(tab2);
    for(int i=0;i<dlug1;++i)
        konkatowana[i]=tab1[i];
    int j=0;
    for(int i=dlug1;i<(dlug1+dlug2);++i)
    {
        konkatowana[i]=tab2[j];
        j++;
    }
    konkatowana[dlug1+dlug2]='\0';
    printf("\n%s",konkatowana);
}
void konkatn(char tab1[],char tab2[],int n)
{
    char konkatowana[30];
    int dlug1=ciagdlug(tab1);
    int dlug2=ciagdlug(tab2);
    for(int i=0;i<dlug1;++i)
        konkatowana[i]=tab1[i];
    int j=0;
    for(int i=dlug1;i<(dlug1+n);++i)
    {
        konkatowana[i]=tab2[j];
        j++;
    }
    konkatowana[dlug1+n]='\0';
    printf("\n%s",konkatowana);
}
