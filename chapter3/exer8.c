#include <stdio.h>

int main(void) {

  int i = 12258;
  int j = 23;

  int result = i + j - i % j;

  printf("El resultado es: %i\n", result);

  return 0;
}
