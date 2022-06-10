#include <stdio.h>

//Napisz wskaŸnikow¹ wersjê funkcji strcatParzyste. Funkcja ta ma dolaczac co drugi znak (myslac jak o indeksacji czyli 0, 2, 4....) z napisu strFrom do napisu strTo. Zadbaj o koniec napisu - NUL.
char *strcat (char* strTo, const char* strFrom);

int main(void)
{
    char* tutaj = calloc(50, sizeof(char));
    char napis1[] = "c1d1ru1g1i";

    strcat(tutaj, napis1);

    printf("%s", tutaj);
}

char* strcat(char *strTo, const char *strFrom)
{
    char* temp = strTo;

    while (*strFrom)
    {
        *strTo = *strFrom;
        ++strTo;
        strFrom += 2;
    }

    *strTo = '\0';

    return temp;
}
