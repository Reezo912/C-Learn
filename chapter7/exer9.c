#include <stdio.h>

/* Function to find the greatest common divisor of two

     nonnegative integer values and to return the result    */

int gcd(int u, int v)

{

  int temp;

  while (v != 0) {

    temp = u % v;

    u = v;

    v = temp;
  }

  return u;
}

int lcm(int u, int v) { return u * v / gcd(u, v); }

int main(void) {

  int u, v;

  printf("Introduce dos valores para encontrar el minimo comun multiplo: \n");
  scanf("%i %i", &u, &v);

  if (u >= 0 && v >= 0) {
    int result = lcm(u, v);

    printf("El minimo comun multiplo es: %i\n", result);
  }
  return 0;
}
