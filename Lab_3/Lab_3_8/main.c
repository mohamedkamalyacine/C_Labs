#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x =0, i = 0;
    printf("Enter a number: ");
    scanf("%d", &x);
    if(x !=0)
    {
        for(i=1; i<=10; i++)
        {
            printf("%d * %d = %d\n", i, x, i*x);
        }
    }
    else
        printf("error\n");
    return 0;
}
