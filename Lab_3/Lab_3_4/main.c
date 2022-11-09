#include <stdio.h>
#include <stdlib.h>

int maxOfThree(int,int,int);

int main()
{
    int check = 0;
    int x=0, y=0, z=0;
    printf("Enter num1 : ");
    scanf("%d", &x);

    printf("Enter num2 : ");
    scanf("%d", &y);

    printf("Enter num2 : ");
    scanf("%d", &z);

    check = maxOfThree(x,y,z);

    if(check != 'E')
    {
        printf("the max of numbers : %d", check);
    }
    else
    {
        printf("Error\n");
    }

    return 0;
}

int maxOfThree(int a, int b, int c)
{
    if(a > b && a > c)
    {
        return a;
    }
    else if(b > a && b > c)
    {
        return b;
    }
    else if(c > a && c > b)
    {
        return c;
    }
    else
        return 'E';
}
