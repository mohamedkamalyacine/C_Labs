#include <stdio.h>
#include <stdlib.h>
//#include <math.h>

int power(int, int);

int main()
{
    //int x = pow(10, 2);
    int x = 0;
    x = power(10,4);
    printf("%d\n", x);
    return 0;
}

int power(int n, int pow)
{
    static int result = 1;
    if(pow >= 1)
       {
           result = result*n;
           pow--;
           return power(n,pow);
       }
    else
       {
           return result*1;
       }

}
