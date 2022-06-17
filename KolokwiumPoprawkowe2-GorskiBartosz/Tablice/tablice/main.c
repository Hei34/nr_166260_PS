#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
int main()
{
    const int N=100;
    int n;
    srand(time(0));
    n = rand()%N;
    printf("%d",n);
    int tab[n];

    //printf("Podaj n\n");
    //scanf("%d",n);

    return 0;
}
