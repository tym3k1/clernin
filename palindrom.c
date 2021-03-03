#include <stdio.h>

int main(){
    int a, res, newa, orga;
    scanf("%d", &a);
    orga = a;

    while(a!=0){
        res = a%10;
        newa = newa * 10 + res;
        a = a/10;
    }

    if(orga == newa){
        printf("Its a palindrome: %d\n", newa);
    } else {
        printf("Its not a palindrome:\n");
    }
    return;
}
