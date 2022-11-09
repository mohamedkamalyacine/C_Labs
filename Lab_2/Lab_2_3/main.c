#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x = 0;
    printf("Enter a Student Grade: ");
    scanf("%d", &x);

    if(x<=100 && x >= 85)
    {
        printf("Excellent\n");
    }
    else if(x < 85 && x >= 75)
    {
        printf("Very Good\n");
    }
    else if(x<75 && x>=65)
    {
        printf("Good\n");
    }
    else if(x<65 && x >= 50)
    {
        printf("Pass\n");
    }
    else if(x<50)
    {
        printf("Fail\n");
    }
    else
    {
        printf("Error");
    }
    return 0;
}
