#include <stdio.h>
#include <stdbool.h>
#include "matrix.h"
#include "linked_list.h"

void matrix_test(int height, int width)
{
  Matrix *mat = matrix_init(height, width);

  printf("La matriz vale: \n");

  matrix_print(mat);

  Matrix *trans = matrix_transpose(mat);

  printf("La transpuesta es: \n");

  matrix_print(trans);

  // Liberamos
  matrix_destroy(mat);
  matrix_destroy(trans);
}

void list_test(int n)
{
  List *list = list_init();

  for (int i = 1; i <= n; i++)
  {
    list_append(list, i * i);
  }

  printf("La lista con los numeros al cuadrado contiene \n");

  list_print(list);

  list_destroy(list);
}

int main(int argc, char **argv)
{
  matrix_test(4, 3);

  list_test(10);

  return 0;
}
