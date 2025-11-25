#include <stdio.h>

int arraySum(int array[], int n_elements) {

  int result = 0;

  for (int i = 0; i < n_elements; ++i) {
    result += array[i];
  }
  return result;
}

int main(void) {

  int valores[5] = {10, 20, 30, 40, 50};
  int resultado1 = arraySum(valores, 5);

  printf("Suma 1 (debe dar 150): %i\n", resultado1);

  int temperaturas[4] = {12, -5, 0, 24};
  int resultado2 = arraySum(temperaturas, 4);

  printf("Suma 2 (debe dar 31): %i\n", resultado2);

  return 0;
}
