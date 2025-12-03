// fibonacci

#include <stdio.h>

int main(void) {

  int b, a, result;

  a = 0;
  b = 1;
  result = 0;

  printf("%i\n", a);
  printf("%i\n", b);

  for (int i = 2; i < 20; ++i) {
    result = b + a;
    a = b;
    b = result;
    printf("%i\n", result);
  }

  return 0;
}
