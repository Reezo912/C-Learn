/*
Write a program that calculates the sum of the digits of an integer. 
For example, the sum of the digits of the number 2155 is 2 + 1 + 5 + 5 or 13. 
The program should accept any arbitrary integer typed in by the user.
*/

#include <stdio.h>

int main (void) {

    int number, right_number, sum;

    printf("Enter your number: \n");
    scanf("%i", &number);
        
    sum = 0;

    do  {
        right_number = number % 10;
        sum += right_number;
        number = number / 10;
    }
    while (number != 0);
    printf("La suma es: %i\n", sum);

    return 0;
}