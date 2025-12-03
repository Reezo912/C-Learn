#include <stdio.h>
int main(void) {

  int x = 1, x_square = 1;

  printf("number      square\n");

  for (int n = 0; n <= 10; ++n) {
    x_square = x * x;
    printf("%i          %i\n", x, x_square);
    x += 1;
  }

  return 0;
}
