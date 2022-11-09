#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x = 0;
    printf("Enter Number: ");
    scanf("%d", &x);

    if(0 == x%2)
    {
        printf("Even Number\n");
    }
    else if(1 == x%2)
    {
        printf("Odd Number\n");
    }
    else
    {
        printf("Error\n");
    }
    return 0;
}
