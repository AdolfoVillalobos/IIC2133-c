/*****************************************************************************/
/*                                 Funciones                                 */
/*****************************************************************************/
/*                                                                           */
/* El compilador de C lee el archivo de arriba hacia abajo, por lo que solo  */
/* se pueden llamar funciones que se sabe que existen, es decir que fueron   */
/* DECLARADAS anteriormente.                                                 */
/*                                                                           */
/* Hacemos la distinción entre DECLARAR y DEFINIR una función:               */
/*                                                                           */
/* DECLARAR:                                                                 */
/*    int funcion(int parametro);                                            */
/*                                                                           */
/* Esto sirve solo para que el compilador identifique que efectivamente      */
/* existe una funcion con ese nombre, tipo de retorno y tipos de parámetros  */
/* y te permita utilizarla.                                                  */
/*                                                                           */
/* DEFINIR:                                                                  */
/*    int funcion(int parametro)                                             */
/*    {                                                                      */
/*        // El código de la función                                         */
/*    }                                                                      */
/*                                                                           */
/* DEFINIR una función tambien la DECLARA. El concepto de DEFINIR y DECLARAR */
/* aplica tambien para variables y definiciones de tipos.                    */
/*                                                                           */
/* La definición de algo no necesariamente está en el mismo archivo          */
/* que su declaración. Ya vamos a ver por que esto es util para organizarnos */
/*                                                                           */
/* Este archivo tiene un par de experimentos que se caen intencionalmente,   */
/* asegurate de seguir las instrucciones para entender lo que esta pasando   */
/*                                                                           */
/* La guia Memoria.pdf explica como funciona el STACK en la segunda página   */
/*****************************************************************************/

int sumar(int a, int b)
{
  return a + b;
}

void first_direction(int a);
void second_direction(int a);

void infinite_recursion(int depth);

#include <stdio.h>

int main(int argc, char **argv)
{
  int x = 7;

  // Memory position: "&" operator (Hexadecimal)
  printf("X esta en %p\n", &x);

  // first_direction
  first_direction(7);
  second_direction(3);

  infinite_recursion(0);

  int A[100000];

  return 0;
}

void first_direction(int a)
{
  printf("El parametro de F1 esta en %p\n", &a);
  int b = a + 1;
  printf("La variable creada dentro de F1 esta en %p\n", &b);
}

void second_direction(int a)
{
  printf("El parametro de F2 esta en %p\n", &a);
  int b = a + 2;
  printf("La variable creada dentro de F2 esta en %p\n", &b);
  printf("Si llamamos F1 dentro de F2 entonces...\n");
  // first_direction(a);
}

void infinite_recursion(int depth)
{
  if (depth >= 0)
  {
    printf("Profundidad: %i\n", depth);
    infinite_recursion(depth + 1);
  }
}
