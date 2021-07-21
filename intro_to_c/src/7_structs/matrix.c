#include "matrix.h"
#include <stdio.h>
#include <stdlib.h>

// Initialize matrix
Matrix *matrix_init(int height, int width)
{
  Matrix *mat = malloc(sizeof(Matrix));
  mat->height = height;
  mat->width = width;

  mat->matrix = malloc(height * sizeof(int *));
  for (int row = 0; row < height; row++)
  {
    mat->matrix[row] = malloc(width * sizeof(int));
    for (int col = 0; col < width; col++)
    {
      mat->matrix[row][col] = rand() % 10;
    }
  }
  return mat;
}

// Transpose matrix
Matrix *matrix_transpose(Matrix *original)
{
  Matrix *trans = matrix_init(original->width, original->height);
  for (int row = 0; row < original->height; row++)
  {
    for (int col = 0; col < original->width; col++)
    {
      trans->matrix[col][row] = original->matrix[row][col];
    }
  }

  return trans;
}

// Print matrix
void matrix_print(Matrix *mat)
{
  for (int row = 0; row < mat->height; row++)
  {
    for (int col = 0; col < mat->width; col++)
    {
      printf("%i ", mat->matrix[row][col]);
    }
    printf("\n");
  }
}

void matrix_destroy(Matrix *mat)
{
  for (int row = 0; row < mat->height; row++)
  {
    free(mat->matrix[row]);
  }
  free(mat->matrix);
  free(mat);
}
