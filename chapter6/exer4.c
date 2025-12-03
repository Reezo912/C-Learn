#include <stdio.h>

int main(void) {

  float suma = 0, result = 0;

  float array[10] = {1.2, 2.4, 3.1, 3.2, 10.5, 1003.3, 12.3, 0.4, 9.3, 10.1};

  for (int i = 0; i < 10; ++i)
    suma += array[i];

  result = suma / 10;

  printf("la suma es de: %.2f\n", suma);
  printf("la media es de: %f\n", result);
  return 0;
}
