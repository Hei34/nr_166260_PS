#include <stdio.h>
#include <stdlib.h>
int ostatnia_cyfra(int);
int main()
{
    int n;
    printf("Podaj n\n");
    scanf("%d",&n);
    printf("%d",ostatnia_cyfra(n));
    return 0;
}
int ostatnia_cyfra(int n)
{
    return n%10;
}
