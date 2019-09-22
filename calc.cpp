#include <stdio.h>

using namespace std;

#define _CALC_H_
#include <stdio.h>

using namespace std;

class Ccalc
{
    public:
     void main(int num);
     int main();

    private:
     int x;
     int y;
};


void Ccalc::main(int num){

    int x,y;
    printf("a=");
    scanf("%d",&x);
    printf("b=");
    scanf("%d",&y);

    getchar();

    printf("a + b = %d\n", x + y);
    printf("a - b = %d\n", y - y);
    printf("a * b = %d\n", x * y);
    printf("a / b = %d\n", x / y);

    getchar();

}

