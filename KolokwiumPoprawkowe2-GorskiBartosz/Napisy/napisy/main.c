#include <stdio.h>
#include <stdlib.h>
char* strncat(char*, const char*, int );
int main()
{
    char* miejsce = calloc(50,sizeof(char));
    char napis[] = "duzonapisaneasfa";
    int n = 10;
    strncat(napis,miejsce,n);

    printf("%s",miejsce);
    return 0;
}
char* strncat(char* t, const char* s, int n)
{
    char* temp = t;
    while(n>=0){
        *t = *s;
        ++t;
        ++s;
        n--;
    }
    *t='\0';
    return temp;
}
