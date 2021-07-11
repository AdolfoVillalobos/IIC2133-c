#include <stdio.h>

int main(int argc, char **argv)
{
  // Type Int
  int x = 1287;
  printf("X = %i\n", x);
  printf("Size of INT: %zu\n\n", sizeof(int));

  // Type char
  char y = 'h';
  printf("Y = %c\n", y);
  printf("Size of CHAR: %zu\n\n", sizeof(char));

  // Type Float
  float z = 2.72181;
  printf("Z = %f\n", z);
  printf("Size of FLOAT: %zu\n\n", sizeof(float));

  //Type Double
  double z2 = 122189.128391;
  printf("Z2 = %lf\n", z2);
  printf("Siize of DOUBLE: %zu\n\n", sizeof(double));

  // Casting: float as int
  printf("Z = 2.721810 interpretado como int: %i\n\n", z);
  printf("Y = 'h' interpretado como int: %i\n\n", y);

  // We can assign numerical values to char

  y = 105;
  printf("Y = 105 interpretado como int : %i\n\n", y);
  printf("Y = 105 interpretado como char : %c\n\n", y);

  // And operate as if it were a number
  y = y - 1;
  printf("Y = 104 interpretado como char %c\n\n", y);

  // In arithmetic operations, integer division returns integer

  double r = 5 / 3;
  printf("5 /3 = %lf\n\n", r);

  // To correctly interpret the integer division value, we need casting
  r = (double)5 / (double)3;
  printf("5 / 3 con casting = %lf \n\n", r);

  // We can cast once

  r = (double)5 / 3;
  printf("5 / 3 con un solo casting = %lf\n\n", r);

  return 0;
}
