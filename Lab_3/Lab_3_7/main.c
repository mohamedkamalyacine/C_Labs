#include <stdio.h>
#include <stdlib.h>

int cube(int);

int main()
{
    int x = 0, k = 0;
    printf("Enter a number : ");
    scanf("%d", &x);

    k = cube(x);
    printf("%d", k);

    return 0;
}

int cube(int m)
{
    return m*m*m;
}
