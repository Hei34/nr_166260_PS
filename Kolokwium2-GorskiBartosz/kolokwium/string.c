#include <stdio.h>

//Napisz wskaźnikową wersję funkcji strncpyOdd. Funkcja ta ma kopiować n znaków, co drugi znak (nieparzysta pozycja) z napisu s do napisu t. Zadbaj o koniec napisu - NUL.
char* strncpyOdd(char *t, const char *s, unsigned int n);


char* strcpyOdd(char *t, const char *s);

int main(void)
{
    char* tu1 = calloc(50, sizeof(char));
    char napis[] = "tekst do skopiowania";

    strcpyEven(tu1, napis);

    printf("%s", tu1);
}

char* strcpyEven(char *t, const char *s)
{
    char* temp = t;

    ++t;
    while (*s)
    {
        *t = *s;
        ++t;
        s += 2;
    }

    *t = '\0';

    return temp;
}
