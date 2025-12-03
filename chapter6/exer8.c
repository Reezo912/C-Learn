#include <stdio.h>

int main(void) {

  int i, num;

  printf("De que longitud quieres el array? ");
  scanf("%i", &num);

  long long int array[num + 1];

  for (i = 0; i <= num; ++i) {
    array[i] = i;
  }

  for (i = 0; i <= num; ++i)
    printf("%lli\n", array[i]);

  return 0;
}
