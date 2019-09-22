#include "calc.h"
#include <stdio.h>

void Ccalc::get(int num)
{
    int x,y;
    printf("a=");
    scanf("%d",&x);
    printf("b=");
    scanf("%d",&y);

    getchar();

    printf("a + b = %d", x + y);
    printf("a - b = %d", x - y);
    printf("a * b = %d", x * y);
    printf("a / b = %d", x / y);

    getchar();
    
}

