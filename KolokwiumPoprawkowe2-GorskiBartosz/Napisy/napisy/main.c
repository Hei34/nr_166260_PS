#include <stdio.h>
#include <stdlib.h>
char* strncat(char* t, const char* s, size_t n);
int main()
{
    char* miejsce = calloc(50,sizeof(char));
    char napis[] = "duzonapisaneasfa";
    size_t n = 10;
    strncat(napis,miejsce,n);
    printf("\n%s",miejsce);
    return 0;
}
char* strncat(char* t, const char* s, size_t n)
{
    char* temp = t;
    while(n<=0){
        *t = *s;
        ++t;++s;
        n--;
    }
    *t='\0';
    return temp;
}
