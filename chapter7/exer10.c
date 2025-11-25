#include <stdio.h>

int prime(int x) {
  // 1. Casos base: Los números menores o iguales a 1 NO son primos.
  if (x <= 1) {
    return 0;
  }

  // 2. El Bucle: Probamos a dividir por todos los números desde 2 hasta x-1
  // (Ejemplo: Si x es 9, probamos con 2, luego con 3... ¡y al dividir por 3
  // paramos!)
  for (int i = 2; i * i < x; ++i) {
    if (x % i == 0) {
      return 0; // Encontramos un divisor, NO es primo.
    }
  }

  // 3. Si el bucle termina y no encontró divisores, entonces ES primo.
  return 1;
}

int main(void) {

  int i;

  printf("Introduce un numero para saber si es primo: \n");
  scanf("%i", &i);

  int result = prime(i);

  if (result == 0)
    printf("El numero no es primo\n");
  else
    printf("el numero es primo\n");

  return 0;
}
