// Arrays
// - Adjacent cells of the same size
// - Adjacent on memory
// - Size of the array is fixed
// - Access to Array elements is O(1)

#include <stdio.h>
#include <stdbool.h>

int main(int argc, char **argv)
{
  // All array elements are of the same type
  int A[6];

  for (int i = 0; i < 6; i++)
  {
    printf("A[%i] = %i\n", i, A[i]);
  }

  printf("OJO que no se van a caer si nos salimos del arreglo \n");

  for (int i = 0; i <= 7; i++)
  {
    printf("A[%i] = %i\n", i, A[i]);
  }

  printf("Tambien es posible definir el arrego con valores iniciales\n");

  int B[6] = {4, 8, 15, 16, 23, 42};

  printf("Ahora con un arreglo que trae valores iniciales");

  for (int i = 0; i < 6; i++)
  {
    printf("B[%i] = %i\n", i, B[i]);
  }

  // ARRAY cells are adjacent in memory

  for (int i = 0; i < 6; i++)
  {
    printf("&B[%i] = %p\n", i, &B[i]);
  }

  // The memory addresses are separated by the int size
  printf("La diferencia de las direcciones es: %zu\n", sizeof(int));

  // What is really B? -> The memory address to the first element

  printf("B = %p\n", B);

  // Arrays where pointers

  int *pB = B;

  printf("Ahora, si interpretamos B como un puntero, pB\n");

  for (int i = 0; i < 6; i++)
  {
    printf("pB[%i] = %i\n", i, pB[i]);
  }

  // A[i] = *(A + i * sizeof(T))

  printf("*(pB + 3) = pB[3] = %i\n", *(pB + 3));

  return 0;
}
