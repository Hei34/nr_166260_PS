#include <stdio.h>
#include <stdlib.h>
int porownaj(char[],char[]);
int main()
{
    char ciag1[]="wyraz";
    char ciag2[]="wyraz";
    printf("%d",porownaj(ciag1,ciag2));
    return 0;
}
int porownaj(char tab1[],char tab2[])
{
    int i=0;
    while(tab1[i]!='\0')
    {
        if(tab1[i]!=tab2[i])
            return 0;
        i++;
    }
    return 1;
}
