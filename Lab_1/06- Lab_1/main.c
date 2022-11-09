#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x=0, y=0;
    int sum, sub, mul;
    float divide;
    printf("Enter num1 = ");  scanf("%d", &x);
    printf("Enter num2 = ");  scanf("%d", &y);

    sum = x+y;
    sub = x-y;
    mul = x*y;
    divide = (float)x/y;

    printf("num1+num2 = %d\n", sum);
    printf("num1-num2 = %d\n", sub);
    printf("num1*num2 = %d\n", mul);
    printf("num1+num2 = %f\n", divide);

    return 0;
}
