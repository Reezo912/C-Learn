#include <stdio.h>

int main(void) {
  int farenheit = 27;
  float celsius;

  celsius = ((float)farenheit - 32) / 1.8;

  printf("%i degrees farenheit is %.2f degrees celsius\n", farenheit, celsius);

  return 0;
}
