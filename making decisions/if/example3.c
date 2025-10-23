// Program to determine if a number is even or odd.

#include <stdio.h>

int main (void)
{
    int number_to_test, remainder;

    printf ("Which number do you want to test for even or uneven? ");
    scanf ("%i", &number_to_test);

    remainder = number_to_test % 2;

    if (remainder == 0)
        printf("The number is even.\n");
    else
        printf("The number is odd.\n");

    return 0;
}