#include <stdio.h>

int main(void) {

  int factorial = 1;

  for (int i = 1; i <= 10; ++i) {

    printf("%i\n", factorial);
    factorial = factorial * i;
  }
  return 0;
}
