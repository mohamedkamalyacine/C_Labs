#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x=0, sum=0;
    do
    {
        printf("Enter a number: ");
        scanf("%d", &x);
        sum += x;
    }while(sum<=100);
    printf("Numbers summation exceeds 100\n");
    return 0;
}
