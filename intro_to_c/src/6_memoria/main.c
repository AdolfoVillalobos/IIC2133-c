#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int main(int argc, char **argv)
{

  int *E = malloc(10000000 * sizeof(int));
  int *F = malloc(10000000 * sizeof(int));
  int *G = malloc(10000000 * sizeof(int));
  int *H = malloc(10000000 * sizeof(int));

  free(E);
  free(F);
  free(G);
  free(H);

  int *I = malloc(100000000000000 * sizeof(int));

  if (I == NULL)
  {
    printf("Malloc fallo\n");
    free(I);
  }

  // Por ejemplo, creemos un arreglo de 10 elementos:
  int *J = malloc(10 * sizeof(int));

  // Si nos pasamos, el programa se PUEDE caer, pero valgrind nos va a avisar:
  // Esto es un ERROR DE MEMORIA
  // (INVALID WRITE) -> y dice el archivo, stack de llamadas, funcion y linea.
  J[10] = 1;
  // (INVALID READ) -> y dice el archivo, stack de llamadas, funcion y linea.
  J[4] = J[10];
  // (USE OF UNINITIALIZED VALUE) -> y dice el archivo, stack de llamadas, funcion y linea.
  printf("%i\n", J[3]);

  return 0;
}
