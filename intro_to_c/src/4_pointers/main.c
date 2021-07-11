#include <stdio.h>
#include <stdbool.h>

int main(int argc, char **arvg)
{
  int a = 7;
  printf("a = %i\n", a);
  printf("&a = a esta en %p\n", &a);

  // We can save the memory address

  int *x = &a;

  // x is a POINTER.
  printf("x = &a = %p\n", x);

  // We can read what is in x
  printf("*x points to %i\n", *x);

  // We can modify the memory value through *x
  *x *= 5;
  printf("Luego de *x *= 5; \t *x=x apunta a %i\n", *x);

  // Accessing the memory of *x
  printf("&(*x) = %p\n", &(*x));

  // X is also a variable. It has a memory address
  printf("&x = x esta en %p\n", &x);

  // We can save the memory address of pointer x in another variable y
  int **y = &x;
  printf("*(*y) = y apunta a x que apunta a %i\n", *(*y));

  *(*y) -= 2;
  printf("Luego de *(*y) -=2; \t *(*y) = y apunta a que apunta a %i\n", *(*y));

  // Paso por Referencia: pasa puntero
  // Paso por valor: Pasa una copia

  // EN  C todos los pasos son por valor: Debemos pasar un puntero para modificar objeto
  return 0;
}
