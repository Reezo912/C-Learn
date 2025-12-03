/* This program adds two integer values
 and display the sum of them */

 #include <stdio.h>

 int main(void)
 {
    // Declare variables
    int value1, value2, sum;

    // Asign Values and calculate sum
    value1 = 35;
    value2 = 50;
    sum = value1 + value2;

    printf("The sum of %i and %i is %i\n", value1, value2, sum);

    return 0;
 }