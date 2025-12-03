/*  Program to generate the 1st 5 factorials of an integer  */

#include <stdio.h>

int main (void)
{
    int n, factorial;

    factorial = 1;

    printf("Number      Factorial\n");
    printf("------      -------\n");

    for ( n = 1; n <= 10; ++n ) {
        factorial = factorial * n;
        printf("%2i         %i\n", n, factorial);
    }

    return 0;

}