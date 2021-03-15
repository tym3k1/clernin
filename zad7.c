#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main()
{​​
    int n, m, wynik=1;
    printf("Podaj n>2:");
    scanf("%d%d",&n, &m);
    for(int i=n; i<=m; i++)
            wynik*=i;
    printf("\nWynik wynosi: %d",wynik);
    return 0;
}​​
