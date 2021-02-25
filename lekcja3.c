#include <stdio.h>
#include <math.h>

int main(){

//////////////////////////warunek////wyswietl/else
//printf("liczba %d\n", (liczba>=0)?liczba:(-1)*liczba);

//int a, b;
//scanf("%i%i", &a, &b);
//printf("Wieksza %d\n", (fabs(a)>=fabs(b))?a:b);

//int x, y;
//scanf("%i%i", &a, &b);
//if(a<)

float x, y;
scanf("%f%f", &x, &y);
printf("Pole: %f\n", (x*y)/2);

float a, b, c, l;
scanf("%f%f%f", &a, &b, &c);
l = (a+b+c)/2;
printf("Pole: %f\n", sqrt((l*(l-a)*(l-b)*(l-c))));

}
