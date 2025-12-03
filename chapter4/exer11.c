// Programa para calcular la suma de los numeros de un numero dado por el
// usuario

#include <stdio.h>

int main(void) {

  int num;
  int suma;
  int result = 0;

  printf("Introduce un numero: \n");
  scanf("%d", &num);

  while (num > 0) {

    suma = num % 10;
    num /= 10;
    printf("%i\n", suma);
    result += suma;
  }

  printf("El resultado es: %i\n", result);

  return 0;
}
