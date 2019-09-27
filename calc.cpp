#include <stdio.h>

int main (void)
{

    double x;
    double y;
    double sum;
    double dif;
    double mul;
    double div;

    printf("a=");
    scanf("%lf", &x);

    printf("b=");
    scanf("%lf", &y);

    printf("%f \n", x);

    sum = x + y;
    dif = x - y;
    mul = x * y;
    div = x / y;

    printf("\n");
    printf("x + y = %f \n", sum);
    printf("x - y = %f \n", dif);
    printf("x * y = %f \n", mul);
    printf("x / y = %f \n", div);

    return 0;
}

