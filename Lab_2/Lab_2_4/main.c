#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x=0, y=0, sum=0, sub=0, mul=0;
    float divide;
    char op = 0;

    printf("Enter operand_1 : ");
    scanf("%d", &x);

    printf("Enter operand_2 : ");
    scanf("%d", &y);

    printf("Enter operator : ");
    op = getchar();
    scanf("%c", &op);

    switch(op)
    {
    case '+':
            sum = x+y;
            printf("Sum = %d\n", sum);
        break;

    case '-':
        sub = x-y;
        printf("Sub = %d\n", sub);
        break;

    case '*':
        mul = x*y;
        printf("%d", mul);
        break;

    case '/':
        divide = (float)x/y;
        printf("%0.2f", divide);
        break;

    default:
        printf("Error\n");
        break;
    }

    return 0;
}
