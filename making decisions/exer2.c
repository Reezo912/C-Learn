/*
Write a program that accepts two integer values typed in by the user. 
    Display the result of dividing the first integer by the second, 
    to three-decimal-place accuracy.
    Remember to have the program check for division by zero.
*/

#include <stdio.h>


int main (void)
{
    int value1, value2;

    printf("Introduce two numbers to divide: ");
    scanf("%i %i", &value1, &value2);

    if ( value2 == 0 )
        printf("Cant divide by 0.\n");
    else
        printf("%i divided by %i is %.3f\n", value1, value2,(float) value1 / value2);

    return 0;
}