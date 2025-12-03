#include <stdio.h>

// (3.31 x 10-8 x  2.01 x 10-7) / (7.16 x 10-6 + 2.01 x 10-8)

int main(void) {

  printf("The result is: %.2e\n", (3.31e-8 * 2.01e-7) / (7.16e-6 + 2.01e-8));

  return 0;
}
