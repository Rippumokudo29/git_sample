#include <stdio.h>


int main(void){

    double x,y;

    printf("a=");
    scanf("%lf",&x);
    printf("b=");
    scanf("%lf",&y);

    getchar();
    
      double sum, dif, mul, div;

    sum = x + y;
    dif = x - y;
    mul = x * y;
    div = x / y;

    printf("a + b = %f\n", sum);
    printf("a - b = %f\n", dif);
    printf("a * b = %f\n", mul);
    printf("a / b = %f\n", div);

    getchar();
    
    return 0;

}

