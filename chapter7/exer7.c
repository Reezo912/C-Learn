#include <stdio.h>

long int x_to_the_n(long int x, long int n) {

  long int result = 1;

  printf("%li\n", result);
  for (int i = 1; i <= n; ++i) {
    result = result * x;
    printf("%li\n", result);
  }
  return result;
}

int main(void) {
  printf("2 elevado a 3 es: %li\n", x_to_the_n(2, 3));
  printf("10 elevado a 10 es: %li\n", x_to_the_n(10, 10));

  return 0;
}
