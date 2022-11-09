#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x=0, y=0;
    int quotient, reminder;

    printf("Enter num1 = ");
    scanf("%d", &x);
    printf("Enter num2 = ");
    scanf("%d", &y);

    quotient = x/y;
    reminder = x%y;

    printf("Quotient = %d\n", quotient);
    printf("Reminder = %d\n", reminder);

    return 0;
}
