/*
 Write a program that takes an integer keyed in from the terminal 
 and extracts and displays each digit of the integer in English. 
 So, if the user types in 932, the program should display
 nine three two

 Remember to display “zero” if the user types in just a 0. 
 (Note: This exercise is a hard one!)
*/

#include <stdio.h>


int main (void)
{
    int number, digit, reversed = 0;

    printf ("Enter your number: \n");
    scanf ("%i", &number);

    // Caso especial si es = 0
    if ( number == 0)   {
        printf("zero\n");
        return 0;
    }
    
    int temp = number;
    while (temp != 0) {
        reversed = reversed * 10 + (temp % 10);
        temp /= 10;
    }




    while (reversed != 0) {
        digit = reversed % 10;
        switch (digit)  {
            case 0: printf("zero "); break;
            case 1: printf("one "); break;
            case 2: printf("two "); break;
            case 3: printf("three "); break;
            case 4: printf("four "); break;
            case 5: printf("four "); break;
            case 6: printf("six "); break;
            case 7: printf("seven "); break;
            case 8: printf("eight "); break;
            case 9: printf("nine "); break;
        }
        reversed /= 10;
    }

    printf("\n");
    return 0;
}