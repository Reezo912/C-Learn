#include <stdio.h>

int main (void)
{
    int value1, value2;

    printf("Introduce two integers to evaluate: ");
    scanf("%i %i", &value1, &value2);

    if ( value1 % value2 == 0 )
        printf("Its even.\n");
    else
        printf("Nope not even.\n");

    return 0;
}