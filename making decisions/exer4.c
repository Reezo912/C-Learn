/*
5. You developed Program 4.9 to reverse the digits of an integer
 typed in from the terminal. However, this program does
 not function well if you type in a negative number.
 Find out what happens in such a case and then modify the program so that
  negative numbers are correctly handled.
  For example, if the number −8645 is typed in, the output of
  the program should be 5468−.
*/

#include <stdio.h>

int main(void) {
  int number, right_digit, original_number;

  printf("Enter your number.\n");
  scanf("%i", &number);

  original_number = number;

  do {
    right_digit = number % 10;
    if (right_digit < 0)
      right_digit = -right_digit;

    printf("%i", right_digit);
    number = number / 10;
  } while (number != 0);

  if (original_number < 0)
    printf("-");

  printf("\n");
  return 0;
}
