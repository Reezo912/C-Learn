/* Program to show a table of integers from 1 to 10
    and their squares                                */

#include <stdio.h>

int main (void)
{
    int number, square;

    number = 1;

    printf("Number      Square\n");
    printf("------      -------\n");

    for (number; number <= 10; ++number)  {
        square = number * number;
        printf("%2i             %2i\n", number, square);
        
    }
    
    return 0;

}