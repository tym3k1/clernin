#include <stdio.h>
int main() {
    int a, b;
    printf("Enter an int: ");
    scanf("%i", &a);

    // shows error if the user enters a negative integer
    if (a < 0)
        printf("Error!.");
    else {
        for (i = 1; i <= n; ++i) {
            b *= i;
        }
        printf("Factorial of %d = %llu", n, fact);
    }

    return 0;
}
