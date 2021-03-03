#include <stdio.h>

int main(){
    int n=0;
    long long a;
    printf("Type an int: ");
    scanf("%ll", &a);
    while(a!=0){
        a/=10;
        n++;
    }
    printf("Count value : %d", n);
    return 0;
}
