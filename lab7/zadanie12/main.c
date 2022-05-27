#include <stdio.h>
#include <stdlib.h>
void ciagkopiawsk(char*,char*);
void ciagkopianwsk(char*,char*,int);
int strlenwskaznik(char*);
void strcatwsk(char*,char*);
void strcatnwsk(char*,char*,int);
int strindex(char[],char[]);
int strent(char[],char[]);
int main()
{
    int n=5;
    char ciag1[]="do przepisania";
    char ciag2[50];
    char ciag3[50];
    char ciag5[60]="ala ";
    char ciag4[]="ma kota";
    char ciag6[]="domek";
    char ciag7[]="dom";
    char ciag8[]="tu jest jakis napis";
    char ciag9[]="napis";
    ciagkopiawsk(ciag1,ciag2);
    printf("%s",ciag2);
    ciagkopianwsk(ciag1,ciag3,n);
    printf("\n%s",ciag3);
    printf("\nCiag1 ma %d znakow",strlenwskaznik(ciag1));
    strcatwsk(ciag5,ciag4);
    printf("\n%s",ciag5);
    strcatnwsk(ciag5,ciag4,n);
    printf("\n%s",ciag5);
    printf("\nczy ciag zawiera drogi ciag : %d",strindex(ciag6,ciag7));
    printf("\nczy ciag2 jest na koncu ciagu1: %d",strent(ciag8,ciag9));
    return 0;
}
int strent(char ciag1[],char ciag2[])
{
    //work in progress
    for(int i=strlenwskaznik(ciag1)+1;i>strlenwskaznik(ciag1)-strlenwskaznik(ciag2);i--)
    {
        if(ciag1[i]!=ciag2[i])
            break;
        return 1;
    }
    return 0;
}
int strindex(char ciag1[],char ciag2[])
{
    int i=0;
    while(ciag1[i]!='\0')
    {
        for(int j=0;j<strlenwskaznik(ciag1);++j)
        {
            if(ciag1[i]==ciag2[j])
            {
                for(int x=0;x<strlenwskaznik(ciag2);++x)
                {
                    if(!(ciag1[i+x]==ciag2[j+x]))
                    {
                        if(x+1==strlenwskaznik(ciag2))
                            return 1;
                        printf("break ");
                        break;
                    }

                }
            }
        }
        ++i;
    }
    return 0;
}
void strcatwsk(char *ciag1,char *ciag2)
{
    while(*ciag2!='\0')
    {
        *(ciag1+strlenwskaznik(ciag1))=*ciag2;
        *ciag2++;
    }
}
void strcatnwsk(char *ciag1,char *ciag2,int n)
{
    for(int i=0;i<n;++i)
    {
        *(ciag1+strlenwskaznik(ciag1))=*ciag2;
        *ciag2++;
    }
}
int strlenwskaznik(char *ciag)
{
    int licznik=0;
    while(*ciag!='\0')
    {
        licznik++;
        *ciag++;
    }

    return licznik;

}
void ciagkopiawsk(char *ciag1,char *ciag2)
{
   while(*ciag1)
   {
      *ciag2 = *ciag1;
      ciag1++;
      ciag2++;
   }
    *ciag2='\0';
}
void ciagkopianwsk(char *ciag1,char *ciag2,int n)
{
    for(int i=0;i<n;++i)
    {
        *(ciag2+i)=*(ciag1+i);
    }
}
