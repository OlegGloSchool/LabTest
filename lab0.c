

#include <stdio.h>

int addFun(int inp1, int inp2);

int main() {

    printf("Hello world \n");

    int num1 = 1;
    int num2 = 4;
    int sum;

    sum = addFun(num1,num2);

    printf("sum is: %d\n",sum);

    return 0;
}

int addFun(int inp1, int inp2)
{
    int sum;
    
    sum = inp1 + inp2;

    return sum;
}