#include<math.h>
#include <stdio.h>

int main(){
    //ARYTMETYCZNA
    int number, number2, number3;
    scanf("%d%d%d", &number, &number2, &number3);

    int mult = number * number2 * number3;
    printf("%.4f", pow(mult, (1.0 / 3)));
    //HARMONICZNA
    int a,b,c;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);

    printf("%f", 3.0/(1.0/a+1.0/b+1.0/c));
    //########################################
    float a, b, c, del, wy1, wy2;
    scanf("%f%f%f", &a, &b, &c);
    del = (b*b)-4*(a*(c))
    wy1 = (-b-sqrt(del))/2a;
    wy2 = (-b+sqrt(del))/2a;
    if(del>0){
        printf("Wyznacznik 1:%f wyznacznik 2::%f", wy1, wy2);
    } else if(del==0){
        printf("Wyznacznik :%f", wy1);
    } else {
        printf("Brak wyz.");
    }

    //#########################################
    char operator;
    double first, second;
    printf("Enter an operator (+, -, *,): ");
    scanf("%c", &operator);
    printf("Enter two operands: ");
    scanf("%lf %lf", &first, &second);

    switch (operator) {
    case '+':
        printf("%.1lf + %.1lf = %.1lf", first, second, first + second);
        break;
    case '-':
        printf("%.1lf - %.1lf = %.1lf", first, second, first - second);
        break;
    case '*':
        printf("%.1lf * %.1lf = %.1lf", first, second, first * second);
        break;
    case '/':
        printf("%.1lf / %.1lf = %.1lf", first, second, first / second);
        break;
    default:
        printf("Error! operator is not correct");
    }

    //#############################################
    int n,m;
    scanf("%d%d", &n, &m);
    while(n<m){
        n += n;
        printf("%d", n)
    }

    //##############################################

    int n,m;
    scanf("%d%d", &n, &m);
    for(int i = 1; i<=m; i++){
        printf("%d\n", n*i)
    }

    int m, w=1;
    scanf("%d", &m);
    for (int i = 1; i<=m; i++){
        w *= i;
        printf("%d", w)
    }

    //#######################################







    //#############################



    return 0;
}
