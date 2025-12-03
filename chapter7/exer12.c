#include <stdio.h>

void transposeMatrix(int array[4][5], int array_T[5][4]) {

  int i, j;

  for (i = 0; i < 4; ++i) {

    for (j = 0; j < 5; ++j) {
      array_T[j][i] = array[i][j];
    }
  }
}

int main(void) {
  int matrix[4][5] = {{1, 2, 3, 4, 5},
                      {6, 7, 8, 9, 10},
                      {11, 12, 13, 14, 15},
                      {16, 17, 18, 19, 20}};

  int transposed[5][4];

  transposeMatrix(matrix, transposed);

  printf("Matriz Transpuesta (5x4):\n");
  for (int i = 0; i < 5; ++i) {   // Nota: ahora son 5 filas
    for (int j = 0; j < 4; ++j) { // y 4 columnas
      printf("%3i ", transposed[i][j]);
    }
    printf("\n");
  }
}
