// printing calculator with accumulator exercise 4 in Making decisions

#include <stdio.h>
#include <stdbool.h>


int main (void)
{
    float number, accumulator;
    char operator;
    bool state = true;

    while ( state == true )    {
        printf ("Please type the number and the operation: \n");
        scanf ("%f %c",&number, &operator);

        switch (operator)
        {
        case 'S':
            accumulator = number;
            break;
        case '+':
            accumulator += number;
            printf("Result is %.3f\n", accumulator);
            break;
        case '-':
            accumulator -= number;
            printf("Result is %.3f\n", accumulator);
            break;
        case '*':
            accumulator *= number;
            printf("Result is %.3f\n", accumulator);
            break;
        case '/':
            if (number == 0) {
                printf ("Cant divide by 0.\n");
            }   else {
                accumulator /= number;
                printf("Result is %.3f\n", accumulator);
            }
            break;
        case 'E':
            state = false;
            break;
            
        default:
            printf("Not a valid operation\n");
            break;
        }
    }

}