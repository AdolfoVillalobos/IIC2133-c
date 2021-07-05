#include <stdio.h>

int main(int argc, char** argv)
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

  return 0;
}
