#include <stdio.h>

int main(void) {

  int n = 50;
  int result;

  // triangularNumber = n (n + 1) / 2

  for (int i = 5; i <= n; i += 5) {
    result = i * (i + 1) / 2;

    printf("%i\n", result);
  }
  return 0;
}
