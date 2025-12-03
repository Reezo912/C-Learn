#include <stdio.h>

int main(void) {

  int P[151];

  for (int i = 2; i < 151; ++i) {
    P[i] = 0;
  }

  int i = 2;

  while (i < 151) {

    if (P[i] == 0) {
      printf("%i\n", i);

      int j = 2;

      while (i * j < 151) {
        P[i * j] = 1;
        ++j;
      }
    }

    ++i;
  }
}
