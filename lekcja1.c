#include <stdio.h>

int main()
{
int liczba;
    scanf("%d", &liczba);
    printf("%d\n", liczba);

    double wymierna;
    scanf("%lf", &wymierna);
    printf("f\n", wymierna);

    int pierwsza, druga, trzecia;
    scanf("%d", &pierwsza);
    scanf("%d", &druga);
    scanf("%d", &trzecia);
    printf("%d\n", pierwsza);
    printf("%d\n", druga);
    printf("%d\n", trzecia);

    int pierwotna;
    scanf("%d", &pierwotna)
    printf("%d\n", pierwotna+1);

    int pierwsza1, druga1, trzecia1;
    scanf("%d", &pierwsza1);
    scanf("%d", &druga1);
    scanf("%d", &trzecia1);
    double xd = (pierwsza1+druga1+trzecia1)/3;
    printf("%f", xd);

    int liczba, liczba2, liczba3;
    scanf("%d%d%d", &liczba, &liczba2, &liczba3);
    printf("%f", (float)(liczba + liczba2 + liczba3)/3);

    int liczba, liczba2, liczba3;
    scanf("%d%d%d", &liczba, &liczba2, &liczba3);
    printf("%f", (liczba + liczba2 + liczba3)/3.0);

}
