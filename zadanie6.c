#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main()
{​​
    int n,wynik=1;
    printf("Podaj n>2:");
    scanf("%d",&n);
    for(int i=2; i<=n; i++)
        if(i%2==0)
        {​​
            printf("%d ",i);
            wynik*=i;
        }​​
    printf("\nWynik wynosi: %d",wynik);
    return 0;
}​​
