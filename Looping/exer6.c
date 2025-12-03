#include <stdio.h>

int main (void)
{
    int n, number, triangularNumber, counter, number_tries;

    printf("Number of tries: \n");
    scanf("%i", &number_tries);

    for (counter = 1; counter <= number_tries; ++counter){
        printf("What triangular number do you want? \n");
        scanf ("%i", &number);

        triangularNumber = 0;

        for (n = 1; n <= number; ++n)
            triangularNumber += n;
    
        printf("Triangular number %i is %i\n", number, triangularNumber);
    }

    return 0;
}