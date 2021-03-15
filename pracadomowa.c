#include <stdio.h>


int main() {
    int n, numerLiczby = 0, liczba = 2, wynik = 0;
    printf("Type int:");
    scanf("%d", &n)
    while (n > numerLiczby) {
        for (int k = 1; k < liczba; k++) {
            if (liczba % k == 0) { wynik += k; }
        }
        if (wynik == liczba) {
            numerLiczby++;
        }
        liczba++;
        wynik = 0;
    }
    printf("%d",liczba-1);

    return 0;
}

#include <stdio.h>

int main() {
    int a=1, maxInt = 1000, b, c, d;
    double zmPom1, zmPom2;
    printf("O to pary: \n");
    while (maxInt > a) {
        for (b = 1; b < maxInt; b++) {
            c = sqrt(a * b);
            zmPom1 = sqrt(a * b);
            if (c == zmPom1) {
                d = sqrt((a + 1) * (b + 1));
                zmPom2 = sqrt((a + 1) * (b + 1));
                if (d == zmPom2 && a!=b) {
                    printf("(%d,%d)\n", a, b);
                }

            }
        } a++;
    }
    return 0;

}

