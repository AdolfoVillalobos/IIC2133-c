#include <stdio.h>
#include <stdbool.h>

int main(int argc, char **argv)
{
  int x = 2;
  int y = 9;

  if (x < y)
  {
    printf("X < Y\n\n");
  }
  else if (x > y)
  {
    printf(" X > Y\n\n");
  }
  else
  {
    printf("X = Y\n\n");
  }

  // Truthy and Falsy values
  // Falsy: 0
  //Truthy: everything else
  int c = 1;
  while (38)
  {
    printf("C = %i\n\n", c);
    c++;

    if (c > 10)
    {
      break;
    }
  }

  // We better use booleans

  while (true)
  {
    printf("C = %i\n", c);
    c++;
    if (c > 15)
    {
      break;
    }
  }

  // for syntax: for( A; B; C)
  // A: 1 or more instructions before for
  // B: end condition: boolean
  // C: 1 or more instructions after every iteration

  printf("i++\n");
  for (int i = 1; i <= 10; i++)
  {
    printf("\ti = %i\n", i);
  }

  printf("i+=2\n");
  for (int i = 1; i <= 10; i += 2)
  {
    printf("\ti = %i\n", i);
  }

  printf("i*=2\n");
  for (int i = 1; i <= 10; i *= 2)
  {
    printf("\ti = %i\n", i);
  }

  // Boolean values and logical operations

  bool a = true;
  bool b = false;

  if (a || b)
  {
    printf("A o B = TRUE \n");
  }
  else
  {
    printf("A o B = FALSE \n");
  }

  if (a && b)
  {
    printf("A and B = TRUE\n");
  }
  else
  {
    printf("A and B= FALSE\n");
  }

  return 0;
}
