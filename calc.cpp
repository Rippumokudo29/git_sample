#include <stdio.h>

void setup (){
     int main(void);

     int x;
     int y;

     int sum;
     int dif;
     int mul;
     int div;
};


int main(void){

    int x,y;
    printf("a=");
    scanf("%d",&x);
    printf("b=");
    scanf("%d",&y);

    getchar();

int sum, dif, mul, div;

    sum = x + y;
    dif = x - y;
    mul = x * y;
    div = x / y;

    printf("a + b = %d\n", &sum);
    printf("a - b = %d\n", &dif);
    printf("a * b = %d\n", &mul);
    printf("a / b = %d\n", &div);

    getchar();
    
    return 0;

}

