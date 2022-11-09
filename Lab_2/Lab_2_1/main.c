#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x = 0;
    printf("Enter Number: ");
    scanf("%d", &x);

    if(x>0)
    {
        printf("Positive Number\n");
    }
    else if(0==x)
    {
        printf("Zero\n");
    }
    else
    {
        printf("Negative Number\n");
    }

    return 0;
}
