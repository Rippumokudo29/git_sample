#include "calc.cpp"
#include <stdio.h>

void Ccalc::get(int num)
{
    int x,y;
    printf("a=");
    fscanf("%d",&x);
    printf("b=");
    fscanf("%d",&y);

    getchar();

    printf("a + b = %d", x + y);
    printf("a - b = %d", x - y);
    printf("a * b = %d", x * y);
    printf("a / b = %d", x / y);

    getchar();

}

