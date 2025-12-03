/* Calculate triangular numbers using
triangularNumber = n (n+1) / 2         */

#include <stdio.h>

int main (void)
{
    int n, triangularNumber;

    n = 1;

    printf("Number      Triangular\n");
    printf("------      -------\n");

    for (n; n <= 10; ++n)    {
        triangularNumber = n * (n + 1) / 2;
        printf("%3i            %i\n", n, triangularNumber);
    }

    return 0;
}